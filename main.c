#include<stdio.h>
int linear(int arr[],int pr,int x)
{
    int i;
    for(i=0;i<pr;i++)
    {
        if(arr[i]==x)
        {
            return i;
            break;
        }
    }
    if(i==pr)
    {
        return -1;

    }
}
int main()
{
    int n,arr[100],x,i,a;
    printf("enter the non-negitive integers :");
    scanf("%d",n);
    printf("enter the elements ;");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the key :");
    scanf("%d",&x)
    a=linear(arr,n,x);
    printf("the key is found at the index :",a);
}