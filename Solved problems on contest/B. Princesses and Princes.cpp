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
    ll t;
    cin>>t;
    while(t--)
    {
        map<ll,ll>m;
        ll n,a,b,c=0,d=0,e=0,f=0;
        cin>>n;
        loop
        {
            cin>>a;
            c=0;
            for(ll j=0; j<a; j++)
            {
                cin>>b;
                if(c)
                    continue;
                if(m[b]==0)
                {
                    m[b]=1;
                    c=1;
                }
            }
            if(c==0)
            {
                d=i+1;
            }
            //cout<<i<<" "<<e<<endl;
        }
        if(d!=0)
        {
            for(ll j=1; j<=n; j++)
            {
                if(m[j]==0)
                {
                    e=j;
                    f=1;
                    break;
                }
            }
        }
        if(f)
        {
            cout<<"IMPROVE"<<endl;
            cout<<d<<" "<<e<<endl;
        }
        else
        {
            cout<<"OPTIMAL"<<endl;
        }
    }
}

