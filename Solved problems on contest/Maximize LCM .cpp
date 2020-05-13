#include<bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;
#define read FILE *fp;\
fp=freopen("testcase.txt","r",stdin);
#define ll cpp_int
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
#define l 1000000
ll mark[5010];
ll gcd(ll a,ll b){
    if(b == 0)
        return a;
    return gcd(b,a % b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        ll a[1000000],b,c=1,d=0,e=0,f=1;
        cin>>c;
        a[0]=c;
        for(ll i=1;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll i=1;i<n;i++)
        {
            b=gcd(c,a[i]);
            c=(c*a[i])/b;
            //cout<<b<<"   "<<c<<endl;
        }
        e=c;
        for(ll i=1;i<=m;i++)
        {
            ll x=gcd(i,c);
            ll y=(c*i)/x;
            if(y>e)
            {
                e=y;
                f=i;
            }
        }
        cout<<f<<endl;
    }
}

