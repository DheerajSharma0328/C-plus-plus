#include<iostream>
using namespace std;

void printing_name(string name , int frequency , int count);

int main()
{
    string name;
    cout<<"Enter Name: ";
    cin>>name;
    int frequency;
    cout<<"Name Frequency: ";
    cin>>frequency;
    int count = 1;
    printing_name(name , frequency , count);
    return 0;
}

void printing_name(string name , int frequency , int count)
{
    if(count > frequency)
    {
        return;
    }
    
    cout<<count<<" "<<name<<endl;
    count++;
    printing_name(name , frequency , count);
}