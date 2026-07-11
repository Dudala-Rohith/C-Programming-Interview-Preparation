#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    int largest=arr[n-1];
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            printf("%d",arr[i]);
            break;
        }
        
    }
    printf("No second largest element\n");
    return 0;
}