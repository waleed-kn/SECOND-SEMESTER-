#include<iostream>
using namespace std;
class student{
    private:
    string name;
    int age;
    double grades;
    public:
    student(string n,int a,double s){
        name=n;
        age=a;
        grades=s;
    }
    void setname(string newname){
        name=newname;
    }
    void setage(int newage){
        if(newage>0){
            age=newage;

        }
        else{
            cout<<"invalid age"<<endl;
        }
    }
        void setgrades(double newgrades){
            if(newgrades >=0 && newgrades<=100){
                grades=newgrades;

            }
            else{
                cout<<"invalid grades"<<endl;
            }
        }
        string getname(){
            return name;
        }
        int age(){
            return age;
        }
        double grades(){
         return grades;
        }
};
int main()
{
    student myinfo("waleed",20,50.2);
}