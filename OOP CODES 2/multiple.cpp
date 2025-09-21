#include<iostream>
using namespace std;
class A{
    public:
    void showA(){
        cout<<"this is the A "<<endl;
    }
};
class B:public A{
    public:
    void showB(){
        cout<<"THIS IS FOR THE B  "<<endl;
    }
};
class C:public A{
    public:
    void showC(){
        cout<<"this is for the C "<<endl;
    }
};
class D:public B{
    public:
    void showD(){
        cout<<"THIS IS FOR THE SHOW D  "<<endl;
    }
};
int main()
{
    D obj;
    obj.showB();
    obj.showD();
    obj.showA();
}