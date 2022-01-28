#include <iostream>
using namespace std;

// Getters and Setters

class Rectangle {

public:
    float length, width;
    Rectangle(float length, float width) {
        this->length = length;
        this->width = width;
    }
    float getArea() {
        return this->length*this->width;
    }
    void printLandW() {
        cout << this->length << " " << this->width << " " << endl;
    }
};

class Square : public Rectangle {

private:
    float side;

public:
    Square(float side) : Rectangle(side,side) {
        this->side = side;
    }

    float getArea() {
        return this->side*this->side;
    }

};


int main() {

    Square s1(3);
    s1.printLandW();
    cout << s1.getArea() << endl;    

}