#include <iostream>
using namespace std;

struct Student {
    int id;
    float marks;
};

int main() {

    int a = 10;
    int b = 20;

    int *p = &a;
    int *q = &b;

    int arr[5] = {1,2,3,4,5};

    // int *dyn = new int[3];
    // dyn[0] = 100;
    // dyn[1] = 200;
    // dyn[2] = 300;

    Student s1;
    s1.id = 1;
    s1.marks = 88.5;

    Student *sp = &s1;

    cout << "a = " << a << endl;
    cout << "*p = " << *p << endl;
    cout << "*q = " << *q << endl;

    cout << "arr[2] = " << arr[2] << endl;

    cout << "Student id = " << sp->id << endl;
    cout << "Student marks = " << sp->marks << endl;

    // delete[] dyn;

    return 0;
}