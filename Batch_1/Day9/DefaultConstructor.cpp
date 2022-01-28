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

    void printCarDetails() {
        cout << this->noOfDoors << ", " << 
                this->noOfWheels << ", " << 
                this->color << ", " << 
                this->brand << ", " << 
                this->fuelType << ", " << 
                this->fuel << endl << endl;
    }

};

int main() {

    Car myCar, yourCar;
    
    myCar.printCarDetails();
    cout << endl << endl;
    yourCar.printCarDetails();

}
