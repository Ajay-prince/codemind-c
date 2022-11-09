#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int k=n;
    int f=1;
    for(int i=0;i<n;i++){
        for(int j=f;j<=k;j++){
            printf("%d ",j);
        }
        printf("
");
        f+=1;
    }
}