#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int maxi_sum=0;
    int running_sum=0;
    for(int i=0;i<n;i++){
        if(running_sum+arr[i]>arr[i]){
           running_sum+=arr[i];
        }
        else{
            running_sum=arr[i];
        }
        
        if(running_sum>maxi_sum){
            maxi_sum=running_sum;
        }
    }
    printf("%d",maxi_sum);
    
    return 0;
}