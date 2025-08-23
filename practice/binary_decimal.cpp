#include<iostream>
using namespace std;
int bin(int num){
    int bi=0;
    int mul=1;
    while(num>0){
        int rem=num%2;
        bi = rem*mul+bi;
        mul *= 10;
        num=num/2;
    }
    return bi;
}

int decimal(int num){
    int sum=0;
    int mul=1;
    while(num>0){
        sum = sum + mul*(num%10);
        mul *= 2;
        num /= 10;
    }
    return sum;
}

int main(){
    int x=31;
    cout<<bin(x)<<endl;
    cout<<decimal(1111);
    
    return 0;
}
