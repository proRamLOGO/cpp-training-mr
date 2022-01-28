#include <iostream>
using namespace std;

// Getters and Setters

class Shape {

private:
    float area;
    float perimeter;

public:
    virtual float getArea() = 0; // PURE VIRTUAL FUNCTION
    virtual void getPerimeter1() {
        cout << "We dont know";
    }  
    virtual void getPerimeter2() ;
};

class Circle : public Shape {

private:
    float radius;

public:
    Circle(float radius) {
        this->radius = radius;
    }
    void setRadius(float radius) {
        this->radius = radius;
    }
    float getRadius(float radius) {
        return this->radius;
    }
    float getArea() {
        return 3.1417*this->radius*this->radius;
    }

};

class Rectangle : public Shape {

public:
    float length, width;
    Rectangle(float length, float width) {
        this->length = length;
        this->width = width;
    }
    float getArea() {
        return this->length*this->width;
    }

};


int main() {

    Circle c1(34);
    Rectangle r1(3,4);

    c1.getPerimeter2();
    c1.getPerimeter1();

    cout << c1.getArea() << endl << r1.getArea() << endl << endl;

}