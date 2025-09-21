#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    person(string n,int a){
        name=n;
        age=a;
    }
    virtual void displayinfo(){
        cout<<"name is the "<<name<<endl;
        cout<<"age of the person is "<<age<<endl;
    }
};
class student:public person{
    public: 
    string rollnumber;
    float GPA;
    student(string n,int a,string r,float G):person(n,a){
        rollnumber=r;
        GPA=G;
    }
    void displayinfo()override{
        cout<<"roll number of the student is  "<<rollnumber<<endl;
        cout<<"GPA of the student is the "<<GPA<<endl;
    }
};
class graduatestudent:public student{
    public:
    string thesistitle;
    string visorname;
    graduatestudent(string n,int a,string r,float G,string t,string v):student(n,a,r,G){
        string t;
        string v;
    }
    void displayinfo()override{
        cout<<"thesis title is the  "<<thesistitle<<endl;
        cout<<"advisor name is the "<<visorname<<endl;
    }
};
int main(){
    graduatestudent g1("waleed",19,"16799",3.63,"thesis ","mohuddin");
    g1.displayinfo();
}