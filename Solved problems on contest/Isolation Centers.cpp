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
        ll n,q;
        cin>>n>>q;
        map<ll,ll>m;
        ll a,b,c=0,d=0,e=0;
        string s;
        cin>>s;
        for(ll i=0;i<s.size();i++)
        {
            m[(ll)s[i]]++;
        }
        for(ll i=0;i<q;i++)
        {
            cin>>a;
            c=0;
            for(ll i=97;i<=122;i++)
            {
                if(m[i]>a)
                {
                    c+=m[i]-a;
                }
            }
            cout<<c<<endl;
        }
    }
}

