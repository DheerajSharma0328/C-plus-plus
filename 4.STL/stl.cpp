#include<iostream> //for input ouptut
#include<utility> //for pair
#include<vector> //for vector
// #include<bits/stdc++.h> // for all the library provided by C++
using namespace std;

void pair_example();
void vector_example();


int main(){
    // cout<<"It is working"<<endl;
    // pair_example();
    cout<<endl;
    vector_example();
    return 0;
}

void pair_example(){
   pair<int , int> p = {1,3};
   cout<<"Pair Fist Element: "<<p.first<<endl<<"Pair Second Element: "<<p.second<<endl; 

   pair<int , pair<int , string>> data = {1 , {26 , "Dheeraj"}};
   cout<<"Data First Element: "<<data.first<<endl<<"Data Second's First Element: "<<data.second.first<<endl<<
   "Data Second's Second Element: "<<data.second.second<<endl;

   pair<int , string> arr[] ={{1,": Dheeraj"} , {2, ": Deepanshi"} , {3,": Kaushik"}};
   cout<<"First's First and Second: "<<arr[0].first<<" "<<arr[0].second<<endl<<
   "Second's First and Second: "<<arr[1].first<<" "<<arr[1].second<<endl<<
   "Third's First and Second: "<<arr[2].first<<" "<<arr[2].second<<endl;

}

void vector_example(){

    vector<int> number;
    number.push_back(14);
    number.push_back(223);
    number.push_back(13);
    number.emplace_back(36);
    number.push_back(131);

    cout<<number[0]<<endl;
    cout<<number[1]<<endl;
    cout<<number[2]<<endl;
    cout<<number[3]<<endl;
    cout<<number[4]<<endl;

    vector<int>::iterator printing = number.begin();
    vector<int>::iterator printing1 = number.end();

    printing1--;

    cout<<"Printing Begin: "<< *(printing) <<" "<<endl;
    cout<<"Printing End: "<< *(printing1) <<" "<<endl;
    cout<<"what is Number of Zero: "<<number[0]<<" "<<"What is Number at: "<<number.at(0)<<endl;
    cout<<"Back of Number: "<<number.back()<<endl<<endl;

    // Looping or printing the Vector
    cout<<"Looping Vector Normal way: "<<endl;
    for(vector<int>::iterator printing_number = number.begin(); printing_number != number.end(); printing_number++)
    {
        cout<<*(printing_number)<<" ";
    }

    cout<<endl<<endl;

    //auto way
    cout<<"Looping Vector Auto way: "<<endl;
    for(auto numner_auto = number.begin() ; numner_auto!=number.end(); numner_auto++)
    {
        cout<<*(numner_auto)<<" ";
    }

    cout<<endl<<endl;

    // Using for each
    cout<<"Looping Vector using For Each Loop: "<<endl;
    for(auto number_foreach : number)
    {
        cout<<number_foreach<<" ";
    }    

    cout<<endl<<endl;


}
