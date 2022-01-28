#include <iostream>
using namespace std;


class Car {

public: // private by default
    int noOfDoors;
    int noOfWheels;
    int costing;
    string color;
    string brand;
    string fuelType;
    float fuel;

    // Constructor
    Car() {
        cout << "cons 1called" << endl;
        
        cin >> this->noOfDoors >>
                this->noOfWheels >>
                this->color >>
                this->brand >>
                this->fuelType >>
                this->fuel ;
    }

    Car(int noOfDoors, int noOfWheels, string color, string brand, string fuelType, float fuel) {
        cout << "cons 2 called" << endl;

        this->noOfDoors = noOfDoors;
        this->noOfWheels = noOfWheels;
        this->color = color;
        this->brand = brand;
        this->fuelType = fuelType;
        this->fuel  = fuel;

    }

    void printCarDetails() {
        cout << this->noOfDoors << ", " << 
                this->noOfWheels << ", " << 
                this->color << ", " << 
                this->brand << ", " << 
                this->fuelType << ", " << 
                this->fuel << endl << endl;
    }

    // void startCar() { // method
    //     // ... egine -> engine oil -> fuel pump ...
    //     cout << "car started ....." << endl;
    // }
    // void consumeFuel1() { // method
    //     cout << "how many kms of drive done ?    " ;
    //     float kms;
    //     cin >> kms;
    //     this->fuel -= 0.5*kms;
    // }
    // void consumeFuel2(float kms) {
    //     this->fuel -= 0.5*kms;
    //     // mycar->fuel -= 0.5*5;
    // }

    // void setColor(string color) {
    //     this->color = color;
    // }

};

int main() {

    Car myCar;
    cout << endl << endl;

    string color, brand, ft;
    cin >> color >> brand >> ft;

    Car yourCar(4,4,color,brand,ft,60);

    // car created

    myCar.printCarDetails();
    cout << endl << endl;
    yourCar.printCarDetails();

}
