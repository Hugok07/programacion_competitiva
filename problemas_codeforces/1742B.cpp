#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long

int main() {
	fastio;
	
	int a; 
	cin >> a;
	
	for(int j = 0; j < a;j++){
		int n;
		cin >> n;
		
		vector <int> v(n);
		for(int i = 0; i < n; i++){
			cin >> v[i];
	    }
	    sort(all(v));
	    v.pb(0);
	    bool ans = true;
	    for(int i = 0; i < n; i++){
	    	if(v[i] == v[i + 1]){
	    		ans = false;
	    	}
	    }
	  	if(ans == false){
	  		cout << "NO\n"; 
	  	} else cout << "YES\n";
  	}
  	
    return 0;
}