#include<iostream>
using namespace std;

int pow(int m,int n){
    if(n==0)
    return 1;
    return pow(m,n-1)*m;

}
int pow1(int m,int n){
    if(n==0)
    return 1;
    if(n%2==0)
    return pow1(m*m,n/2);
    return pow1(m*m,(n-1)/2)*m;
}
int main(){


    int r,s;
    r=pow(2,9);
s=pow1(2,9);
    cout<<r<<endl<<s;
    return 0;
}