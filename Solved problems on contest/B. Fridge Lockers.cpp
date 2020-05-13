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
        ll n,m,b=0,c=0;
        cin>>n>>m;
        ll a[n];
        loop
        {
            cin>>a[i];
            c+=a[i];
        }
        if(n<=2 || m<n)
        {
            cout<<-1<<endl;
            continue;
        }

        else
        {cout<<c*2<<endl;
            for(ll i=1;i<n;i++)
                cout<<i<<" "<<i+1<<endl;
            cout<<n<<" "<<1<<endl;
        }
    }
}

