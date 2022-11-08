#include<stdio.h>
#include<math.h>
int main(){
    int r;
    scanf("%d",&r);
    int a[r];
    for(int i=0;i<r;i++){
        scanf("%d",&a[i]);
        }
    int temp;
    for(int i=0;i<r;i++){
        int count=0;
        for(int j=0;j<r;j++){
            if(a[i]==a[j]){
                count++;
            }
        }
        if(count==1){
            printf("%d",a[i]);
        }
    }
    
    return 0;
    
}