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
#define llmax  numeric_limits<long long>::max();
#define llmin numeric_limits<long long>::min();
ll mark[5010];
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(),cout.tie();
    ll lll=llmax;
    ll li=llmin;
    cout<<lll<<endl;
    cout<<li<<endl;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+10],b[n+10],c[n+10],d=0,e=1e20,f=0;
        loop
        {
            cin>>a[i]>>b[i];
        }
        loop
        {
            if(i==0)
            {
                c[i]=a[i];
            }
            else
            {
                c[i]=max(0LL,a[i]-b[i-1]);
            }
            d+=c[i];

            //cout<<c[i]<<endl;
        }
        e=min(e,d);
        //cout<<d<<endl;
        for(ll i=1; i<n; i++)
        {
            if(i==1)
            {
                d-=c[i];
                c[i]=a[i];
                d+=c[i];
                d-=c[i-1];
                c[i-1]=max(0LL,a[i-1]-b[n-1]);
                d+=c[i-1];
                e=min(e,d);
            }
            else
            {
                d-=c[i];
                c[i]=a[i];
                d+=c[i];
                d-=c[i-1];
                c[i-1]=max(0LL,a[i-1]-b[i-2]);
                d+=c[i-1];
                e=min(e,d);
            }
            /*for(ll i=0;i<n;i++)
                cout<<c[i]<<"   ";
            cout<<endl;*/
            //cout<<d<<endl;
        }
        cout<<e<<endl;
    }
}

