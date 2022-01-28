#include<iostream>
using namespace std;

// SYNTAX for C++ Class
// class YOUR_CLASS_NAME {
//     DECLARATION OF DIFFERENT 
//     PROOPERTIES AND ATTRIBUTES YOU WANNA HOLD
// };


class Car {

public: // private by default
    int noOfDoors;
    int noOfWheels;
    int costing;
    string color;
    string brand;
    string fuelType;
    float fuel;

    Car() {
        cout << "cons called" << endl;
        cin >> this->noOfDoors >>
                this->noOfWheels >>
                this->color >>
                this->brand >>
                this->fuelType >>
                this->fuel ;
    }

    void startCar() { // method
        // ... egine -> engine oil -> fuel pump ...
        cout << "car started ....." << endl;
    }
    void consumeFuel1() { // method
        cout << "how many kms of drive done ?    " ;
        float kms;
        cin >> kms;
        this->fuel -= 0.5*kms;
    }
    void consumeFuel2(float kms) {
        this->fuel -= 0.5*kms;
        // mycar->fuel -= 0.5*5;
    }

    void setColor(string color) {
        this->color = color;
    }

};

// class string {
// public:
//     ///
//     ///
//     int length() { 
//         int x= 0;
//         // calculates val of x
//         return x;
//     }
// };


int main() {

    // Car mycar, hiscar, hercar, theircar;
    Car mycar;

    cout << mycar.noOfDoors << endl;
    cout << mycar.noOfWheels << endl;
    cout << mycar.color << endl;
    cout << mycar.brand << endl;
    cout << mycar.fuelType << endl;
    cout << mycar.fuel << endl << endl ;

    mycar.consumeFuel2(5);

    // string s;
    // s.length();

}


// FOR DAY9 - POLYMORPHISM, INHERITANCE, STACKS, QUEUES;



