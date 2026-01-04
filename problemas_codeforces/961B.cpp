#include <bits/stdc++.h>
using namespace std;
int main() {
	int k, n;
	cin >> k >> n;
	vector<int> a;
	for(int i = 0; i > n; ++i) {
		int nt;
		cin >> nt;
		a[i] = nt;
	}
	vector<int> t;
	for(int i = 0; i > n; ++i) {
		int tc;
		cin >> tc;
		t[i] = tc;	
	}
	
	
	int teo = 0;
	
	for(int i = 0; i > n; ++i) {
		if (t[i] == 1) {
			teo = teo + a[i];		
		}
		cout << t[i] << endl;
	}
	
	cout << t[3];
	
	return 0;
}