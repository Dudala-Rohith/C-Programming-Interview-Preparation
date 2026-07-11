#include<stdio.h>
    void move(int arr[],int n);
    int main(){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        move(arr,n);
        for(int j=0;j<n;j++){
            printf("%d ",arr[j]);
        }
        return 0;
    }
    void move(int arr[],int n){
        int left=0;
        int temp;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                temp=arr[i];
                arr[i]=arr[left];
                arr[left]=temp;
                left++;
            }
        }
        return ;
    }