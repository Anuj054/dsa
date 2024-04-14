#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    int *p;
    p=(int *)malloc(5*sizeof(int));
    //p=new int[5]   for cpp //
    p[0]=10;p[1]=12;p[2]=44;p[3]=56;p[4]=34;
    for(int i=0;i<5;i++)
        cout<<p[i]<<endl;
     delete [ ] p;
    return 0;
}
