#include <iostream>

using namespace std;

int main() {

    cout << "Enter P R T seperated by space:   " ;

    float p,r,t;

    cin >> p >> r >> t ;

    float si = (p*r*t) / 100 ;

    cout << "Simple Interest is " << si << endl;

}