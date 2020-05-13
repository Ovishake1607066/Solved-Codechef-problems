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
ll llmax = numeric_limits<long long>::max();
ll llmin= numeric_limits<long long>::min();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,q;
        cin>>a>>b>>q;
        ll c=0,d=0,e=0,x=0,y=0,l,r,p;
        vector<ll>v;
        p=(a*b)/(__gcd(a,b));
        ll m=max(a,b);
        for(ll i=0; i<q; i++)
        {
            cin>>l>>r;
            e=0;
            if(a==b)
            {
                v.push_back(0);
                continue;
            }
            if(max(a,b)>r)
            {
               // cout<<0<<endl;
                v.push_back(0);
                continue;
            }
            c=m*(r/p);
            d=r%p;
            d=min(m,d+1);
            e=c+d;
            l=l-1;
            ll f=m*(l/p);
            ll g=l%p;
            g=min(m,g+1);
            x=g+f;
            y=e-x;
            //cout<<e<<"  "<<x<<endl;
            ll s=(r-l)-(y);
            v.push_back(s);
            //cout<<e<<endl;;
        }
        for(ll i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}

