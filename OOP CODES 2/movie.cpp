#include<iostream>
using namespace std;
class movie{
    public:
    string name;
    string releasedate;
    float rating;
    string category;
    void moviedetail(string n,string ra,float r,string c){
        name=n;
        releasedate=ra;
        if(r>0 && r<50){
            rating=r;
        }
        else{
            cout<<"invalid rating input"<<rating<<endl;
        }
        if(c == "adventure" || c == "action" || c =="comedy" || c =="thriller"){
            category=c;
        }
        else{
            cout<<"invalide category is"<<category<<endl;

        }
    }
    void displaydetails(){
        cout<<"name  "<<name<<"  release date "<<releasedate<<" ratings "<<rating<<" category "<<category<<endl;
    }
};
int main(){
    movie m1;
    m1.moviedetail("prison break","1 / 3 / 2005",8.3,"adventure");
    m1.displaydetails();
    movie m2;
    m2.moviedetail("sfdaf","afdad",4.3,"comedy");
    m2.displaydetails();
    
}