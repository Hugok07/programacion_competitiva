#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long

int main() {
	fastio;
	
	int n; 
	cin >> n;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		int min = a;
		int max = 0;
		vector <char> v(a);
		for(int j = 0; j < a; j++){
			cin >> v[j];
			if(v[j] == 'B'){
				if(j < min){
					min = j;
				}
				if(j > max){
					max = j;
				}
			}
		}
		cout << max - min  + 1<< "\n";
					
	}
	
    
    return 0;
}