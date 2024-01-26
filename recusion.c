#include<stdio.h>

int fact(int n){
    if(n == 0){
        return 1;
    }
    int factn = fact (n-1);
    int factN= factn *n;
    return factN;

}

    


int main (){


    int n;
    printf("%d",fact(5));
    return 0;

}

