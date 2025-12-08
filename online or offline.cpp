#include<stdio.h>
int main()
{
 a   int o,r;
    scanf("%d%d",&o,&r);
    if(o-o*0.1>r)
    {
        printf("DINING");
    }
    else if(o-o*0.1==r)
    {
        printf("EITHER");
        }
    else
    {
        printf("ONLINE");
        }
}
