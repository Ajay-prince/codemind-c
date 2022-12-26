#include<stdio.h>
int main(){
    int n,arr[n];
    scanf("%d",&n);
    int max=-100;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int count=0;
    while(1){
        for(int i=0;i<n;i++){
            if(max%arr[i]==0){
                count++;
            }
        }
        if(count==n){
            printf("%d",max);
            break;
        }
        else{
            count=0;
            max++;
        }
    }
    
}