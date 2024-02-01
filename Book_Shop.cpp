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

ll f(ll i, ll sm, ll n, ll k, vector<vector<ll>>&dp, vec(ll,&x), vec(ll,&y)){
    if(i>=n or k<=0) return 0;
    if(dp[i][sm]!=-1) return dp[i][sm];
    if(sm+x[i]<=k) dp[i][sm]=y[i]+f(i+1,sm+x[i],n,k,dp,x,y);
    dp[i][sm]=max(dp[i][sm],f(i+1,sm,n,k,dp,x,y));
    return dp[i][sm];
}

void solve()
{
    ll n, k;
    cin>>n>>k;
    vector<vector<ll>>dp(n+1,vector<ll>(k+1,-1));
    vec(ll,x)(n);
    vec(ll,y)(n);
    xin();
    forl(i,0,n) cin>>y[i];
    cout(f(0,0,n,k,dp,x,y));

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
