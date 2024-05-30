#include<iostream>
using namespace std;
int main(){
    char op;
    int num1,num2;
    cout<<"Enter an operator[+,-,*,/]:";
    cin>>op;
    cout<<"Enter two numbers :";
    cin>>num1;
    cin>>num2;
    cout<<num1<<op<<num2<<'=';
    if(op=='+'){
        cout<<num1+num2<<endl;
    }
    else if(op=='-'){
        cout<<num1-num2<<endl;
    }
    else if(op=='*'){
        cout<<num1*num2<<endl;
    }
    else if(op=='/'){
        cout<<num1/num2<<endl;
    }
    else{
        cout<<"Operator not found"<<endl;
    }
    return 0;
}