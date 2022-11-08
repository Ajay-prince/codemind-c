#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int sqr=(n*n);
    int sum=0;
    int r;
    while(sqr!=0)
    {
        r=sqr%10;
        sum+=r;
        sqr=sqr/10;
    }
    if(sum==n){
        printf("Neon Number");
    }
    else{
        printf("Not Neon Number");
    }
        return 0;
    }
    