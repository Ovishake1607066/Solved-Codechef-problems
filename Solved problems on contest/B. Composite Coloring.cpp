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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll a[100]={2,3,5,7,11,13,17,19,23,29,31};
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll b[n+10],c[n+10],d=-1,e=100000;
        map<ll,ll>m,m2;
        loop
        {
            cin>>b[i];
        }
        loop
        {
            for(ll j=0;j<11;j++)
            {
                if(b[i]%a[j]==0)
                {
                    c[i]=j;
                    //cout<<b[i]<<" "<<a[j]<<endl;
                    m[j]++;
                    d=max(d,j);
                    e=min(e,j);
                    break;
                }
            }
        }
        ll x=1,y=0;
        for(ll i=0;i<=d;i++)
        {
            if(m[i]!=0)
            {
                for(ll j=0;j<n;j++)
                {
                    //cout<<c[j]<<endl;
                    if(c[j]==i && m2[j]==0)
                    {
                        c[j]=x;
                        m2[j]++;
                        y=max(y,x);
                    }
                }
                x++;
            }
        }
        cout<<y<<endl;
        loop
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}

