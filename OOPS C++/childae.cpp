#include<iostream>
using namespace std;
class child{
    private:
    int age;
    public:
    void setage(int a){
        if(age>0){
            age=a;
        }else{
            cout<<"age is invalid not positive"<<endl;
        }
    }
    int getage(){
    return age;
    }

};
int main(){
    child c;
    c.setage(10);
    cout<<"age is"<<c.getage()<<endl;


}