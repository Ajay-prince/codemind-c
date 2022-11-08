#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    float s=(float)(a+b+c)/2;
    double result=(float)(s*(s-a)*(s-b)*(s-c));
    double result1=(float)pow(result,0.5);
    printf("%.2f",result1);
    
}