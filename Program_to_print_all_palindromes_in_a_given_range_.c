#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int n1;
    scanf("%d",&n1);
    for(int i=n;i<n1;i++){
        int i1=i;
        int t=i;
        int r;
        int rev=0;
    while(i1!=0){
        r=i1%10;
        rev=rev*10+r;
        i1=i1/10;
    }
    if(t==rev){
        printf("%d ",rev);
    }
    
    }
    
    
}