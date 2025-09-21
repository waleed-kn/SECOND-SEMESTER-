#include<iostream>
using namespace std;
class mobile{
    private:
    string name;
    public:
    void setmobile(string s){
        name=s;
    }
    string getmobile(){
        return name;
    }
};
int main()
{
    mobile w;
    w.setmobile("redmi a3");
    cout<<"model is"<<w.getmobile()<<endl;
}
