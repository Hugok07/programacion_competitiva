#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	int contador = 0;
	cin >> n;
	cin.ignore();
	for (int i = 0; n > i; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		
		int suma = a + b + c;
		if (suma >= 2) {
			contador++;
		}
	}
	
	cout << contador << endl;
	
	return 0;
}