#include<iostream>
using namespace std;

class programming {
    private:
        string data;
    public:
        string name;

        programming(string n, string d) {
            name = n;
            data = d;
        }

        void setdata(string d) {
            data = d;
        }

        string getdata() {
            return data;
        }

        void display() {
            cout << "data: " << data << endl;
            cout << "name: " << name << endl;
        }
};

int main() {
    programming obj("C++", "Object-Oriented Programming");    
    obj.display();

    return 0;
}
