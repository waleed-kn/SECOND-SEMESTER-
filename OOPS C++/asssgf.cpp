#include <iostream>
using namespace std;
class Student {
private:
    string name;
    int rollNumber;
    float GPA;

public:
    Student(string n, int r, float g) {
        name = n;
        rollNumber = r;
        GPA = g;
        cout << "Constructor called for: " << name << endl;
    }
    ~Student() {
        cout << "Destructor called for: " << name << endl;
    }
    void displayInfo() {
        cout << "Name: " << name << ", Roll Number: " << rollNumber << ", GPA: " << GPA << endl;
    }
};
int main() {
    Student s1("Alice", 101, 3.8);
    Student s2("Bob", 102, 3.6);
    s1.displayInfo();
    s2.displayInfo();
    return 0;
}
