#include <iostream>
using namespace std;

class animal {
private:
    string name;
    string color;
    string breeder;
    float weight;

public:
    // Constructor
    animal(string n, string c, string b, float w) {
        name = n;
        color = c;
        breeder = b;
        weight = w;
    }

    // Method to display details
    void displaydetails() {
        cout << "Name is " << name
             << ", Color is " << color
             << ", Breeder is " << breeder
             << ", Weight is " << weight << endl;
    }
};

int main() {
    // Creating animal objects
    animal animal1("cat", "brown", "persian", 4.5);
    animal animal2("rabbit", "black", "mini lop", 4.5);
    animal animal3("Parrot", "Green", "Macaw", 1.5);

    // Displaying details
    animal1.displaydetails();
    animal2.displaydetails();
    animal3.displaydetails();

    return 0;
}
