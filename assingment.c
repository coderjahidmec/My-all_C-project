
#include <stdio.h>


// Function declarition to convert temparature(F to C)
float fahrenheittocelcius(float F,float C ){
float tem=((F-32)*5)/9;
return tem;
}


int main(){

float F,C;

printf("Enter a temparture to convert F_C :");
// input from user 
scanf("%f",&F);
// fuction call 
float Celcius= fahrenheittocelcius(F,C);

printf("Celcius tem is :%f",Celcius);
return 0;

}