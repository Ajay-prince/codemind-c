#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        int t=sqrt(a[i]);
        if((t*t)==a[i]){
            sum+=a[i];
        }
    }
    printf("%d",sum);
}