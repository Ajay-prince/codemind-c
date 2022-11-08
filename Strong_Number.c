#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    int r;
    int sum=0;
    while(n!=0){
    r=n%10;
    int pro=1;
    for(int i=1;i<=r;i++){
        pro*=i;
    }
    sum+=pro;
    n=n/10;
    }
    if(sum==t){
        printf("The number %d is a strong number",t);
    }
    else{
        printf("The number %d is not a strong number",t);
    }
    }
    