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
    ll s;
    cin>>s;
    while(t--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        set<ll>s;
        map<ll,ll>m;
        ll a[n+10],b[n+10],c=0,d=0;
        loop
        {
            cin>>a[i];
        }
        loop
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        loop
        {
            if(i!=0)
            {
                if(a[i]<b[i])
                {
                    ll cc=0;
                    if(m[a[i]])
                        cc=1;
                    else
                        cc=0;
                    if(cc)
                    {
                        m[a[i]]++;
                        m[b[i]]++;
                    }
                    else
                    {
                        c=1;
                        break;
                    }

                }
                else
                {
                    c=1;
                    break;
                }
            }
            else
            {
                if(a[i]<b[i])
                {
                    m[a[i]]++;
                    m[b[i]]++;
                }
                else
                {
                    c=1;
                    break;
                }
            }
            //cout<<i<<endl;
        }
        if(c)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}

