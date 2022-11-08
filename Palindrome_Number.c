#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
         int n1;
         scanf("%d",&n1);
         int t=n1;
          int r;
          int rev=0;
    while(n1!=0){
        r=n1%10;
        rev=rev*10+r;
        n1=n1/10;
    }
    if(t==rev){
        printf("True
");
    }
    else{
        printf("False
");
    }
    }
   
}