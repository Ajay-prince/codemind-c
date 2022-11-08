#include<stdio.h>
#include<math.h>
int main(){
    int l,r,k;
    scanf("%d%d%d",&l,&r,&k);
    
    int sum=0;
    for(int i=l;i<=r;i++){
       if(i%k==0){
           sum+=1;
       }
    }
    printf("%d",sum);
    
}