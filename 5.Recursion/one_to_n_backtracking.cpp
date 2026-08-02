#include<iostream>
using namespace std;

void one_to_n_backtracking(int number);

int main()
{
    int number;
    cout<<"Enter Number: ";
    cin>>number;

    one_to_n_backtracking(number);
    return 0;
}

void one_to_n_backtracking(int number)
{
    if(number < 1)
    {
        return;
    }

    one_to_n_backtracking(number-1);
    cout<<"Number: "<<number<<endl;
}