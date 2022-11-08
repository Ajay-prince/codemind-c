#include<stdio.h>
#include<math.h>
int main(){
    int r;
    scanf("%d",&r);
    int sqr=(int)sqrt(r);
    if((sqr*sqr)==r){
        printf("True");
    }
    else{
        printf("False");
    }
}