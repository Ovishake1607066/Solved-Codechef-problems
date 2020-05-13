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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,p;
        cin>>n>>p;
        vector<ll>v;
        vector<pair<ll,ll> >v2;
        ll a[n+10],b,c=0,d=0;
        ll ans[n+10]={0};
        loop
        {
            cin>>a[i];
            if(p%a[i]!=0 && d==0)
            {
                d=1;
                v.push_back((p/a[i])+1);
                ans[i]=0;
            }
            else
            {
                v.push_back(0);
                v2.push_back(make_pair(a[i],i));
            }
        }
        if(d)
        {
            cout<<"YES ";
            for(ll i=0; i<n; i++)
            {
                if(i==n-1)
                    cout<<v[i];
                else
                    cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else
        {
            srt(v2);
            ll x=0;
            for(ll i=n-1;i>=0;i--)
            {
                for(ll j=i-1;j>=0;j--)
                {
                    if((v2[i].first%v2[j].first)!=0)
                    {
                        ans[v2[i].second]=(p/v2[i].first)-1;
                        ll y=p-(((p/v2[i].first)-1)*v2[i].first);
                        ans[v2[j].second]=(y/v2[j].first)+1;
                        x=1;
                        break;
                    }
                }
                if(x)
                    break;
            }
            if(x)
            {
                cout<<"YES ";
                for(ll i=0;i<n;i++)
                {
                    if(i==n-1)
                        cout<<ans[i]<<endl;
                    else
                        cout<<ans[i]<<" ";
                }
            }
            else
                cout<<"NO"<<endl;
        }
    }
}

