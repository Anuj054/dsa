#include<iostream>
using namespace std;


void fun(int n){
    if(n>0){
        fun(n-1);
        cout<<n;

    }
}
int main(){
    fun(3);
}
// time complexity is O(n) space complexity is O(1)