#include<stdio.h>

int main()
{
long long int i,N;
    scanf("%lld",&N);

if(N<2)
{
  printf("-1\n");
}
else
{
    for(i=2;i<=10;i+=2)
    {
        printf("%lld\n",i);
    }
}
    return 0;
}
