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
        ll n;
        cin>>n;
        ll a[n+10];
        loop
        {
            cin>>a[i];
        }
        map<ll,ll>m;
        ll b=0,c=0,d=0,e=0,f=0,g=0,i=0,j=n-1,s=0;
        while(1)
        {
            if(d)
                break;
            if(g%2==0)
            {
                s=0;
                e=0;
                for(i=i;i<n;i++)
                {
                    if(m[i])
                    {
                        d=1;
                        break;
                    }
                    s=s+a[i];
                    e=1;
                    m[i]=1;
                    if(s>f)
                    {
                        i++;
                        break;
                    }
                }
                f=s;
                b+=s;
                if(e)
                g++;
            }
            else
            {
                s=0;
                e=0;
                for(j=j;j>=0;j--)
                {
                    if(m[j])
                    {
                        d=1;
                        break;
                    }
                    s=s+a[j];
                    e=1;
                    m[j]=1;
                    if(s>f)
                    {

                        j--;break;
                    }
                }
                f=s;
                c+=s;
                if(e)
                g++;
            }
            //cout<<s<<"  "<<i<<" "<<j<<endl;
        }
        cout<<g<<" "<<b<<" "<<c<<endl;
    }
}

