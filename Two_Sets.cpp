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
    ll n, c=0;
    cin>>n;
    ll d=n*(n+1); d/=2;
    if(d&1) cout("NO");
    else if(n&1==0){
        cout("YES");cout(n/2);
        for(ll i = 1; i <= n/2; i+=2) cout<<i<<" ";
        for(ll i = n; i > n/2; i-=2) cout<<i<<" ";
        cout<<endl<<n/2<<endl;
        for(ll i = 2; i <= n/2; i+=2) cout<<i<<" ";
        for(ll i = n-1; i > n/2; i-=2) cout<<i<<" ";
        cout<<endl;        
    }
    else{
        cout("YES");
		int count=0;
		ll p=n+1,q=d/2,sum=d/2;
		vector<bool> lks(p,true);
		p-=1;
		vector<ll> banna;
		while(sum!=0){
			if(sum>=p){
				banna.push_back(p);
				sum-=p; lks[p]=false; p-=1;
			}
			else{
				banna.push_back(sum); lks[sum]=false;
				break;
			}
		}
		cout<<banna.size()<<"\n";
		for(ll x : banna) cout<<x<<" ";
		cout<<"\n"<<n-banna.size()<<"\n";
		for(int i=1;i<=n;i++) if(lks[i]) cout<<i<<" ";
		cout<<"\n";

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