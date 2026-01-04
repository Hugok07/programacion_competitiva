#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long

int binarySearch(vector<int>& v, int x){
    int l = 0;            
    int r = v.size() - 1;  
    int m = 0;  // no encontrado -> -1
    
    
    while(l <= r){
        m = l + (r - l) / 2;  
        if(v[m] < x){
            l = m + 1;
        } 
        else
            r = m - 1; 
    }
    return l;
}

int main() {
	fastio;
	
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
		}
	
	sort(all(v));
	
	int q; cin >> q;
	
	for(int i = 0; i < q; i++){
		int a; cin >> a;
		cout << binarySearch(v, a) + 1<< "\n";
	}
	
    
    return 0;
}