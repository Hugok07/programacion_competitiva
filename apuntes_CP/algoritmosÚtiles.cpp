//Primo
bool esPrimo(int n){
    if (n < 2) return false;
    for (int i=2; i*i <= n; i++)
        if (n % i == 0) return false;
    return true;
}
//

//MCD
int mcd(int a, int b){ return b == 0 ? a : mcd(b, a % b); }
//

//Binary Search
int binarySearch(vector<int>& v, int x){
    int l = 0;            
    int r = v.size() - 1;  
    int ans = -1;          // no encontrado -> -1
    if(v.empty()) return -1;
    
    while(l <= r){
        int m = l + (r - l) / 2;  
        if(v[m] == x){
            ans = m;   // encontrado
            break;     
        }
        else if(v[m] < x)
            l = m + 1; 
        else
            r = m - 1; 
    }
    
    return ans;
}
//

