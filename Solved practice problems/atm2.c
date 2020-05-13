#include<stdio.h>
int main()
{
    int x,j;
    float y,i;
    scanf("%d%f",&x,&y);
    if(x%5==0 && y>=(x+.5))
    {
        i=y-x-.5;
        printf("%.2f\n",i);
    }
    else
    {
        printf("%.2f\n",y);
    }
    return 0;
}

