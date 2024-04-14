#include<iostream>
using namespace std;

void fun(int n){
    while(n>0){
        cout<<n;
        n--;
    }
}
int main(){
    fun(3);
}
// time complexity is O(n) space complexity is O(1)