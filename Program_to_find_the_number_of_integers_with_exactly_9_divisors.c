#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
     int sum=0;
    int j=0;
    int count1=0;
    for(int i=1;i<=n;i++){
        int count=0;
        for(int j=1;j<=n;j++){
            if(i%j==0){
                count++;
            }
        }
        if(count==9){
            count1++;
            printf("%d ",i);
        }
        
    }
    printf("
Total=%d",count1);
    }
    