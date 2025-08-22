#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Inverted triangle with row number : "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=1; j<=i-1;j++){
            cout<<"  ";  
        }
        for(int j=1; j<=rows-i+1;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
