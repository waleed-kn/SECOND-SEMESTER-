#include<iostream>
using namespace std;
class student{
    protected:
    string name;
    int roll_number;
    public:
    student(string n,int r){
        name=n;
        roll_number=r;
    }
  
};
class person:public student{
    private:
    int foll;
    float marks;
    public:
    person(int n,float r,int f,float m):student(n,r){
        foll=f;
        marks=m;
    }
    void displayperson(){
        cout<<"roll of the person is "<<foll<<endl;
        cout<<"marks of the person is "<<marks<<endl;
    }
};
int main()
{
    person p1(,21.3);
}