#include<iostream>
using namespace std;
class example{
    public:
    example(){
        cout<<"constructor is made  "<<endl;
    }
    ~example(){
        cout<<"destructor is destroyed "<<endl;
    }
};
int main(){
    example e1;
    cout<<"doing some work "<<endl;
}