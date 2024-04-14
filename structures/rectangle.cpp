#include<iostream>
using namespace std;
    struct rectangle
    {
       int length;
       int breadth;

    };
    
    int main (){

      struct rectangle r1={5,4};
       cout<<sizeof(r1)<<endl;
       cout<<r1.breadth<<endl;
       cout<<r1.length<<endl;

    } 