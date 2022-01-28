#include <iostream>
using namespace std;

// Getters and Setters

class Phone {

private:
    int batteryLevel;
    string brand;

public:
    void setBatteryLevel(int batteryLevel){
        this->batteryLevel = batteryLevel;
    }
    int getBatteryLevel(){
        return this->batteryLevel;
    }
    void setBrand(string brand){
        this->brand = brand;
    }
    string getBrand(){
        return this->brand;
    }
    void consumeBattery() {
        this->batteryLevel -= 2;
    }
    void playGame(int duration) {
        for ( int i = 0 ; i < duration ; i++ )
            this->consumeBattery();
    }

};

int main() {

    Phone phone;

    // phone.batteryLevel = 35; NOT PREFERRED
    phone.setBatteryLevel(100); // PREFERRED
    phone.setBrand("APPLE"); // PREFERRED

    cout << "INIT BL : " << phone.getBatteryLevel() << endl;

    phone.playGame(20);

    cout << "UPDT BL : " << phone.getBatteryLevel() << endl;
    cout << phone.getBrand() << endl << endl ; 
    

}