#include<bits/stdc++.h>
#define mod 1000000007

long long int solve(int n , int x){
    if(x==0){
        return 1 ;
    }
    long long int y = solve(n,x/2)%mod ;
    if(x%2==0){
        return ((y%mod) * (y%mod))%mod ;
    }
    else{
        return (((y%mod) * (y%mod))%mod * (n%mod))%mod;
    }
    
}

int nthTermOfGP(int N, int A, int R) {
    // Write your code here.
    long long int ans = (A%mod * (solve(R,N-1)%mod))%mod ;
}