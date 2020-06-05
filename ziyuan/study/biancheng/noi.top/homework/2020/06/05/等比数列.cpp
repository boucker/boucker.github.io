#include <iostream>
using namespace std;
int main() {
	long long a, b, p = 10000007;
	int w, y1, y2, y3;
	cin >> w >> y2 >> y3 >> b;
	b--;
	a = y2 / w;
	a %= p, w %= p;
	while(b != 0) {
		if(b % 2 == 1) {
			w = (w * a) % p;
		}
		a = (a * a) % p;
		b >>= 1; 
	}
	cout << w;
}
