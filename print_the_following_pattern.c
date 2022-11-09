#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=n;
    int f=1;
    for(int i=0;i<n;i++){
        for(int j=1;j<=f;j++){
            printf("%d",j);
        }
        printf("
");
        f+=1;
    }
}