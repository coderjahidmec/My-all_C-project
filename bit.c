#include <stdio.h>

int main() {
    int num;

    printf("Enter a number : ");
    scanf("%d", &num);
//  1(1),3(11),5(101),7(111)
// 2(10),4(100),6(110)

if (num & 1) {
       printf("%d is an odd number.\n", num);
    } else {
        printf("%d is an even number.\n", num);
    }

    return 0;
}

