#include<iostream>
using namespace std;

void n_to_one(int number);

int main()
{
    int number;
    cout<<"Enter Number: ";
    cin>>number;

    n_to_one(number);

    return 0;

}

void n_to_one(int number)
{
    cout<<"Count: "<<number<<endl;;

    if(number == 1)
    {
        return;
    }

    // number--;
    n_to_one(number-1);
}