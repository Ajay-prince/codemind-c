#include<stdio.h>
#include<math.h>
int main(){
    int num;
    scanf("%d",&num);
    int a=0;
    int b=1;
    int c;
    printf("%d ",a);
    printf("%d ",b);
    for(int i=2;i<num;i++){
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    return 0;
}