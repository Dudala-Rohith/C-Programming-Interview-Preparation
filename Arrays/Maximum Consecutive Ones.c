#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int total_count=0;
    int current_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            current_count++;
        }
        else{
            if(current_count>total_count){
                total_count=current_count;
            }
            current_count=0;
        }
    }
    if(current_count>total_count){
                total_count=current_count;
            }
            printf("%d",total_count);
    return 0;
}