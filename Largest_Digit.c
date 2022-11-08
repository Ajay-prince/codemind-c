#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    int r;
    int max=-100;
    while(n!=0){
        r=n%10;
        if(r>max){
            max=r;
        }
        n=n/10;
    }
    printf("%d",max);
}