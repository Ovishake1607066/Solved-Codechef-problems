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
    ll n;
    cin>>n;
    vector<ll>v;
    vector<pair<ll,ll> >vv;
    vector<pair<ll,ll> >v2;
    ll b,c=1,d=0,e=0,m=0;
    ll a[n+10];
    loop
    {
        cin>>a[i];
    }
    d=a[0];
    e=a[0];
    a[n]=-1;
    for(ll i=0; i<n-1; i++)
    {
        if(a[i]<a[i+1])
            c++;
        else
        {
            if(c==1)
                e=d;
            else
                e=a[i-1];
            vv.push_back(make_pair(d,e));
            v2.push_back(make_pair(a[i],a[i+2]));
            v.push_back(c);
            c=1;
            d=a[i+1];
        }
    }
    e=a[n-1];
    vv.push_back(make_pair(d,e));
    v2.push_back(make_pair(e,a[n]));
    v.push_back(c);
    for(ll i=0;i<v.size();i++)
        m=max(v[i],m);
    for(ll i=0;i<vv.size()-1;i++)
    {
        if(vv[i].second<vv[i+1].first || v2[i].first<v2[i].second)
            m=max(v[i]+v[i+1]-1,m);
    }
    cout<<m<<endl;

}

