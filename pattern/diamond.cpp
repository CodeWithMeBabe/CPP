#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Hollow Diamond Pattern"<<endl;
    for(int i=1; i<=rows*2-1;i++){
        int nrows = i<=rows?i:2*rows-i;;
        for(int j=1;j<=rows-nrows;j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<=2*(nrows-1)-1;j++){
            cout<<" ";
        }
        for(int j=1;j<=nrows-1;j++){
            cout<<"*";
            break;
        }



        cout<<endl;
    }
    
    
    return 0;
}
