#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define all(v) (v).begin(), (v).end()
#define pb push_back
#define ll long long

int res(int n, int k){
	if(k == 0){
		return n;
	}
	if(n % 10 != 0){
		return res(n - 1, k - 1);
	}else{
		return res(n / 10, k - 1);
	}
}
int main() {
	fastio;
	
	int n, k; 
	cin >> n >> k;
	cout<< res(n,k);
    return 0;
}