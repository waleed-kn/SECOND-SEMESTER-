#include<iostream>
using namespace std;
class person{
    string name;
    int age;
    char gender;
    public:
    void persondetails(string n,int a,char g){
        if(a<0){
            cout<<"invalid age"<<n<<"age is negative"<<endl;
        }
        if(g != 'm' && g != 'f'){
            cout<<"invlaid gender"<<n<<"gender must be 'f' or m' "<<endl;
        }
        name=n;
        age=a;
        gender=g;
    }
    void displaydetails(){
        cout<<" name "<<name<<"age "<<age<<"gender "<<gender<<endl;
    }
};
int main()
{
    person p1;
    p1.persondetails("waleed",19,'m');
    p1.displaydetails();
}