#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define dob double
#define cout(x) cout<<x<<endl
#define vec(type1, name) vector<type1> name
#define vecp(type1, type2, name) vector<pair<type1, type2>> name
#define set(type, name) set<type> name
#define map(type1, type2, name) map<type1, type2> name
#define pb push_back
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define Pi 3.1415926535897932384626
#define xin() for(ll i=0;i<n;++i) cin>>x[i]
#define xout() for(ll i=0;i<n;++i) cout<<x[i]<<" "
#define forl(i,a,b) for(ll i=a;i<b;++i)
#define forll(i,a,b) for(ll i=a;i<=b;++i)
// factorial | lcm | palindrome | power | prime | prime factor | sieveprime
// ll f(ll i, ll sum, vector<vector<int>>& dp, vec(ll,&x)){
//     if(i>=x.size()){
//         if(sum==0) return 1;
//         return 0;
//     }
//     if(dp[i][sum]!=-1) return dp[i][sum];
//     ll c=0;
//     if(x[i]<=sum) c+=f(i+1,sum-x[i],dp,x);

//     return dp[i][sum]=c;
// }


void solve()
{
    ll n, k;
    cin>>n>>k;
    vec(ll,x)(n);
    xin();
    vector<int>dp(k+1,INT_MAX);
    dp[0]=0;
    forl(i,1,k+1){
        forl(j,0,n){
            if(x[j]<=i){
                dp[i]=min(dp[i],dp[i-x[j]]+1);
            }
        }
    }
    if(dp[k]==INT_MAX) cout(-1);
    else cout(dp[k]);

  return;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll T = 1;
//   cin >> T;
  while(T--){
     solve();
  }
}