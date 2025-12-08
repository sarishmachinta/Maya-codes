#include<stdio.h>
int main()
{
    int T,S,B;
    scanf("%d%d%d", &T,&S,&B);
    long long bytes = 2LL * T * S * B * 512;
    long long kb = bytes / 1024;
    printf("%11d KB", kb); 
    return 0;
}
