#include<iostream>
using namespace std;
int main(){
    float sp,cp;
    cout<<"Enter cost price:";
    cin>>cp;
    cout<<"Enter selling price:";
    cin>>sp;
    if(cp>sp){
        cout<<"Loss= "<<cp-sp<<endl;
    }
    else if(sp>cp){
        cout<<"Profit= "<<sp-cp<<endl;
    }
    else{
        cout<<"No loss or profit"<<endl;
    }

    return 0;
}