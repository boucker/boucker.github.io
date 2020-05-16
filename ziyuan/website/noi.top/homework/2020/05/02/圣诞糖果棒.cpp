#include <bits/stdc++.h>

using namespace std;

int n, k;
double l, r, mid, L[100001];

double max(double a, double b) {
	if(a > b) return a;
	else return b;
}
bool cal(double x) {
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		sum += L[i] / x;
	}
	if(sum >= k) {
		return true;
	}
	else {
		return false;
	}
}

void outPut_rejectionDoubleNumber(double n, int retainFigures) {
	cout << fixed << setprecision(retainFigures) << n;
}

int main() {
	cin >> n >> k;
	
	for(int i = 1; i <= n; i++) {
		cin >> L[i];
		r = max(r, L[i]); 
	}
	
	double ans;
	l = 0;
	
	while(l <= r) {
		mid = (l + r) / 2;
		
		int q = cal(mid);
		
		if(q == 1) {
			l = mid + 0.0001;
			ans = mid;
		}
		
		else {
			r = mid - 0.0001;
		}
	}
	
	outPut_rejectionDoubleNumber(ans, 2);
	
	return 0;
}
