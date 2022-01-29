#include<iostream>
using namespace std;

// BLueprint for a student
class Student {

public:

    string name, schoolName, emailID, crush;
    int rollNo, marks, contactNO;
    
    Student() {
        cout << "Constructor of STUDENT called" << endl;
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

class Undergrad : public Student {

public:

    string college, degree;

    Undergrad(string college, string degree) {
        this->college = college;
        this->degree = degree;
    }

    Undergrad( string name, string schoolName, string emailID, string crush, int rollNo, int marks, int contactNo, string college, string degree )  :  Student( name, schoolName, emailID, crush, rollNo, marks, contactNo)  {
        
        this->college = college;
        this->degree = degree;

    }

    void orgCollegeFest() {
        /// .......
        /// .......
        /// .......
        cout <<  "Fest planned successfully !!!!!!!" << endl << endl;
    }

    void fun() {
        cout << "Having FUN!!!!!!";
    }

};

class Grad : public Undergrad {

public:

    int researchPapers, marriagePressureLevel, jobExperience;
    // string companies[];

    Grad(string college, string degree) : Undergrad(college, degree) {
        this->researchPapers = 0;
        this->marriagePressureLevel = 99999999;
        this->jobExperience = 2;
    }

    void newPaperPublished(string name) {
        // ....
        // ....
        
        researchPapers++;
        
        // ....
        // ....
        cout << "PAPER ADDED\n\n";
    } 

    int applyForNobel() {
        // ....
        int applicationNumber = 5;
        // ....
        cout << "NOBEL APPLIED!! Best of LUCK!!! \n\n";
        return applicationNumber;
    } 

};


int main() {
    
    // Student s2("Shubh", "RDPS", "a@a.a", "NONE", 234,23,234);
    // s2.printDetails();

    // Undergrad bcom("college", "bcom");
    // Undergrad btech("Shubh", "RDPS", "a@a.a", "NONE", 234,23,234, "college", "btech");
    
    // bcom.printDetails();
    // cout << bcom.name << endl;    
    // cout << bcom.college << endl;    
    // cout << bcom.degree << endl;    

    // btech.printDetails();
    // cout << btech.name << endl;    
    // cout << btech.college << endl;    
    // cout << btech.degree << endl;    

    Grad g1("Harvard", "MSCS");
    g1.printDetails();

    g1.newPaperPublished("QRNG");
    cout << g1.name << " has published " << g1.researchPapers << endl;
    

}
