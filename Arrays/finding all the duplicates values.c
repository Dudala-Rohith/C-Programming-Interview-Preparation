4.finding all the duplicates values
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            printf("%d ",arr[i]);
                 break;
        }
        }
    }
    return 0;
}

//aproch-2
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
         int seen=0;
         for(int k=0;k<i;k++){
                if(arr[k]==arr[i]){
                    seen++;
                    break;
                }
         }
         if(seen==0){
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        printf("%d ",arr[i]);
                        break;
                    }
               }
            }
}