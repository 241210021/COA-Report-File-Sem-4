// Experiment 5 – Part B
// Addressing Modes using GDB (with Global Variable)
// Name: Anshul Modi | Roll No: 241210021

#include <stdio.h>

int x = 10;   // Global variable (stored in data segment)

int main(){
    int a=10, b=20;
    int result;
    int arr[3]={1,2,3};
    int *ptr;

    result = a + 5;      // Immediate addressing
    result = a + b;      // Direct addressing
    result = x;          // Global variable (data segment access)
    ptr = &a;            // Indirect addressing (load address)
    result = *ptr;       // Indirect addressing (dereference)
    result = arr[1];     // Indexed addressing
    printf("Result : %d", result);
    return 0;
}
