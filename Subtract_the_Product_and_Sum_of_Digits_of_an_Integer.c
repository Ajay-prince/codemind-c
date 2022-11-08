#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
     int t=n;
     int r;
     int sum=0;
     int pro=1;
     while(n!=0){
         r=n%10;
         sum+=r;
         pro*=r;
         n=n/10;
     }
     printf("%d",(pro-sum));
    }
    