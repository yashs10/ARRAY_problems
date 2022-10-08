#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n],i,b,j,d=0;
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element you want to delete\n");
    scanf("%d",&b);
   
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            for(j=i;j<n-1;j++)
            a[j]=a[j+1];
            d=1;
            n--;
            break;
        }
    }
    if(d==0)
    printf("Element not found in array\n");
    else
    {
    printf("Now the array is\n");
    for(i=0;i<n;i++)
    printf("%d ",a[i]);
    }
    return 0;
}
