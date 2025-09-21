#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    public:
    void gperson(){ 
    cout<<"enter the name"<<endl;
    cin>>name;
    cout<<"enter the age"<<endl;
    cin>>age;

    }
    void showinfo(){
        cout<<"your name is"<<name<<endl;
        cout<<"your age is"<<age<<endl;
    }
};
int main()
{
    person p;
    p.gperson();
    p.showinfo();
}