#include<iostream>
using namespace std;

void n_to_one_backtracking(int number , int count);

int main()
{
    int number;
    cout<<"Enter Number: ";
    cin>>number;

    int count = 1;

    n_to_one_backtracking(number , count);
    return 0;
}

void n_to_one_backtracking(int number , int count)
{
    if(count > number)
    {
        return;
    }
    
    n_to_one_backtracking(number , count+1);
    cout<<"Number: "<<count<<endl;
}
