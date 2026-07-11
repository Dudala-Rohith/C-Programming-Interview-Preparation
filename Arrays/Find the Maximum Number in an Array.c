#include<stdio.h>
int max_num(int arr[],int n);
int main()
{
    int n;
    printf("enter the array size:");
    scanf("%d",&n);
    if(n<=0){
    printf("Invalid array size");
    return 0;
}
    int arr[n];
    printf("enter the array elements:");
    
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
    int x=max_num(arr,n);
    printf("Maxi num in array is: %d",x);
    return 0;
}

    int max_num(int arr[],int n)
{
    int max=arr[0];
     for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
    }