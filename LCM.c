#include<stdio.h>
#include<math.h>
int main(){
    int n,n1;
    scanf("%d%d",&n,&n1);
    int max;
    if(n>n1){
        max=n;
    }
    else{
        max=n1;
    }
    int m1;
    for(int i=1;i<=max;i++){
        m1=max*i;
        if(m1%n==0 && m1%n1==0){
            printf("%d",m1);
            break;
        }
    }
        return 0;
    }
    