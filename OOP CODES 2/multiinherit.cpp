#include<iostream>
using namespace std;
class animal{
    public:
    void dog(){
    cout<<"dog is barking"<<endl;
    }
};
class birds{
    public:
    void woodpeaker(){
        cout<<"woodpeaker is peaking the tree wooden"<<endl;
    }
};
class cat:public animal,public birds{
    public:
    void carpet(){
        cout<<"cat is doing the meow meow"<<endl;
    }

};
int main()
{
    cat mycat;
    mycat.carpet();
    mycat.dog();
    mycat.woodpeaker();
}