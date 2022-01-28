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

};

struct StudentS {
    string name;
};

int main() {

    // StudentS s2;
    // s2.name = "Shubh";
    // cout << s2.name << endl; 

    Student s1; // instance/objects of class student
    
    cout << "s1 created in memory\n\n";
    
    cout << s1.name << endl;
    cout << s1.schoolName << endl;
    cout << s1.emailID << endl;
    cout << s1.crush << endl;
    cout << s1.rollNo << endl;
    cout << s1.marks << endl;
    cout << s1.contactNO << endl;
 
    s1.doHomework(); cout << endl;
    s1.addExamMarks(150); cout << endl;
    s1.playGame(); cout << endl;
    s1.establishCrush("NONE"); cout << endl;

    cout << endl << endl << "--------------------------------------------------------\n\n";

    // Student s2;

    // s2.name = "Kapil Gupta";
    // s2.schoolName = "does it really matter !!??";
    // s2.emailID = "kapilgupta547@gmail.com";
    // s2.crush = "";
    // s2.rollNo = 14841800;
    // s2.marks = 100;
    // s2.contactNO = 8886000;

    // cout << s2.name << endl;
    // cout << s2.schoolName << endl;
    // cout << s2.emailID << endl;
    // cout << s2.crush << endl;
    // cout << s2.rollNo << endl;
    // cout << s2.marks << endl;
    // cout << s2.contactNO << endl;
 
    // s2.doHomework(); cout << endl;
    // s2.addExamMarks(100); cout << endl;
    // s2.playGame(); cout << endl;
    // s2.establishCrush("NONE"); cout << endl;

}
