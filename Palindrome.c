#include<stdio.h>
#include<math.h>
int main(){
    int num;
    scanf("%d",&num);
    int t=num;
    int r;
    int rev=0;
    while(num!=0){
        r=num%10;
        rev=rev*10+r;
        num=num/10;
    }
    if(t==rev){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}