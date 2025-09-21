#include<iostream>
using namespace std;
class teacher{
    private:
    double salary;
    public:
    string name;
    int age;
    void setage(int a){
        if(a > 10 && a < 100){
            age=a;
        }
        else{
            cout<<"invalid input";
        }
    }
    int getage(){
        return age;
    }
};
int main()
{
    teacher obj;
    obj.setage(45);
    cout<<obj.getage();
}