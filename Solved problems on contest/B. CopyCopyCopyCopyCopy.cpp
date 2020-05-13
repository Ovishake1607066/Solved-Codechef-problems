#include<bits/stdc++.h>
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll long long
#define ull unsigned long long
#define sf(n) scanf("%I64d",&n)
#define pf(n) printf("%I64d\n",n)
#define loop for(long long i=0;i<n;i++)
#define lp(b,n) for(long long i=b;i<=n;i++)
#define pb(n) push_back(n)
#define srt(v) sort(v.begin(),v.end())
#define rvs(v) sort(v.begin(), v.end(), greater<long long>());
#define F first
#define S second
#define mp(a,b) make_pair(a,b);
#define fio ios::sync_with_stdio(false); cin.tie(),cout.tie();
#define pdd pair<double, double>
int main()
{
    //cout<<__gcd(1,18)<<endl;
    ll t;
    cin>>t;
    while(t--)
    {
        ll x,n;set<ll>s;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>x;
            s.insert(x);
        }
        cout<<s.size()<<endl;
    }
}

