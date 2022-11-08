#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int n1=abs(n);
    int t=n1;
    int r;
    int rev=0;
    while(n1!=0){
        r=n1%10;
        rev=rev*10+r;
        n1=n1/10;
    }
    if(n<0){
        printf("%d",(rev-(rev*2)));
    }
    else{
        printf("%d",rev);
    }
}