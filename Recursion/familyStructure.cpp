string solve(int n,long long int k){
    if(n==1|| k==1)
        return "Male";
    
    long long x = (k+1)/2 ;
   string ans  = solve(n-1,x);
    if( k== 2*x-1){
        return ans ;
    }
    else{
        if(ans=="Female")
            return "Male";
            }
    return "Female" ;
}

string kthChildNthGeneration(int n, long long int k)
{
	// Write your code here	
     return solve(n,k);
}