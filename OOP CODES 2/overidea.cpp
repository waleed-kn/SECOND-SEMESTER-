#include<iostream>
using namespace std;
class animal{
    private:
    string name;
    public:
    animal(string n){
        name=n;
    }
    virtual void makesound(){
        cout<<name<<"animal make sound"<<endl;
    }
};
class bird: public animal{
    private:
    string name;
    public:
    bird(string n):animal(n){
        name=n;
    }
    virtual void makesound()override{
        cout<<name<<"bird is chirping "<<endl;
    }
    };
    
int main(){
    animal* a=new animal("generic");
    a->makesound();
    animal* b=new bird("waleed ");
    b->makesound();
}