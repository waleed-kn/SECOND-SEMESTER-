#include<iostream>
#include<string>
using namespace std;
class teacher{
    public:
    string name;
    string dept;
    string subject;
    double salary;
    

};
int main()
{
    teacher t1;
    t1.name="waleed";
    t1.dept="computer science";
    t1.subject="c++";
    t1.salary=1000;
    cout<<"name is the "<<t1.name<<endl;
    cout<<"dept is the "<<t1.dept<<endl;
    cout<<"subject is the "<<t1.subject<<endl;
    cout<<"slary is the "<<t1.salary<<endl;



}