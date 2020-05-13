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
    ll n,m,f,b,c=0,d=0,s=0,e=0;
    cin>>n>>m>>f;
    ll a[m+10],a2[n+10];
    for(ll i=0;i<m;i++)
    {
        cin>>a[i];
        s+=a[i];
    }
    ll zz=(m+1)*(f-1);
    if(zz+s<n)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    for(ll i=0;i<n;i++)
    {
        if(e+(n-i)<=s)
        {
            for(ll j=d;j<m;j++)
            {
                for(ll k=i,q=0;q<a[j] && k<n;k++,q++)
                {
                    a2[k]=j+1;
                    e++;
                    i++;
                }
            }
            break;
        }
        c++;
        if(c>=f)
        {
            //cout<<c<<endl;
            c=0;
            for(ll j=i,q=0;q<a[d];j++,q++)
            {
                a2[j]=d+1;
                e++;
                i++;
            }
            i--;
            d++;
        }
        else
        {
            a2[i]=0;
        }
    }
    cout<<"YES"<<endl;
    for(ll i=0;i<n;i++)
        cout<<a2[i]<<" ";
        cout<<endl;
}

