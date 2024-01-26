#include<stdio.h>
int main(){

    for (char i = 'A'; i<'D';i++){

        for(char j='A'; j<=i; j++){

            printf("%c",j);
        }

        printf("\n");
    }
}