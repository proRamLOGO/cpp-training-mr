#include <iostream>
using namespace std;

int main() {

    int n1;
    int *x;
    x = &n1;

    cout << "n1   =  " << n1 << endl;
    cout << "&n1  =  " << &n1 << endl;
    cout << "x    =  " << x << endl;
    cout << "*x   =  " << *x << endl;
    cout << "&x   =  " << &x << endl;

    // cout << "*n1  =  " << *n1 << endl; WONT WORK
    cout << "--------------------------------" << endl << endl;



    // int* ptr, ptr1;
    // int *ptr, ptr1;
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

    cout << "arr " << " = "<< arr << endl;
    cout << "&arr" << " = "<< &arr << endl;
    cout << "*arr" << " = "<< *arr << endl << endl;
    cout << "arr[2] " << " = "<< arr[2] << endl;
    cout << "arr+2" << " = "<< arr+2 << endl;
    // cout << "&(arr+2)" << " = "<< (&(arr+2)) << endl;
    cout << "*(arr+2)" << " = "<< *(arr+2) << endl;


}


