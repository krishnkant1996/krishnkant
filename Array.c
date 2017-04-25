#include<stdio.h>
int main()
{
        int a[10],i=0,n,item;
        printf("\n Enter a array size");
        scanf("%d",&n);
        for(i=0; i<n; i++)
        {
                scanf("%d",&a[i]);
        }
        printf("\n  array is : \n");
        for(i=0;i<n;i++)
        {
                printf(" a[%d] = %d\n",i+1,a[i]);
        }

}
