#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    for(int i=2;i<(int)sqrt(n)+1;i++)
    {
        if(n%i==0){
            count++;
            break;
        }
    }
    if(count==0){
        printf("prime");
    }
    else{
        printf("not a prime");
    }
}