#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;

};
void fun( struct Rectangle r){
    r.length=20;
    cout<<"length "<<r.length<<endl<<"breadth "<<r.breadth<<endl;
    //fun will not change the value of length
}
int main(){
    struct Rectangle r ={10,5};
    fun(r);
    cout<<"length\t"<<r.length<<"\tbreadth\t"<<r.breadth<<endl;
    return 0;

}