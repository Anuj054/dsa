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
return 0; 
}
int Get(struct Array arr,int index)
{
    if(index>=0 &&index<arr.length )
    return arr.A[index];
    return -1;
}
void Set(struct Array *arr,int index,int x){
    if(index >=0 && index<= arr->length)
    arr->A[index]=x;

}
int max(struct Array arr){
    int max=arr.A[0];
    int i;
    for(i=0;i<arr.length ;i++){
        if(arr.A[i]>max)
        max=arr.A[i];
    }
    return max;
}
int min(struct Array arr){
    int min=arr.A[0];
    int i;
    for(i=0;i<arr.length ;i++){
        if(arr.A[i]<min)
        min=arr.A[i];
    }
    return min;
}
int Sum(struct Array arr)
{
int s=0,i;
for(i=0;i<=arr.length;i++){
    s+=arr.A[i];
}
    return s;
};
float Avg(struct Array arr)
{
    return (float) Sum(arr)/arr.length;
}
void reverse(struct Array *arr){
    int *B;
    int i,j;
    B=(int *)malloc(arr->length*sizeof(int));
    for(i=arr->length-1,j=0;i>=0;i--,j++){
        B[j]=arr->A[i];
    }
    for(i=0;i<=arr->length;i++){
        arr->A[i]=B[i];
    }


}
void reverse2(struct Array *arr){
    int i,j;
    for(i=0,j=arr->length-1;i<j;i++,j--)
    swap(arr->A[i],arr->A[j]);
}

void InsertSort (struct Array *arr,int x){

    int i=arr->length-1;
    if(arr->length==arr->size)
    return;
    while( i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;


};
int isSort(struct Array arr){
    int i;
    for(i=0;i<arr.length-1;i++){
        if(arr.A[i]>arr.A[i+1])
return 1;
    }

    return 1;
}
void rearrange(struct Array *arr){
int i,j;
i=0;
j=arr->length-1;
while(i<j){
    while(arr->A[i]<0)i++;
    while(arr->A[j]>=0)j--;
    if(i<j)Swap(&arr->A[i],&arr->A[j]);
}

}



int main(){
    struct Array arr={{2,-3,5,10,-15},10,5};
//    Insert(&arr,5,10);//for inserting element
// cout<<LinearSearch(&arr,5)<<endl;//linear searching

// cout<<BinarySearch(arr,5) <<endl;//binary searching
// cout<<RBinarySearch(arr.A,0,arr.length,5)<<endl;// recursive binary seacrh
// cout<<Get(arr,2)<<endl;//get
// Set(&arr,4,5);//set
//reverse2(&arr);//reverese array
//cout<<max(arr);maximum element
//InsertSort(&arr,12);//insert element in sorted way
//cout<<isSort(arr)<<endl; //check if array is sorted
rearrange(&arr);
Display(arr);//display array

};