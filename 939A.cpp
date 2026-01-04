#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long

int cont = 0;
string ans = "NO";

void dfs(int curr, vector<vector<int>>& adj, vector<int>& v){
	v[curr] += 1;
	cont++;
	for(int son : adj[curr]){
		if(v[curr] == 2){
			ans = "YES";
		}
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
	vector<int> v(n, 0);
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		a--;
		adj[i].pb(a);
	}
	for(int i = 0; i < n; i++){
		if(!v[i]){
			cont = 0;
			dfs(i, adj, v);
			if(cont >= 3 && v[i] >= 2){
				ans = "YES";
			}
		}
	}
	
	cout << ans;
	
    return 0;
}