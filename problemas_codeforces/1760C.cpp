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
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		vector <int> v(a);
		vector <int> o(a);
		for(int j = 0; j < a; j++){
			cin >> v[j];
			o[j] = v[j];
		}
		sort(all(o));
		
		int max = o[a - 1];
		int max2 = o[a - 2];
		for(int j = 0; j < a; j++){
			if (v[j] == max){
				cout << max - max2;
			} else{
				cout << v[j] - max;
			}
			cout << " ";
		}
		cout << "\n";
	}
    return 0;
}