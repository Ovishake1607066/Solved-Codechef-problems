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
    ll q;
    cin>>q;
    while(q--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n+10],b=0,c=0,d=0;
        string s;
        cin>>s;
        vector<ll>v;
        char t[n+10];
        for(ll i=0;i<n;i++)
            t[i]='a';
        for(ll i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                v.push_back(i);
            }
        }
        for(ll i=0;i<v.size();i++)
        {
            d=v[i]-c;
            if(d<=k)
            {
                t[c]='0';
                c++;
                k-=d;
            }
            else
            {
                t[v[i]-k]='0';
                c++;
                k=0;
            }
        }
        for(ll i=0;i<n;i++)
        {
            if(t[i]!='0')
                t[i]='1';
        }
        for(ll i=0;i<n;i++)
            cout<<t[i];
        cout<<endl;
    }
}

