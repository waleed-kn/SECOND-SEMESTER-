#include<iostream>
using namespace std;
class company {
    private:
    int salary;
    public:
    void getsalary(int fulltime,int overtime){
        salary=fulltime+overtime;
    }
        int getsalary(){
        return salary;
        }

};
int main()
{
    company obj;
    obj.getsalary(30000,5000);
    cout<<"total salary is"<<endl;
    cout<<obj.getsalary()<<endl;

}