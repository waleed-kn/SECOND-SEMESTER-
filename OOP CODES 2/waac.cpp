#include<iostream>
using namespace std;
class student{
    private:
    int rollnum;
    public:
    void getrollnum(int r){
        rollnum=r;
    }
    void displaydata(){
        cout<<"roll number of the student is "<<rollnum<<endl;
    }
};
    class result:public student{
        private:
        int marks;
        public:
        void getmarks(int m){
            marks=m;
        }
        void displaymarks(){
            cout<<"marks of the student is "<<marks<<endl;
        }
    };
    int main(){
        result r1;
        r1.getrollnum(21);
        r1.displaydata();
        r1.getmarks(23);
        r1.displaymarks();    
     }
