#include<iostream>
using namespace std;
int powerOfTwo(int num){
    int newnum=num;
    bool flag=false;
    while(newnum){
        if((newnum & 1) == 0){
            newnum = newnum>>1;
        }
        else{
            return newnum==1;
        }
    }
    return true;
}
int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;
    cout<<"Number is : "<<num<<endl;
    for(int i=1;i<=num;i++){
        cout<<i<<"  =  ";
        if(powerOfTwo(i)){
            cout<<"Power of two";
        }
        else{
            cout<<"Not power of two";
        }
        cout<<endl;
    }

    
    
    return 0;
}
