#include<stdio.h>


int main(){

    int a=10; //binary (1010)
    int b=2; //binary (10)

 // arithmetic operators

printf ("sum : %d\n",a+b);
printf ("sub : %d\n",a-b);
printf ("mul : %d\n",a*b);
printf ("div : %d\n",a/b);
printf ("modu : %d\n",a%b);

// Relational Operators,true-(1),False(0)

printf("Greater than :%d\n",a>b);
printf("Less than :%d\n",a<b);
printf("Less than equal :%d\n",a<=b);
printf("Greater than equal :%d\n",a>=b);
printf("Must equal :%d\n",a==b);
printf("not equal :%d\n",a!=b);

// logical operators

printf("Logical and :%d\n",(3>4)&&(10>2));
printf("Logical OR :%d\n",(3>4)||(10>2));
printf("Logical not :%d\n",!(3>4)&&(10>2));

// assingment operators

printf("a + b = %d\n", a += b);
printf("a - b = %d\n", a -= b);
printf("a * b = %d\n", a *= b);
printf("a / b = %d\n", a /= b);
printf("a %%= b = %d\n", a %=b);

//bitwise operator
printf("Result of bitwise AND: %d\n", a & b);
printf("Result of bitwise OR: %d\n",  a | b);
printf("Result of bitwise XOR: %d\n", a ^ b);
printf("Result of bitwise complement: %d\n", ~a);
printf("Result of Left shift: %d\n", a << 2 );
printf("Result of Right shift: %d\n", a >> 2);

// Ternary Operator

int num;
printf("Enter your exxam mark :");
scanf("%d",&num);

num >= 33 ? printf("Result : pass \n") :printf("Result :Fail");



return 0;
}