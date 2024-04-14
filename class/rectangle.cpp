#include<iostream>
using namespace std;


class Reactangle {
    private:
    int length;
    int breadth;
    
    public:
    Reactangle(){
        length=0;
        breadth=0;

    }
    Reactangle(int l , int b){
        length =l;
        breadth =b;
    }

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
    void setlength(int l){
        length=l;
    }
    void setbreadth(int b){
        breadth=b;
    }
    ~Reactangle(){
        cout<<"destructor";
    }
};
int main(){
Reactangle r(10,15);
cout<<"Area"<<r.area()<<endl;
cout<<"Perimeter"<<r.perimeter()<<endl;


}