#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    int r;
    int pro=1;
    int sum=0;
    while(n!=0){
    r=n%10;
    pro*=r;
    sum+=r;
    n=n/10;
    }
    if(sum==pro){
        printf("Spy Number");
    }
    else{
        printf("Not Spy Number");
    }
    }
    