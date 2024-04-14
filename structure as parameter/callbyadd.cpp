#include<iostream>
#include<stdlib.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;

};
void fun( struct Rectangle *p){
    p->length=20;//when pointer we use ->
    cout<<"length "<<p->length<<endl<<"breadth "<<p->breadth<<endl;
    //fun will change the value of length
}
int main(){
    struct Rectangle r ={10,5};
    fun(&r);
    cout<<"length\t"<<r.length<<"\tbreadth\t"<<r.breadth<<endl;
    return 0;

}