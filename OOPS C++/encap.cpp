#include<iostream>
using namespace std;
class employee{
    private:
    int salary;
    public:
    void employeesalary(int s){
        salary=s;
    }
    int displaysalary(){
        return salary;
    }
};
int main()
{
    employee e1;
    e1.employeesalary(20000);
    cout<<"employee salary is the "<<e1.displaysalary();
}