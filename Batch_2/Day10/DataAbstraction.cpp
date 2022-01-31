#include<iostream>
using namespace std;

class Shape {
protected:
    float area, perimeter;

};

class Rectangle: public Shape {

private:
    float length, width;

public:

    Rectangle(float length, float width) {
        this->length = length;
        this->width = width;
    }

    // GETTERS
    float getLength() {
        return this->length;
    }
    float getWidth() {
        return this->width;
    }

    // SETTERS
    void setLength(float value) {
        this->length = value;
    }
    void setWidth(float value) {
        this->width = value;
    }

    float getArea() {
        return this->area = this->width*this->length;
    }

    float getPerimeter() {
        return this->perimeter = 2*(this->width+this->length);
    }

};

int main() {

    Rectangle r1(3,4);

    cout << r1.getLength() << ' ' << r1.getWidth() << endl;
    cout << r1.getArea() << ' ' << r1.getPerimeter() << endl << endl ;

    r1.setLength(100);

    cout << r1.getLength() << ' ' << r1.getWidth() << endl;
    cout << r1.getArea() << ' ' << r1.getPerimeter() << endl << endl;

    r1.setWidth(100);

    cout << r1.getLength() << ' ' << r1.getWidth() << endl;
    cout << r1.getArea() << ' ' << r1.getPerimeter() << endl << endl;

    



}

