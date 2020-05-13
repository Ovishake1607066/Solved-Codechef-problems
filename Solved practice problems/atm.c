#include<stdio.h>
int main()
{
    int x,j;
    float y,i;
    while(scanf("%d%f",&x,&y)==2)
    {
        if(x%5==0 && y>x)
        {
            i=y-x-.5;
            printf("%.2f\n",i);
        }
        else
        {
            printf("%.2f\n",y);
        }
    }

    return 0;
}
