#include<iostream>
using namespace std;

class Shape {
protected:
    float area, perimeter;
public:

    virtual float getArea() = 0;
    virtual float getPerimeter() = 0;
    
};

class Rectangle: public Shape {

protected:
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

class Circle: public Shape {

private:
    float radius;

public:

    Circle(float radius) {
        this->radius = radius;
    }

    // GETTER & SETTER
    float getRadius() {
        return this->radius;
    }
    void setRadius(float value) {
        this->radius = value;
    }

    float getArea() {
        return this->area = 3.1417*this->radius*this->radius;
    }
    float getPerimeter() {
        return this->perimeter = 2*3.1417*this->radius;
    }

};

class Triangle: public Shape {

private:
    float s1, s2, s3;

public:

    Triangle(float s1, float s2, float s3) {
        this->s1 = s1;
        this->s2 = s2;
        this->s3 = s3;
    }

    // GETTER & SETTER
    float getS1() {
        return this->s1;
    }
    float getS2() {
        return this->s2;
    }
    float getS3() {
        return this->s3;
    }
    void setS1(float value) {
        this->s1 = value;
    }
    void setS2(float value) {
        this->s2 = value;
    }
    void setS3(float value) {
        this->s3 = value;
    }

    float getArea() {
        return this->area = this->s1 * this->s2 * this->s3 ;
    }
    float getPerimeter() {
        return this->perimeter = this->s1 + this->s2 + this->s3 ;
    }

};

class Square : public Rectangle {
public:

    float side;

    Square(float side) : Rectangle(side,side) {
        this->side = side;
    }
    
    float getArea() {
        return this->area = this->side * this->side;
    }
    float getPerimeter() {
        return this->perimeter = 4 * this->side;
    }

};

int main() {

    Square s1(3);
    cout << s1.getArea() << ' ' << s1.getPerimeter() << endl << endl ;

}

