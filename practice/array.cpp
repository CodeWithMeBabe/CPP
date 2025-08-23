#include<iostream>
using namespace std;

int search(int ar[],int size,int target){
    for(int i=0;i<size;i++){
        if(ar[i]==target){
            return i;
        }
    }
    return  -1;

}

int main(){
    int arr[]={4,2,7,8,1,2,5};
    int size=7;

    // Linear search
    int target=4;
    cout<<search(arr,size,target)<<endl;

    //Reverse Array
    cout<<"Original array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    int last_index=size-1;
    for(int i=0; i<size/2; i++){
        int temp=arr[i];
        arr[i]=arr[last_index];
        arr[last_index]=temp;
        last_index--;
    }
    cout<<"\nReversed array is : ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    
    
    return 0;
}
