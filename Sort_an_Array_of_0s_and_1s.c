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
        for(int j=i+1;j<r;j++){
            if(a[i]>a[j]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(int i=0;i<r;i++){
        printf("%d ",a[i]);
    }
    return 0;
    
}