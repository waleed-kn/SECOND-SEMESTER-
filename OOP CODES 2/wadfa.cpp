#include <iostream>
using namespace std;

// Base class (Parent)
class Vehicle {
protected:
    string brand;
    int speed;

public:
    // Constructor
    Vehicle(string b, int s) : brand(b), speed(s) {}

    // Destructor
    ~Vehicle() {
        cout << "Vehicle object destroyed\n";
    }

    // Encapsulation: Getter method
    string getBrand() {
        return brand;
    }

    // Virtual function for polymorphism
    virtual void showInfo() {
        cout << "Brand: " << brand << ", Speed: " << speed << " km/h\n";
    }
};

// Derived class (Child)
class Car : public Vehicle {
private:
    int doors;

public:
    // Constructor (Calling Base class constructor)
    Car(string b, int s, int d) : Vehicle(b, s), doors(d) {}

    // Overriding the showInfo() function (Polymorphism)
    void showInfo() override {
        cout << "Car Brand: " << brand << ", Speed: " << speed 
             << " km/h, Doors: " << doors << endl;
    }
};

// Another Derived class
class Bike : public Vehicle {
private:
    bool hasGear;

public:
    // Constructor
    Bike(string b, int s, bool g) : Vehicle(b, s), hasGear(g) {}

    // Overriding the showInfo() function
    void showInfo() override {
        cout << "Bike Brand: " << brand << ", Speed: " << speed 
             << " km/h, Gear: " << (hasGear ? "Yes" : "No") << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Car myCar("Toyota", 180, 4);
    Bike myBike("Yamaha", 120, true);

    // Polymorphism: Using base class pointer
    Vehicle* v1 = &myCar;
    Vehicle* v2 = &myBike;

    v1->showInfo();  // Calls Car's showInfo()
    v2->showInfo();  // Calls Bike's showInfo()

    return 0;
}
