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
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll f,g=0;
        cin>>n>>f;
        ll a[n+10],b=0,c=1,d=0,e=0;;
        loop
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(ll i=n-1;i>=0;i--)
        {
            b+=a[i];
            g=(b/(c));
            //cout<<g<<endl;
            if(g>=f)
            {
                e=c;
            }
            else
            {
                e=c-1;
                break;
            }
            c++;
        }
        cout<<e<<endl;
    }
}

