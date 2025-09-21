#include<iostream>
using namespace std;
class animal{
    public:
    void makesound(){
        cout<<"animal make sound"<<endl;
    }

};
class cat:public animal{
    public:
    void meow(){
        cout<<"cats meow meow meow"<<endl;
    }
};
class dog:public animal{
    public:
    void bark(){
    cout<<"dog bark bark bark"<<endl;
    }
};
int main(){
    cat c;
    dog d;
    d.makesound();
    c.meow();

}