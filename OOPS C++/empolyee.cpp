#include <iostream>
using namespace std;
class Employee {
private:
    int salary;
public:
    string name;
    float number;
    void setSalary(int a) {
        if (a >= 20000 && a <= 40000) {
            salary = a;
        } else {
            cout << "invalid input" << endl;
        }
    }
    int getSalary() {
        return salary;
    }
};

int main() {
    Employee e1;
    e1.name = "waleed";
    e1.number = 12345;
    e1.setSalary(25000);
    cout << "Salary: " << e1.getSalary() << endl;
    e1.setSalary(50000);
    cout << "Salary: " << e1.getSalary() << endl;
    return 0;
}
