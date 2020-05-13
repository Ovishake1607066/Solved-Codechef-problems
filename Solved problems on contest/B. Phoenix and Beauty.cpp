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
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+10],b=0,c=0,d=0;
        set<ll>s;
        loop
        {
            cin>>a[i];
            s.insert(a[i]);
        }
        if(s.size()>k)
        {
            cout<<-1<<endl;
            continue;
        }
        cout<<k*n<<endl;
        for(ll i=0;i<n;i++)
        {
            set<ll> :: iterator it;
            for(it=s.begin();it!=s.end();it++)
            {
                cout<<*it<<" ";
            }
            for(ll j=s.size()+1;j<=k;j++)
            {
                cout<<1<<" ";
            }
        }cout<<endl;
    }
}

