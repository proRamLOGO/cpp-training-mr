#include<iostream>
using namespace std;

float area(int radius) {
    cout << "Area 1 Called" << endl;
    return 3.1415 * radius * radius;
}
int area(int length, int width) {
    cout << "Area 2 Called" << endl;
    return length*width;
}
float area(float sideLength) {
    cout << "Area 3 Called" << endl;
    return sideLength * sideLength;
}

int main() {

    cout << "Area of Circle is:     " <<  area((float)5) << endl;
    cout << "Area of Rectangle is:  " <<  area(4,5) << endl;
    cout << "Area of Square is:     " <<  area((int)10.57) << endl;

    // cout << endl << endl << "--------------------------------------------------------\n\n";
}
