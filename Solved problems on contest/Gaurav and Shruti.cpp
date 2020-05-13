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
#include<string>
ll mark[5010];
long long a[10000000],prime[1000000];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
        ll e;
    a[0]=1;
    a[1]=1;
    a[2]=0;
    for(ll i=4;i<=l;i+=2)
        a[i]=1;
    for(ll i=3;i*i<=l;i+=2)
        if(a[i]==0)
            for(ll j=i*i;j<=l;j=j+(i*2))
                a[j]=1;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll g,b=0,c=0,d=0,e=0,m=0,ans;
        loop
        {
            cin>>g;
            e=0;
            ll p=g;
            while(g)
            {
                ll x=g;
                ll y=x%10;
                g/=10;
                b=0;
                c=0;
                d=0;
                while(x && d<6)
                {
                    ll ss=1;

                    for(ll zz=0;zz<b;zz++)
                    {
                        ss=ss*10;
                    }
                    c=c+(ss*y);
                    //cout<<c<<endl;
                    if(a[c]==0)
                        e++;
                    b++;
                    x/=10;
                    y=x%10;
                    d++;
                }
            }
            //cout<<e<<endl;
            if(e>m)
            {
                m=e;
                ans=p;
            }

        }
        cout<<ans<<endl;
    }
}
