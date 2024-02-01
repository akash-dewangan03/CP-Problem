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
    ll n, m, k, c=0;
    cin>>n>>m>>k;
    vec(ll,x)(n); vec(ll,y)(m);
    forl(i,0,n) cin>>x[i];
    forl(i,0,m) cin>>y[i];
    sort(all(x)); sort(all(y));
    ll i=0, j=0;
    while(i<n and j<m){
        if(x[i]-k<=y[j]) {
            i++;
            j++;
            c++;
        }
        else{
            if(x[i]-k>y[j]) j++;
            else i++;
        }
    }
    cout(c);

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