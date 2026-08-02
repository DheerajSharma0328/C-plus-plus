#include<iostream>
using namespace std;

void recursion(int a);

int main(){
    int a = 0;

    recursion(a);
    return 0;
}

void recursion(int a){

    
    a++;
    if(a==3)
    {
        return;
    }
    else
    {
        cout<<"Print: "<<a<<"Times"<<endl;
    }
    recursion(a);
}