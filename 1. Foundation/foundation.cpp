#include<iostream>
using namespace std;

void data_types();
void decision_making_statements(int age , int number , int week_number);
void loops();
int sum(int a , int b);

int main(){

   data_types();

   int age;
   cout<<"Enter your Age: ";
   cin>>age;
   int number;
   cout<<"Enter a Number: ";
   cin>>number;
   int week_number;
   cout<<"Enter Week Number 1 to 7 : ";
   cin>>week_number;
   decision_making_statements(age , number , week_number);

   loops();
   
   int suma = 0;
   cout<<"Enter Addition 1st number: ";
   cin>>suma;
   int sumb = 0;
   cout<<"Enter Addition 2nd number: ";
   cin>>sumb;

   int result = sum(suma , sumb);
   cout<<"Sum of 1st and 2nd number is: "<<result<<endl;

    return 0;
}

void data_types (){

    const int a = 10;
    cout<<"Conatant Integer: "<<a<<endl;

    int b = 20;
    cout<<"Normal Integer: "<<b<<endl;
    
    float c = 28.03;
    cout<<"Float: "<<c<<endl;

    double d = 2726.5923867145;
    cout<<"Double: "<<d<<endl;

    char e = 'a';
    cout<<"Character: "<<e<<endl;

    bool jud = true;
    cout<<"Boolean: "<<jud<<endl;

    short f = 28;
    cout<<"Short: "<<f<<endl;

    long g = 3478264;
    cout<<"Long: "<<g<<endl;

    long long h = 875196478126435678;
    cout<<"Long Long: "<<h<<endl;

}

void decision_making_statements(int age , int number , int week_number){
    
    if(age >= 18 ){

        cout<<"You are eligibale for voting: "<<endl;

    }

    if(number % 2 == 0){
        cout<<number<<" is Even: "<<endl;
    }
    else{
        cout<<number<<" is Odd: "<<endl;
    }

    if(age == 18){
        cout<<"You are eligible for Voting: "<<endl;
    }
    else if(age > 18){
        cout<<"You are eligible for Voting: "<<endl;
    }
    else{
        cout<<"You are unber age you are not eligibale for Voting: "<<endl;
    }

    switch(week_number){

        case 1: cout<<" Monday ";break;
        case 2: cout<<" Tuesday ";break;
        case 3: cout<<" Wednesday ";break;
        case 4: cout<<" Thrusday ";break;
        case 5: cout<<" Friday ";break;
        case 6: cout<<" Saturday ";break;
        case 7: cout<<" Sunday ";break;
        default : cout<<"Wrong Input";

    }

}

void loops(){

    cout<<endl<<"For Loop: "<<endl;
    for(int i = 0 ; i < 10 ; i++){
        cout<<i<<endl;
    }

    cout<<"While Loop: "<<endl;
    int number;
    cout<<"Enter a number: ";
    cin>>number;

    int i = 0;
    while(i <= number){

        cout<<i<<endl;
        i++;

    }

    cout<<"Do While: "<<endl;
    i=0;
    int a = 0;
    do{
        a = a + i;
        i++;
    }
    while(i <= number);
    cout<<"While Loop Sum of number: "<<a<<endl;

    cout<<
    "1. Break"<<endl<<
    "2. Return"<<endl<<
    "3. Goto"<<endl<<
    "4. Continue"<<endl;
}

int sum(int a , int b){

    int sum = a + b;
    return sum;

}

