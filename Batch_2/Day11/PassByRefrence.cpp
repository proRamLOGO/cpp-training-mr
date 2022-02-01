#include <iostream>
using namespace std;

void func(int &x) {

    cout << "from func before changing x = " << x << endl;
    x += x;
    cout << "from func after changing x = " << x << endl;

}


int main() {

    int n;
    cin >> n;
    
    cout << "from main before func n = " << n << endl;
    func(n);
    cout << "from main after func n = " << n << endl;


}