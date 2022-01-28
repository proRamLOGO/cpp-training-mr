#include<iostream>
using namespace std;

int main() {

    int n = 5;
    int *x;
    x = &n;

    cout << "n  = " << n << endl;
    cout << "&n = " << &n << endl;
    // cout << "*n = " << *n << endl; W0NT WORK
    cout << "x  = " << x << endl;
    cout << "&x = " << &x << endl;
    cout << "*x = " << *x << endl;

    cout << "--------------------------------" << endl << endl;

    // int* ptr; => int *ptr;
    // int* ptr1, ptr2; => int *ptr1, ptr2

    string s, *ptr;
    s = "hello";
    ptr = &s;

    cout << "s    =  " << s << endl;
    cout << "&s   =  " << &s << endl;
    cout << "ptr    =  " << ptr << endl;
    cout << "*ptr   =  " << *ptr << endl;
    cout << "&ptr   =  " << &ptr << endl;
    
    cout << "--------------------------------" << endl << endl;


    int arr[4] = {456,5,-7,890};
    
    // int arr[4];
    // arr[0] = 456;
    // arr[1] = 5;
    // arr[2] = -7;
    // arr[3] = 890;

    cout << "arr  " << " = "<< arr << endl;
    cout << "*arr " << " = "<< *arr << endl;
    cout << "&arr " << " = "<< &arr << endl;
    cout << "*(arr+3) " << " = "<< *(arr+3) << endl;
    cout << "arr[3] " << " = "<< arr[3] << endl;

    cout << endl << endl;

}