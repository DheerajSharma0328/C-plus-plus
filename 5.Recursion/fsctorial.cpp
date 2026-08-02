#include<iostream>
using namespace std;

int factorial_functioal_recursion(int number);

int main()
{
    int number;
    cout<<"Enter Number: ";
    cin>>number;

    int result = 1;

    result = factorial_functioal_recursion(number);
    cout<<"Factorial is: "<<result<<endl;
    return 0;
}

int factorial_functioal_recursion(int number)
{
    if (number == 0)
    {
        return 1;
    }
    

    if(number <= 1){
        return number ;
    }

    return number * factorial_functioal_recursion(number - 1);
}
