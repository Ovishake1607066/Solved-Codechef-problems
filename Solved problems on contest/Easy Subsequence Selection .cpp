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
        ll n,c=0,b=1000000000,d=0;
        cin>>n;
        string s;
        cin>>s;
        vector<ll>v[100];
        for(ll i=0;i<n;i++)
        {
            if(v[s[i]-'a'].size())
            {
                b=min(i-v[s[i]-'a'][v[s[i]-'a'].size()-1],b);
                d=1;
            }
            v[s[i]-'a'].push_back(i);
        }
        if(d)
            c=n-b;
        cout<<c<<endl;
    }
}

