#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int a[n],i,b,pos;
    printf("Enter the elements of array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Enter the element you want to insert\n");
    scanf("%d",&b);
    printf("Enter the position at which you want to insert\n");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--)
    {
        a[i]=a[i-1];
    }
    a[pos-1]=b;
    printf("Now the array is\n");
    for(i=0;i<=n;i++)
    printf("%d ",a[i]);
    return 0;
}