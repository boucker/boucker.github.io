// -*- coding: utf-8 -*- //

/*
	Created: Sat May 16 17:30:26 2020
	Last Change: Sat May 16 17:39:03 2020
	@author: Àîå«É­
*/

#include <iostream>
#include <vector>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	for(int i = 1; i <= m; i++) {
		int x;
		cin >> x;
		if(x == 1) {
			int a, b;
			cin >> a >> b;
			v.insert(v.begin() + a + 1, b); 
		}
		else {
			int a;
			cin >> a;
			v.erase(v.begin() + a);
		}
	}
	for(int i = 1; i <= v.size() - 1; i++) {
		cout << v[i] << " ";
	}
	return 0;
}
