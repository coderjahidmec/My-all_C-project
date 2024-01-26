#include<stdio.h>

int main (){


    int a=5;
    int b=3;
    int tem_c = a;
    a=b;
    b=tem_c;

    printf("a=%d & b=%d",a,b);
}