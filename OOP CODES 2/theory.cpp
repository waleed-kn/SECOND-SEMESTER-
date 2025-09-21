#include <iostream>
using namespace std;

class Height {
private:
    int feet;
    int inches;

    // Helper function to normalize height (convert 12 inches to 1 foot)
    void normalize() {
        feet += inches / 12;
        inches = inches % 12;
    }

public:
    // Constructor
    Height(int f = 0, int i = 0) {
        feet = f;
        inches = i;
        normalize();
    }

    // Function to set height
    void setValue(int f, int i) {
        feet = f;
        inches = i;
        normalize();
    }

    // Function to get height
    void getValue() {
        cout << "Height: " << feet << " feet " << inches << " inches" << endl;
    }

    // Function to add two heights
    Height addValue(Height h) {
        Height temp;
        temp.feet = feet + h.feet;
        temp.inches = inches + h.inches;
        temp.normalize();
        return temp;
    }

    // Function to subtract two heights
    Height subtractValue(Height h) {
        Height temp;
        int totalInches1 = feet * 12 + inches;
        int totalInches2 = h.feet * 12 + h.inches;

        int diff = totalInches1 - totalInches2;

        if (diff < 0) diff = -diff;

        temp.feet = diff / 12;
        temp.inches = diff % 12;

        return temp;
    }
};

// Main function to test
int main() {
    Height h1(5, 10);
    Height h2(3, 8);

    Height sum = h1.addValue(h2);
    Height diff = h1.subtractValue(h2);

    cout << "Height 1: ";
    h1.getValue();

    cout << "Height 2: ";
    h2.getValue();

    cout << "Sum: ";
    sum.getValue();

    cout << "Difference: ";
    diff.getValue();

    return 0;
}
