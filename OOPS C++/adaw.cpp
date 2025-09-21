#include<iostream>
using namespace std;
class animal{
    protected:
    string name;
    int age;
    public:
    animal(string n,int a){
        name=n;
        age=a;
    }
    virtual void showname(){
        cout<<"name is the "<<name<<endl;
    }
    void showage(){
        cout<<"age is the "<<age<<endl;
    }
};
    class pet:public animal{
        public:
        pet(string n,int a):animal(n,a){
        }
        void showname()override{
        }
        void showage(){
            
        }
    };
    class cat:public pet{
        public:
        cat(string n,int a):pet(n,a){
        }
        void showname()override{

        }
    };
    int main()
    {
        animal* mycat[2];
        mycat[0] = new animal("cow",34);
        mycat[1] = new pet("pappy",12);
        for(int i=0; i<2; i++){
            mycat[i]->showage();
            mycat[i]->showname();
        }
    }