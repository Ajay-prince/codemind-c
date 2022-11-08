#include<stdio.h>
int main(){
    int f;
    scanf("%d",&f);
    float cel=(float)((f-32)*5)/9;
    printf("%.2f",cel);
}