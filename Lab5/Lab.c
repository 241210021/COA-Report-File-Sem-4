#include <stdio.h>

int x = 10;

int main(){

    int a=10, b=20;
    int result;

    int arr[3]={1,2,3};

    int *ptr;

    // Existing Modes
    result = a + 5;      // Immediate
    result = a + b;      // Direct
    result = x;          // Global/Data segment

    ptr = &a;
    result = *ptr;       // Indirect

    result = arr[1];     // Indexed


    // 7. Base Register Addressing
    int *base = arr;
    result = *(base + 2);


    // 8. Relative Addressing
    goto label;

    result = 999;

label:
    result = result + 1;


    // 11. Auto Increment Addressing
    ptr = arr;

    result = *ptr++;

    printf("Result : %d\n", result);

    return 0;
}
