#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;



#define ll              long long
#define pb              push_back
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n)       int *arr=new int[n];
#define t(x)            int t; cin>>t; while(t--)
#define fa(n)        for(int i=0; i<n; i++)
#define fr(n)           for(int j=n-1; j<=0; j--)
#define f(x,y)          for(int i=x; i<=y; i++)
#define vi(v, n)        vector<long long> v(n);



void r_r_2() {
   ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#ifndef ONLINE_JUDGE
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
#endif
}



int firstOccurence(vector<int> a, int n, int key) {
   int s = 0, e = n - 1;
   int mid = s + (e - s) / 2;
   int ans = -1;
   while (s <= e) {
      if (a[mid] == key) {
         ans = mid;
         e = mid - 1;
      }
      else if (key > a[mid])
         s = mid + 1;
      else
         e = mid - 1;
      mid = s + (e - s) / 2;
   }
   return ans;
}

int lastOccurence(vector<int> a, int n, int key) {
   int s = 0, e = n - 1;
   int mid = s + (e - s) / 2;
   int ans = -1;
   while (s <= e) {
      if (a[mid] == key) {
         ans = mid;
         s = mid + 1;
      }
      else if (key > a[mid])
         s = mid + 1;
      else
         e = mid - 1;
      mid = s + (e - s) / 2;
   }
   return ans;
}



void solve() {
   int n, key;
   cin >> n >> key;
   vector<int> a(n);
   for (int i = 0; i < n; i++)
      cin >> a[i];
   cout << firstOccurence(a, n, key) << endl;
   cout << lastOccurence(a, n, key);
}

int main()
{
   r_r_2();
   solve();
   return 0;
}