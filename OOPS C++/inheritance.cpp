#include<iostream>
using namespace std;

class bike {
public:
    void enginebike() {
        cout << "Bike getting start" << endl;
    }
};

class car : public bike {
public:
    void enginestop() {
        cout << "Bike getting stop instantly" << endl;
    }
};

int main() {
    car c1;
    c1.enginebike();  // inherited function from bike class
    c1.enginestop();  // own function in car class

    return 0;
}
