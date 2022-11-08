#include <stdio.h>

int main()
{
    int n[51],i,num;

    scanf("%d", &num);

    n[0]=1;
    n[1]=1;

    for(i=2; i<=50; i++)
    {
        n[i]=n[i-1]+n[i-2];
    }

    printf("%d\n",n[num-1]);


}