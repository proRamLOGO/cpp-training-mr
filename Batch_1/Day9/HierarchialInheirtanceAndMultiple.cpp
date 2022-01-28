#include <iostream>
using namespace std;


// HIERARCHIAL
class P {

};

class C1 : P{

};

class C2 : P {

};


// MULTIPLE
class P1 {

};

class P2{

};

class P3{

};

class C : P1, P2, P3 {

};
