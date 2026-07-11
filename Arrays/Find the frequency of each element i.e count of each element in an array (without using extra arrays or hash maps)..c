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
                    seen=1;
                    break;
                }
         }
            if(seen==0){
                int count=1;
                for(int j=i+1;j<n;j++)
                {
                    if(arr[i]==arr[j])
                    {
                        count++;
                        
                    }
               }
               printf("%d-->%d\n",arr[i],count);
            }
            
    }
    return 0;
} 