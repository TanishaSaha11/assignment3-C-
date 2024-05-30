#include<iostream>
using namespace std;
int main(){
    float length,breadth;
    cout<<"Enter length:";
    cin>>length;
    cout<<"Enter breadth:";
    cin>>breadth;
    if(length==breadth){
        cout<<"It is a Square"<<endl;
    }
    else{
        cout<<"It is a Rectangle"<<endl;
    }
    return 0;
}