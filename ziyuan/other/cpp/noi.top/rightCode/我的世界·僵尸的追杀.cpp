#include <iostream>
using namespace std;
int main() {
	int a, b, n, cnt = 0;
	char x[1005][1005];
	cin >> a >> b;
	cin >> n;
	for(int i = 1; i <= a; i++) {
		for(int j = 1; j <= b; j++) {
			cin >> x[i][j];
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(x[i][j] == '@') {
				cnt++;
			}
		}
	}
	cout << cnt;
}
