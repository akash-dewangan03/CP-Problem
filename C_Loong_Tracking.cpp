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
    ll n, m;
    cin>>n>>m;
    vecp(ll,ll,vp);
    ll l=0, r=0;
    vp.pb({1,0});
    l++;
    ll tmp=m;
    while(tmp--){
        ll d; cin>>d;
        if(d==1){
            char ch; cin>>ch;
            if(ch=='U') r++;
            if(ch=='D') r--;
            if(ch=='R') l++;
            if(ch=='L') l--;
            vp.pb({l,r});
        }
        else{
            ll p; cin>>p;
            if(p==1)cout<<l<<" "<<r<<endl;
            else if(p>=vp.size()) cout<<p-vp.size()+1<<" "<<0<<endl;
            else{
                cout<<vp[vp.size()-p].F<<" "<<vp[vp.size()-p].S<<endl;
            }
        }
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