#include <iostream>
using namespace std;

class Student {
private:
    string* name; // Dynamically allocated string

public:
    // Constructor
    Student(string studentName) {
        name = new string(studentName); // Allocating memory dynamically
        cout << "Constructor: Memory allocated for " << *name << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor: Memory released for " << *name << endl;
        delete name; // Freeing allocated memory
    }
};

int main() {
    Student s1("Jaan");  // Constructor is called
    Student s2("Alex");  // Constructor is called

    cout << "Inside main function" << endl;

    return 0;  // Destructor is called automatically for both objects
}
