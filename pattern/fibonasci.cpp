#include<iostream>
using namespace std;
void fib(int num){
    if(num>=1){
        cout<<0<<" ";
    }
    if(num>=2){
        cout<<1<<" ";
    }
    int first=0,second=1;
    while(num>=3){
        second +=first;
        first =second-first;
        cout<<second<<" ";
        num --;
    }
    
}
int main(){
    int a=10;
    for(int i=-10;i<a;i++){
        cout<<i<<"  =  ";
        fib(i);
        cout<<endl;
    }
    return 0;
}
