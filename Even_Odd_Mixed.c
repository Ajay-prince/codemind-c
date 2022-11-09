#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int even=0;
    int odd=0;
    int r;
    while(n!=0){
        r=n%10;
        if(r%2==0){
            even++;
        }
        else{
            odd++;
        }
        n=n/10;
    }
    if(even!=0 && odd==0){
        printf("Even");
    }
    else if(even==0 && odd!=0){
        printf("Odd");
    }
    else{
        printf("Mixed");
    }
}