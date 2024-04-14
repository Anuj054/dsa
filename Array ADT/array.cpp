#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct Array 
{
    int *A;
    int size;
    int length;
};
void Display(struct Array arr){
int i;
cout<<"elements are ";
for(i=0;i<arr.length;i++)
cout<<arr.A[i] <<endl;

}
int main(){
    struct Array arr;
    int i,n;
    cout<<"enter size of array"<<endl;
  cin>>arr.size;
    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length=0;
cout<<"enter no of numbers";
cin>>n;
cout<<"enter all elements ";
for(i=0;i<n;i++){
    cin>>arr.A[i];
}
arr.length=n;

Display(arr );

}

