#include<stdio.h>
#include<math.h>
int main(){
    char v;
    char a[10]={'A','E','I','O','U','a','e','i','o','u'};
    int count=0;
    scanf("%c",&v);
    for(int i=0;i<10;i++){
        if(a[i]==v){
            count+=1;
            break;
        }
    }
    if(count!=0){
        printf("Vowel");
    }
    else{
        printf("Consonant");
    }
}