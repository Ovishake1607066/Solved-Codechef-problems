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
        ll k,n;
        cin>>n>>k;
        ll a,b,c=0,d=0,e=0;
        vector<pair<ll,ll> >v;
        loop
        {
            cin>>a;
            v.push_back(make_pair(a,i));
        }
        srt(v);
        for(ll i=0;i<v.size();)
        {
            //cout<<v[i].first<<"   "<<v[i].second<<endl;
            map<ll,ll>m;
            b=v[i].first;
            e=0;
            m[(v[i].second)%k]++;
            c=1;
            for(ll j=i+1;j<v.size();j++,c++)
            {
                if(v[j].first==b)
                {
                    m[(v[j].second)%k]++;
                }
                else
                {
                    break;
                }
            }
            for(ll j=i;j<i+c;j++)
            {

                d=j%k;
                //cout<<d<<"  "<<m[d]<<endl;
                if(m[d])
                {
                    m[d]--;
                }
                else
                {
                    e=1;
                    break;
                }
            }
            if(e)
            {
                break;
            }
            i+=c;
        }
        if(e)
        {
            cout<<"no"<<endl;
        }
        else
        {
            cout<<"yes"<<endl;
        }
    }
}

