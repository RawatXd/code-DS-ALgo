void solve(int n , int k, vector<int> &ans){
    ans.push_back(n);
        if(n<=0){
        return ;
    }
  solve(n-k,k,ans);
    ans.push_back(n);
}
vector<int> printSeries(int n, int k)
{
    // Write your code here
    vector<int> ans ;
    solve(n,k,ans);
    return ans ;
}