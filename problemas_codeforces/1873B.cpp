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
		int a; cin >> a;
		
		vector <int> v(a);
		for(int j = 0; j < a; j++){
			 cin >> v[j];
		}
		int ans;
		sort(all(v));
		
		v.pb(1);
		v[0] = v[0] + 1;
		ans = 1;
		for(int k = 0; k < a; k++){
			ans = ans * v[k];
		}
		cout <<  ans << "\n";
		v.clear();
	}
    
    return 0;
}