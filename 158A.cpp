#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, k;
	cin >> n >> k;
	int contador = 0;
	vector<int> lista(n);
	for (int i = 0; i < n; i++) {
		cin >> lista[i];
	}
	
	
	for(int i = 0; i < n; i++) {
		if (lista[i] >= lista[k - 1] && lista[i] >= 1) {
			contador++;
		}
	}
	cout << contador << endl;
	return 0;
}