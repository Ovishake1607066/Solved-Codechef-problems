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
    ll n,k;
    cin>>n>>k;
    string s1,s2;
    cin>>s1;
    char cc;
    for(ll i=0;i<k;i++)
    {
        cin>>cc;
        mark[(ll)cc]++;
    }
    ll a,b=0,c=0,d=0;
    for(ll i=0;i<n;i++)
    {
        char ch=s1[i];
        b=0;
        if(mark[(ll)ch])
            b=1;
        if(b)
        {
            s1[i]='0';
        }
        else
            s1[i]='1';
    }
    for(ll i=0;i<n;i++)
    {
       // cout<<s1[i]<<endl;
        if(s1[i]=='0')
            d++;
        else
        {
            c=c+((d*d)+d)/2;
            d=0;
        }
    }
    if(d)
    {
            c=c+((d*d)+d)/2;
            d=0;
    }
    cout<<c<<endl;
}

