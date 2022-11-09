#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int pro=1;
    for(int i=0;i<n;i++){
        int t;
        scanf("%d",&t);
       a[i]=abs(t);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j]){
                int t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    for(int i=0;i<n;i++){
        printf("%d ",(a[i]*a[i]));
    }
}