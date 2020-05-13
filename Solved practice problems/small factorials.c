#include<stdio.h>
int main()
{
    int t,i,j,a;
    long long int c;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a);
        c=1;
        for(j=1;j<=a;j++)
        {
            c=c*j;
        }
        printf("%lld\n",c);
    }
}
