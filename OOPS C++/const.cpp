#include <iostream>
using namespace std;

class wifi {
private:
    string frequency;
    string ipaddress;

public:
    // Constructor
    wifi(string f, string i) {
        frequency = f;
        ipaddress = i;
        cout << "🚀 Constructor: WiFi object created with Frequency " << frequency 
             << " and IP Address " << ipaddress << endl;
    }

    // Destructor
    ~wifi() {
        cout << "💥 Destructor: WiFi object with Frequency " << frequency 
             << " and IP Address " << ipaddress << " is being destroyed.\n";
    }

    // Display function
    void display() {
        cout << "📡 Frequency: " << frequency << ", 🌐 IP Address: " << ipaddress << endl;
    }
};

int main() {
    cout << "🔹 Creating a WiFi object...\n";
    wifi myWifi("2.4 GHz", "192.168.1.1"); // Constructor is called

    cout << "🔹 Displaying WiFi details...\n";
    myWifi.display();

    cout << "🔹 Exiting main function...\n";
    return 0;  // Destructor is called automatically when 'myWifi' goes out of scope
}
