#include<iostream>
using namespace std;
class car{
    private:
    string name;
    int age;
    public:
    void showname(string n){
        name=n;
    }
    string getname(){
        return name;
    }
    void showage(int a){
        if(age>0){
            age=a;
        }
        else{
            cout<<"invalid age"<<endl;
        }
    }
    int getage(){
        return age;
    }
};
int main()

{
    car c1;
    c1.showage(19);
    c1.showname("MUHAMMAD WALEED ");
    cout<<"NAME IS "<<c1.getname()<<endl;
    cout<<"AGE IS "<<c1.getage()<<endl;
}