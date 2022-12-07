#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    double diagonals=(n*(n-3))/2;
    int d1=(int)diagonals;
    printf("%d",d1);
}