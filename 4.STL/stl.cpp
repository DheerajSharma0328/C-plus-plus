#include<iostream> //for input ouptut
#include<utility> //for pair
// #include<bits/stdc++.h> // for all the library provided by C++
using namespace std;

void pair_example();


int main(){
    cout<<"It is working"<<endl;
    pair_example();
    return 0;
}

void pair_example(){
   pair<int , int> p = {1,3};
   cout<<"Pair Fist Element: "<<p.first<<endl<<"Pair Second Element: "<<p.second<<endl; 

   pair<int , pair<int , string>> data = {1 , {26 , "Dheeraj"}};
   cout<<"Data First Element: "<<data.first<<endl<<"Data Second's First Element: "<<data.second.first<<endl<<
   "Data Second's Second Element: "<<data.second.second<<endl;

   pair<int , string> arr[] ={{1,"Dheeraj"} , {2, "Deepanshi"}};
   cout<<"First's First and Second: "<<arr[0].first<<" "<<arr[0].second<<endl<<
   "Second's First and Second: "<<arr[1].first<<" "<<arr[1].second<<endl;
}