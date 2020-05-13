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
        cin>>n;
        vector<ll>v,v2;
        ll a[n+10],b=0,c=0,d=-1,x=0,y=0,m=0;
        c=((n*n)+n)/2;
        loop
        {
            cin>>a[i];
            if(a[i]%4!=0 && a[i]%2==0)
            {
                b++;
                v2.push_back(i);
            }
            if(a[i]%2==0)
            {
                a[i]=2;
                v.push_back(i);
            }
            else
            {
                a[i]=1;
            }
            //cout<<b<<endl;
        }
        //cout<<b<<endl;
        for(ll i=0;i<v2.size();i++)
        {
            x=0;
            y=0;
            for(ll j=v2[i]+1;j<n;j++)
            {
                if(a[j]==1)
                {
                    x++;
                }
                else
                    break;
            }
            for(ll j=v2[i]-1;j>=0;j--)
            {
                if(a[j]==1)
                {
                    y++;
                }
                else
                    break;
            }
            ll z=(x+1)*y+x;
            //cout<<z<<endl;
            b+=z;
        }
        //cout<<b<<endl;
        cout<<c-b<<endl;
        /*for(ll i=0; i<n && c<v.size() && v.size(); i++)
        {
            //cout<<b<<endl;
            if(v[c]>=i)
            {
                if(c+1<v.size())
                {
                    b=b+(n-v[c+1]);
                }
                else
                {
                    break;
                }
            }
            else
            {
                c++;
                if(c<v.size() && v[c]>=i)
                {
                    if(c+1<v.size())
                    {
                        b=b+(n-v[c+1]);
                    }
                    else
                    {
                        break;
                    }
                }
                else
                    break;
            }

        }
        //cout<<b<<endl;
        if(v.size())
        {
            if(v[v.size()-1]==n-1)
                ;
            else
            {
                v.push_back(n);
            }
        }
        else
        {
            x=n;
            y=((x*x)+x)/2;
            b=b+y;
        }
        for(ll i=0; i<v.size(); i++)
        {
            x=v[i]-d-1;
            y=((x*x)+x)/2;
            b=b+y;
            d=v[i];
        }
        cout<<b<<endl;
        */
    }
}
