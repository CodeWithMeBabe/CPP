#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Square pattern with characters : "<<endl;
    for(int i=1;i<=rows;i++){
        for(char j='A'; j<='A'+rows-1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
