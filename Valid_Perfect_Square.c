#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
   for(int i=0;i<n;i++){
       int n1;
       scanf("%d",&n1);
       int sqr=(int)sqrt(n1);
       if((sqr*sqr)==n1){
           printf("True
");
       }
       else{
           printf("False
");
       }
   }
}