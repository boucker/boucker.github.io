#include <iostream>
#include <iomanip> 
using namespace std;
int main() {
	int cnt, len;
	double all, gpa;
	string s;
	cin >> s;
	len = s.length();
	for(int i = 0; i < len; i++) {
		if(s[i] == 'A' || s[i] == 'B' || s[i] == 'C' || s[i] == 'D') {
			if(s[i] == 'A') {
				all += 4.0;
			}
			else if(s[i] == 'B') {
				all += 3.0;
			}
			else if(s[i] == 'C') {
				all += 2.0;
			}
			else if(s[i] == 'D') {
				all += 1.0;
			}
			cnt++;
		}
		if(s[i] == '+' || s[i] == '-') {
			if(s[i] == '+') {
				all += 0.3;
			}
			else {
				all -= 0.3;
			}
		}
	}
	gpa = all / cnt;
	cout << fixed << setprecision(2) << gpa;
}
