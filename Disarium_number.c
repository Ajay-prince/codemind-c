#include<stdio.h>
#include<math.h>
int main(){
    int n;
	int count=0;
    scanf("%d",&n);
    int t=n;
    int sum=0;
    int t1=n;
    int r;
    while(n!=0){
        r=n%10;
        count++;
        n=n/10;
    }
    while (t!=0){
        r=t%10;
        sum+=pow(r,count);
        count--;
        t=t/10;
    }
    if(sum==t1){
        printf("True");
    }
    else{
        printf("False");
    }
}