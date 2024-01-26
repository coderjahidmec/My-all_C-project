#include<stdio.h>


//  declaration area of triangle function
float areaoftriangle(float base, float height){
 float Area=(base * height)/2;
return Area;
}

int main(){

    float base , height;
    printf("Enter triangle base :");
    scanf("%f",&base );
    printf("Enter triangle height :");
    scanf("%f",&height );

//call of area function
    float Area=areaoftriangle(base,height);

    printf("Area of Triangle :%f", Area);
    return 0;

}