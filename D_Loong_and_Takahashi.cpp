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

void solve()
{
    ll n;
    cin>>n;
    ll i=1, j=n, c=0;
    ll sz=(pow(n,2)-1);
    vector<vector<int>>v(n,vector<int>(n,0));
    while(i<(n*n)+1){
        forl(p,c,j) {v[c][p]=i; i++;}
        forl(p,c+1,j) {v[p][j-1]=i; i++;}
        for(ll p=j-2; p>=c; p--) {v[j-1][p]=i; i++;}
        for(ll p=j-2; p>c; p--) {v[p][c]=i; i++;}
        c++; j--;
    }
    // if(!n%2){
    //     v[(n+1)/2][(n+1)/2]=n*n;
    // }
    forl(i,0,n){
        forl(j,0,n){
            if(v[i][j]==n*n) {cout<<"T"<<" "; continue;}
            else cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

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