#include<stdio.h>

void swap (int a,int b);


int main(){
int x=10,y=5;

// call by value 
swap(x,y);
printf("inside main x=%d\n y=%d\n",x,y);

return 0;
    
}
void swap (int a,int b){
int c;
c=a;
a=b;
printf("inside function a=%d\n  b=%d\n",a,b);

}
