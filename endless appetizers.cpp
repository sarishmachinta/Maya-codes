#include<stdio.h>
int main()
{
    int x,y,r,a,b,c;
    scanf("%d%d%d",&x,&y,&r);
    a=r/30;
    b=(x+a)/y;
    c=(x+a)%y;
    if(c!=0)
    {
        b=b+1;
    }
printf("%d",b);
}
