#include <iostream>
using namespace std;


void saveContact(string name, int number) {
    // saving instructions
    cout << "Contact saved in SIM Card!!" << endl;
}

void saveContact(string name, int number1, int number2, string email) {
    // saving instructions
    cout << "Contact saved in Device" << endl;
}


int main() {

    int n1=5, n2=6;
    string s1="hello", s2 = "world";
    string res = s1+" "+s2;

    cout << n1+n2 << endl;
    cout << res << endl;

    // ------------------------------------------------

    saveContact("Shubh",9717593233);
    saveContact("Shubh",9717593233, 1234567890, "00shubhbansal@gmail.com" );
    saveContact("Shubh",9717593233);


}