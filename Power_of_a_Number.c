#include<math.h>
#include<stdio.h>
int main(){
    int l,r,k;
    scanf("%d%d%d",&l,&r,&k);
    
    int sum=pow(l,r);
    int sum2=sum%k;
    printf("%d",sum2);
    
}