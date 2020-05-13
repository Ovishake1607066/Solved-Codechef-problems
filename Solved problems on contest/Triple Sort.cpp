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
        ll a[n+10],b[n+10],c=0,d=0,e=0;
        vector<pair<ll,pair<ll,ll> > >v;
        //v.push_back(make_pair(2,make_pair(3,4)));
        loop
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b,b+n);
        vector<pair<ll,ll> >v2;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==b[i])
                ;
            else
            {
                v2.push_back(make_pair(a[i],i));
                if(v2.size()>=3)
                {
                    srt(v2);
                    v.push_back(make_pair(v2[1].second,make_pair(v2[2].second,v2[0].second)));
                    v2.clear();
                }
            }
            if(v.size()>k)
            {
                c=1;
                break;
            }
        }
        if(c || v2.size())
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<v.size()<<endl;
            for(ll i=0;i<v.size();i++)
            {
                cout<<v[i].first+1<<" "<<v[i].second.first+1<<" "<<v[i].second.second+1<<endl;;
            }
        }
    }
}

