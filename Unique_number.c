#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int t=n;
    int r;
    int count=0;
    while(n!=0){
        r=n%10;
        count++;
        n=n/10;
    }
    int a[count];
    int i=0;
    int r1;
    while(t!=0){
        r1=t%10;
        a[i]=r1;
        i++;
        t=t/10;
    }
    int count1=0;
    for(int i=0;i<count;i++){
        for(int j=(i+1);j<count;j++){
            if(a[i]==a[j]){
                count1++;
                break;
            }
        }
    }
    if(count1==0){
        printf("Unique Number");
    }
    else{
        printf("Not Unique Number");
    }
}