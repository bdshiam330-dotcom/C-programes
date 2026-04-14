#include<stdio.h>
int main(){
    int a,b;
    printf("enter your first number:");
        scanf("%d",&a);
    printf("enter your secend number:");
    scanf("%d",&b);
    if(a>b){
        printf(" the big number: %d\n",a);
        printf("the small number: %d\n",b);
    }
    else if(b>a){
        printf("the big number: %d\n",b);
        printf("the small number:%d\n",a);
    }
     else{
        printf("the two number are equal %d\n",a);

     }
    }


