#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int pro=1;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
       pro*=a[i];
    }
    for(int j=0;j<n;j++){
        int pr1=(int)(pro/a[j]);
        printf("%d ",pr1);
    }
}