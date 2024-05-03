#include<iostream>
using namespace std;
class Array{
    private:
    int *A;
    int size;
    int length;

public:
Array(){
    size=10;
    A=new int[10];
    length=0;

}
Array(int sz){
    size=sz;
    length=0;
    A=new int[size];
}
~Array(){
    delete []A;
}
void Display();
void Insert(int index,int x);
int Delete(int index);



};
void Array::Display(){
    for(int i=0;i<length;i++)
cout<<A[i]<<" ";
    cout<<endl;
}
int main(){
    return 0;
};
