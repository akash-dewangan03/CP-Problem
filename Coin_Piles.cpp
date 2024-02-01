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
#define xin() for(ll i=0;i<n;i++) cin>>x[i]
#define xout() for(ll i=0;i<n;i++) cout<<x[i]<<" "
#define forl(i,a,b) for(ll i=a;i<b;i++)
#define forll(i,a,b) for(ll i=a;i<=b;i++)

void solve()
{
    ll a, b;
    cin>>a>>b;
    if(a>=b){
        ll c = abs(a-b);
        a-=2*c; b-=c;
        if(a==b and a>=0 and a%3==0) cout("YES");
        else cout("NO");
    }
    else{
        ll c = abs(a-b);
        b-=2*c; a-=c;
        if(a==b and a>=0 and a%3==0) cout("YES");
        else cout("NO");
    }

    // if((a+b)%3==0) cout("YES");
    // else cout("NO");

  return;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  ll T = 1;
  cin >> T;
  while(T--){
     solve();
  }
}