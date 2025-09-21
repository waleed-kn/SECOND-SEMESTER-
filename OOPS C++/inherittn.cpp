#include<iostream>
using namespace std;
class person{
    protected:
    string name;
    public:
    void personname(){
        cout<<"person name is the "<<name<<endl;
    }
};
    class employee:public person{
        protected:
        int salary;
        public:
        void personsalary(){
            cout<<"salary of the person "<<salary<<endl;
        }
    };
    class work:public employee{
        public:
        string department;
        work(string name,int salary,string department){
            this->name=name;
            this->salary=salary;
            this->department=department;
        }
        void workdisplay(){
            cout<<"department name is the "<<department<<endl;
        }
};
int main()

{
    work w1("waleed",231,"khan");
    w1.workdisplay();
    w1.personname();
    w1.personsalary();
}