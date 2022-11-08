#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int r;
    
    while(2>1){
    int sum=0;
    while(n!=0){
        r=n%10;
        sum+=r;
        n=n/10;
    }
    if(sum<10){
        printf("%d",sum);
        break;
    }
    else{
        n=sum;
    }
    
    }
}