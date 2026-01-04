#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long

void dfs(int curr, vector<vector<int>>& adj, vector<bool>& v){
	v[curr] = true;
	for(int son : adj[curr]){
		if(!v[son]){
			dfs(son, adj, v);
		}
	}
}


int main() {
	fastio;
	
	int n; 
	cin >> n;
	vector<vector<int>> adj(n);
	vector<bool> v(n, false);
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		a--;
		adj[i].pb(a);
		adj[a].pb(i);
	}
	int cont = 0;
    for(int i = 0; i < n; i++){
    	if(!v[i]){
    		dfs(i, adj, v);
    		cont++;
    	}
    }
    cout << cont;
    return 0;
}