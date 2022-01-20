#include <iostream>

using namespace std;

int main() {

    cout << "Enter radius of sphere: " ;

    int radius;

    cin >> radius;

    float volume;

    volume = (4/3) * 3.1417 * radius * radius * radius ;
    cout << "Volume of sphere is: " << volume << endl;

    volume = (4 * 3.1417 * radius * radius * radius)/3 ;
    cout << "Volume of sphere is: " << volume << endl;

}