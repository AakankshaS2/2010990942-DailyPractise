#include<iostream>
using namespace std;
int fact(int i){
    if(i==0||i==1)
    return 1;
    else{
        return (i*fact(i--));
    }
}
int main{
    int n;
    cout<<"Enter Number:";
    cin>>n;
    cout<<"Factorial of Number:"<<fact( );
}