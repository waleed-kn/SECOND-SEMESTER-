#include<iostream>
using namespace std;
class A{
    public:
    void func(){
        cout<<"waleed khan ";
    }
};
class B{
    public:
    void funct(){
        cout<<"khannn";
    }
};
class C:public A,public B{
public:
};
int main(){
    C a;
    a.func();
    a.funct();
}