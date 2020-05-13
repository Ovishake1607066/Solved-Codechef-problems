#include<stdio.h>
int main()
{
    long long int n,k,i,j,a,b,c;
    scanf("%lld%lld",&n,&k);
    c=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&a);
        if(a%k==0)
        {
            c=c+1;
        }
    }
    printf("%lld\n",c);
}
