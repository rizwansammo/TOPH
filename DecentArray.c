#include<stdio.h>

int main()
{
   int n,i,flag=0;

    scanf("%d", &n);
     int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);

   }
    for(i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1])
        {
            flag=1;
            break;
        }
    }
   if(flag==1)
    printf("No");
   else
    printf("Yes");
}