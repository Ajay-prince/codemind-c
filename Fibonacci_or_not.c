#include<stdio.h>
#include<math.h>
int main(){
    int f;
    scanf("%d",&f);
    int a=0;
    int b=1;
    int c;
    int count=0;
    for(int i=0;i<=f;i++){
        c=a+b;
        a=b;
        b=c;
        if(f==c){
            count+=1;
            break;
        }
    }
    if(count!=0){
        printf("True");
    }
    else{
        printf("False");
    }
}