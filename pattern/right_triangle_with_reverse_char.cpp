#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Triangle pattern with reverse char : "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=i+64; j>=65;j--){
            cout<<char(j)<<" ";
           
        }
        cout<<endl;
    }
}
