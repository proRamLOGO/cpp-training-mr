#include<iostream>
using namespace std;

// SYNTAX
// class NAME {

// };

// BLueprint for a student
class Student {

public:

    string name, schoolName, emailID, crush;
    int rollNo, marks, contactNO;
    
    Student() {
        cout << "Constructor called" << endl;
        cin >> this->name;
        cin >> this->schoolName;
        cin >> this->emailID;
        cin >> this->crush;
        cin >> this->rollNo;
        cin >> this->marks;
        cin >> this->contactNO;
    }
    
    Student( string name, string schoolName, string emailID, string crush, int rollNo, int marks, int contactNo) {
        this->name = name;
        this->schoolName = schoolName;
        this->emailID = emailID;
        this->crush = crush;
        this->rollNo = rollNo;
        this->marks = marks;
        this->contactNO = contactNo;
    }

    void doHomework() {
        // ....
        // ....
        cout << "Homework Done !!!" << endl;
    }

    void addExamMarks(int marks) {
        this->marks += marks;
        cout << "Marks added!!";
    }

    int getANumber() {
        return 3;
    }

    void playGame() {
        cout << "Choice of Game";
        string gameName;
        cin >> gameName;
        // ....
        // ....
        // ....
        cout << "We played " << gameName << endl;
    }

    void establishCrush(string nameOfCrush) {
        crush = nameOfCrush;
    }

    void printDetails() {
        cout << "\n\n--------------------------------\n";
        cout << this->name << endl;
        cout << this->schoolName << endl;
        cout << this->emailID << endl;
        cout << this->crush << endl;
        cout << this->rollNo << endl;
        cout << this->marks << endl;
        cout << this->contactNO << endl;
        cout << "--------------------------------\n\n";
    }

};

int main() {

    Student s1; 
    s1.printDetails();
    
    Student s2("Shubh", "RDPS", "a@a.a", "NONE", 234,23,234);
    s2.printDetails();

}
