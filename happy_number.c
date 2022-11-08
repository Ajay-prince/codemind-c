#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    int r;
    int sum=0;
    while (2>1){
        
    while(n!=0){
        r=n%10;
        sum=sum+(r*r);
        n=n/10;
    }
    if(sum<10){
        if(sum==1 || sum==7){
            printf("True");
            break;
        }
        else{
            printf("False");
            break;
        }
    }
    else{
        n=sum;
        sum=0;
    }
    }
    
}