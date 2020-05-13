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
#define l 1000000
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];
ll M=1000000007;
ll F(ll N,ll P)
{
	if(P==0) return 1;
	if(P%2==0)
	{
		ll ret=F(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(F(N,P-1)%M))%M;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a;
        cin>>n>>a;
        ll b,c=0,d=0,e=0;
        d=a;
        e=a;
        for(ll i=1,j=0;j<n;j++,i+=2)
        {
            d=F(d,i);
            c=((c%1000000007)+(d%1000000007))%1000000007;
            d=((d%1000000007)*(e%1000000007))%1000000007;
            e=d;
            //cout<<c<<"   "<<d<<endl;
        }
        cout<<c<<endl;
    }
}

