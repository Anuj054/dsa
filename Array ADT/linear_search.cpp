#include<iostream>
#include<stdio.h>
#include<stdlib.h>

using namespace std;
struct Array 
{
    int A[10];
    int size;
    int length;
};
void Display(struct Array arr){
int i;
cout<<"elements are ";
for(i=0;i<arr.length;i++)
cout<<arr.A[i] <<endl;

}
void Append(struct Array *arr ,int x){
if(arr->length<arr->size)
arr->A[arr->length++]=x;
}
void Insert(struct Array *arr,int index,int x){// insertion 
    int i;
if(index>=0 && index <=arr->length){
for(i=arr->length;i>index;i--){
    arr->A[i]=arr->A[i-1];
    arr->A[index]=x;
    arr->length++;
}
}
};
void Swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;

}

int LinearSearch(struct Array *arr,int Key){
    int i;
    for(i=0;i<arr->length;i++){
        if(Key==arr->A[i]){
            Swap(&arr->A[i],&arr->A[i-1]);
        return i;
        }
    }
    return -1;
}
int BinarySearch(struct Array arr,int key){
    int l,mid,h;
    l=0;
    h=arr.length-1;
  
    while(l<=h){
        mid=(l+h)/2;
        if(key==arr.A[mid])
        return mid;
        else if(key<arr.A[mid])
        h=mid-1;
        else
        l=mid+1;

    }
    return -1;

}
int RBinarySearch(int a[],int l,int h,int key){
    int mid;
    if(l<h){
        mid=(l+h)/2;
        if(key==a[mid])
        return  mid;
        else if(key<a[mid])
        return RBinarySearch( a,l,mid-1,key);
        else 
        return RBinarySearch(a,mid+1,h,key);
    }

};
int main(){
    struct Array arr={{2,3,4,5,6},10,5};
   //Insert(&arr,5,10);
cout<<LinearSearch(&arr,5)<<endl;
Display(arr);
cout<<BinarySearch(arr,5) <<endl;
cout<<RBinarySearch(arr.A,0,arr.length,5)<<endl;


};