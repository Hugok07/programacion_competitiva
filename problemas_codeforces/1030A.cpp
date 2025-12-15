#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long

int main() {
	fastio;
	
	int n; cin >> n;;
	int sum = 0;
	for(int i = 0; i < n; i++){
		int a; cin >> a;
		sum += a;
	} 
    if(sum == 0){
    	cout << "EASY";
    } else cout << "HARD";
    return 0;
}

