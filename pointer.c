#include<stdio.h>

void swap (int a,int b);

void _swap (int *a,int *b);


int main(){
int x=10,y=5;

// call by value 
swap(x,y);
printf("inside main x=%d\n y=%d\n",x,y);

// call by refrence
_swap(&x,&y);
printf("inside main x=%d\n y=%d\n",x,y);
return 0; 
}

void swap (int a,int b){
int c=a;
a=b;
b=c;
printf("inside function a=%d\n  b=%d\n",a,b);

}
void _swap (int *a,int *b){
int c=*a;

*a=*b;
*b=c;
printf("inside function a=%d\n  b=%d\n",*a,*b);
}



