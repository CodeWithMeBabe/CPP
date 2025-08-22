#include<iostream>
using namespace std;
int main(){
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Square pattern with characters without repeatation : "<<endl;
    for(int i=1;i<=rows;i++){
        for(char j=65; j<=65+rows-1;j++){
            cout<< char(rows*(i-1)+j) << " ";
        }
        cout<<endl;
    }
}
