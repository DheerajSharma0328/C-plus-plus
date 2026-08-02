#include<iostream>
using namespace std;

void sum_of_n_recursive_way(int number , int count , int sum);
int sum_of_n_functional_way(int number);

int main()
{
    int number;
    cout<<"Enter Number: ";
    cin>>number;

    int count = 1;
    int sum = 0;
    sum_of_n_recursive_way(number , count , sum);
    int result = sum_of_n_functional_way(number);
    cout<<"Sum is: "<<result<<endl;
    return 0;

    
}

void sum_of_n_recursive_way(int number , int count , int sum)
{
    if(count > number)
    {
        cout<<"Sum is: "<<sum<<endl;
        return;
    }

    // sum = sum + count;
    sum_of_n_recursive_way(number , count+1 , sum + count);


}

int sum_of_n_functional_way(int number)
{
    if(number <= 0)
    {
        return 0;
    }

    return number + sum_of_n_functional_way(number-1);
}