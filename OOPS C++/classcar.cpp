#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string model;
    int year;

public:
    // Constructor
    Car() : year(0) {} 

    // Function to get car details from the user
    void setCarDetails() {
        cout << "Enter car brand: ";
        cin.ignore(); // To clear buffer before using getline
        getline(cin, brand);
        cout << "Enter car model: ";
        getline(cin, model);
        cout << "Enter manufacturing year: ";
        cin >> year;
    }

    // Function to display car details
    void showCarDetails() const {
        cout << "\nCar Details:\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car myCar;
    myCar.setCarDetails();
    myCar.showCarDetails();
    return 0;
}
