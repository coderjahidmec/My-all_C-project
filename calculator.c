#include <stdio.h>

int sumation(int num1,int num2){
int sum=num1+num2;
return sum;
}

int multiple(int num1,int num2){

    int mul=num1*num2;
    return mul;
}

int substraction(int num1,int num2){

    int sub =num1-num2;
    return sub;
}


int division(int num1,int num2){
    int div=num1/num2;
    return div;

}

int main()
{
    int num1;
    int num2;

    printf("Enter two number for all calcualtion");
    scanf("%d%d",&num1,&num2);

    
    int sum =sumation(num1,num2);
int mul=multiple(num1,num2);
int substraction=(num1,num2);
int division=(num1,num2);


printf("sumation is %d\n",sum);
printf("multiple is %d\n",mul);
printf ("substraction is  %d\n",substraction);
printf ("division value is : %d\n",division);







}




