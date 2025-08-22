#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    int count=1;
    cout<<"Triangle pattern with reverse number : "<<endl;
    for(int i=1;i<=rows;i++){
        for(int j=i; j>=1;j--){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}
