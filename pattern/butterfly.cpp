#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Butterfly pattern"<<endl;
    for(int i=1; i<=rows*2-1; i++){
        int newi=i<=rows?i:2*rows-i;
        for(int j=1; j<=newi; j++){
            cout<<"*";
        }
        for(int j=1; j<=(rows-newi)*2; j++){
            cout<<" ";
        }
        for(int j=1; j<=newi; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}
