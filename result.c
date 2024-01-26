

#include <stdio.h>

int main(){

int mark;

printf("Enter your exam mark :");
scanf("%d",&mark);

if(mark>=80){
printf("your result : A+");}

else if(mark>=70){
    printf("Your result : A");}

else if(mark>=60){
    printf("your result : A-");}
    
else if(mark>=50){
    printf("your result : B");}

else if (mark>=40){
    printf("your result : C");}
else if(mark>=33){
    printf("your result : D");}  

else{
    printf("your reult : F");
}
return 0;
}