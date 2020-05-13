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
    //cout<<(ll)'a'<<endl;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        string s,ss="";
        cin>>s;
        map<ll,ll>m;
        ll a=0,b=0,c=0,d=0,e=0;
        if(k==1)
        {
            sort(s.begin(),s.end());
            cout<<s<<endl;
            continue;
        }
        for(ll i=0; i<s.size(); i++)
        {
            m[(ll)s[i]]++;
        }
        for(ll i=97; i<=122; i++)
        {
            if(m[i])
            {
                if(m[i]<k)
                {
                    sort(s.begin(),s.end());
                    cout<<s[k-1]<<endl;
                    a=1;
                    break;
                }
                else
                {
                    d=0;
                    for(ll j=i+1; j<=122; j++)
                    {
                        if(m[j])
                        {
                            d=1;
                            break;
                        }
                    }
                    if(d)
                    {
                        b=m[i]-k+1;
                        if(m[i]==k)
                        {
                            e=0;
                        }
                        else
                            e=1;
                        for(ll j=0; j<b; j++)
                        {
                            string aa(1, (char)i);
                            ss=ss+aa;
                        }
                    }
                    else
                    {
                        if(m[i]%k==0)
                            b=m[i]/k;
                        else
                            b=(m[i]/k)+1;
                        for(ll j=0; j<b; j++)
                        {
                            string aa(1, (char)i);
                            ss=ss+aa;
                        }
                    }
                    c=i;
                    break;

                }
            }
        }
        if(a)
            continue;
        for(ll i=c+1; i<=122; i++)
        {
            if(e)
            {
                for(ll x=i; x<=122; x++)
                {
                    for(ll xx=0; xx<m[x]; xx++)
                    {
                        string aa(1, (char)x);
                        ss=ss+aa;
                    }
                }
                break;
            }
            if(m[i])
            {
                d=0;
                for(ll j=i+1; j<=122; j++)
                {
                    if(m[j])
                    {
                        d=1;
                        break;
                    }
                }
                if(d)
                {
                    for(ll x=i; x<=122; x++)
                    {
                        for(ll xx=0; xx<m[x]; xx++)
                        {
                            string aa(1, (char)x);
                            ss=ss+aa;
                        }
                    }
                }
                else
                {
                    if(m[i]%k==0)
                        b=m[i]/k;
                    else
                        b=(m[i]/k)+1;
                    for(ll j=0; j<b; j++)
                    {
                        string aa(1, (char)i);
                        ss=ss+aa;
                    }
                }
                break;
            }
        }
        cout<<ss<<endl;
    }
}

