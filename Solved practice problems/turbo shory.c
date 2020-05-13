#include<stdio.h>
int main()
{
    long long int t,n,i,j,k,b,m;
    scanf("%lld",&t);
    long long int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%lld",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=0;j<t-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                m=a[j];
                a[j]=a[j+1];
                a[j+1]=m;
            }
        }
    }
    for(i=0;i<t;i++)
    {
        printf("%lld\n",a[i]);
    }
}
