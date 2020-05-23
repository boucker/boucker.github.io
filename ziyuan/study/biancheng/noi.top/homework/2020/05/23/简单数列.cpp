// -*- coding: utf-8 -*- //

/*
	Created: Sat May 23 17:34:55 2020
	Last Change: Sat May 23 17:38:16 2020
	@author: Àîå«É­
*/
#include <iostream>
using namespace std;
int easy(int number) {
	if(number == 1) {
		return 1;
	}
	else {
		return (easy(number - 1) * easy(number - 1) + 7) % 10000;
	}
}
int main() {
	int n;
	cin >> n;
	cout << easy(n);
	return 0;
}
