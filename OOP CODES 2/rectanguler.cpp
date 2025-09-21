#include<iostream>
using namespace std;
class multiple{
    private:
    int length;
    int width;
    public:
    void xmultiple(int l,int w){
        length=l;
        width=w;
    }
    int display(){
        return length*width;
    }
};
int main()
{
    multiple m1;
    m1.xmultiple(2,6);
    cout<<"after multipllying "<<m1.display();
}