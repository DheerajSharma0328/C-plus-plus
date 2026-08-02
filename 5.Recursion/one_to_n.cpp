#include<iostream>
using namespace std;

void number_till_N(int n , int count);

int main()
{
    int number;
    cout<<"Enter Number: ";
    cin>>number;
    int count = 1;
    number_till_N(number , count);
    return 0;
}

void number_till_N(int number , int count)
{
    if(count > number)
    {
        return;
    }
    cout<<count<<endl;
    number_till_N(number , count+1);
}