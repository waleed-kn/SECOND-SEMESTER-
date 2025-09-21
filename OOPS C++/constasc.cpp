#include <iostream>
using namespace std;

class Demo {
public:
    // Constructor
    Demo() {
        cout << "Constructor called!" << endl;
    }
    
    // Destructor
    ~Demo() {
        cout << "Destructor called!" << endl;
    }
};

int main() {
    Demo obj;  // Constructor is called when the object is created
    cout << "Inside main function" << endl;
    return 0;  // Destructor is called automatically when the object goes out of scope
}
