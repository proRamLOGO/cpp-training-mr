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
        cout << "CONS OF CAR CALLED" << endl;
        
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

class HatchBack : public Car {

public:
    bool isCNG;

    HatchBack() {
        cout << "CONS OF HATCHBACK CALLED" << endl;
        this->isCNG = false;
    }

    bool installCNG(int cylinders) {
        
        // ............
        // installation
        // ............

        cout << "CNG installed" << endl;
        return true;
    }

    void parkInMarket() {
        cout << "Parked!! Enjoy shopping!!!";
    }

};

class Sedan : public Car {

public:

    string seatType;
    bool cruiseControlReady;
    bool luxury;

    Sedan(string seatType) {
        this->luxury = false;
        this->cruiseControlReady = false;
        this->seatType = seatType;
    }

    void openBoot() {
        cout << "Boot Opened!!!";
    }

    void reclineSeats() {
        cout << "Seats are now reclined !!!";
    }

};

class SUV : public Car {

public:

    string seatType;
    int noOfSeats;
    int wheelDrive;
    bool luxury;
    int noOfWindows;

    SUV(int noOfWindows) { 
        this->wheelDrive = 2;
        this->noOfWindows = noOfWindows;
        this->noOfSeats = 5;
    }

    SUV(int noOfDoors, int noOfWheels, string color, string brand, string fuelType, float fuel, int noOfWindows)  : Car(noOfDoors, noOfWheels, color, brand, fuelType, fuel) {
        this->wheelDrive = 2;
        this->noOfWindows = noOfWindows;
        this->noOfSeats = 5;
    }

    bool installMoreSeats(int noOfNewSeatsToBeInstalled) {
        if ( this->noOfSeats + noOfNewSeatsToBeInstalled > 7 ) {
            cout << "MAX CAPACITY EXCEEDED!!!";
            return false;
        }
        
        this->noOfSeats += noOfNewSeatsToBeInstalled ;
        return true;

    }

    void changeWheelDriveMode() {
        if (wheelDrive == 2)
            this->wheelDrive = 4;
        else 
            this->wheelDrive = 2;
    }

};


int main() {

    Car myCar(4,4,"SILVER","MG","PETROL",60);
    myCar.printCarDetails();
    cout << endl << endl;


    // HatchBack hb1;
    // Sedan s1("VENTILATED");

    // s1.printCarDetails();


    SUV suv1(6,4,"BLACK","Mahindra","PETROL",60,6); 
    suv1.printCarDetails();

}
