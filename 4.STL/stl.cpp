#include<iostream> //for input ouptut
#include<utility> //for pair
#include<vector> //for vector
#include<list> //for list
// #include<bits/stdc++.h> // for all the library provided by C++
using namespace std;

void pair_example();
void vector_example();
void list_example();

int main(){
    cout<<"Learning Standard Tamplate Library(STL)"<<endl;
    // pair_example();
    // vector_example();
    list_example();
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

    // Deletion in vector
    cout<<"ddeletion in Vector: ";
    number.erase(number.end()-2);
    for(auto number_deletion : number)
    {
        cout<<number_deletion<<" ";
    }

    number.push_back(54);
    number.push_back(21);
    number.push_back(98);
    number.push_back(78);

    for( auto number_add : number)
    {
        cout<<number_add<<" ";
    }

    //Deleting Multiple items in Vector
    // Here sating index is included but the ending index is not including so if we want ro delete item from 
    // index 0 to index 3 then to delete these index we have to give oen more index address
    // sp delete element from index 0 to 3 then we have to pass hte index from 0 t0 4
    cout<<endl<<endl;
    cout<<"Deleting Multiple items in Vector: ";

    number.erase(number.begin()+1 , number.begin()+3);

    for(auto number_multi_delete : number)
    {
        cout<<number_multi_delete<<" ";
    }

    
    // Insertion in Vector
    cout<<endl<<endl<<"Insertion in Vector: ";

    number.insert(number.end() , 1);

    for(auto number_insert : number)
    {
        cout<<number_insert<<" ";
    }

     cout<<endl<<endl<<"Multi-Insertion in Vector: ";
     number.insert(number.end(), {2,3,4,5});
     number.insert(number.begin() , {1,2,3,4,5});

     for(auto number_multi_insert : number)
     {
        cout<<number_multi_insert<<" ";
     }

      cout<<endl<<endl;

    //   How to insert one vector inside another
    vector<int> copy = {50 , 50};

    //Now insertng this vector inside the another vector

    number.insert(number.begin()+3 , copy.begin() , copy.end());

    //Prinitng the old number Vector

    for(auto number_vector_insert : number)
    {
        cout<<number_vector_insert<<" ";
    }

    // Size of vector
    cout<<endl<<endl<<"Size of vector: "<<number.size()<<endl<<endl;

    // Deleting the last element only using Pop
    number.pop_back();

    for(auto number_pop : number)
    {
        cout<<number_pop<<" ";
    }

    // Swaping the vector
    cout<<endl<<endl<<"Swaping the vector: "<<endl<<endl;
    vector<int> vector1 = {1,2,3,4,5,11};
    vector<int> vector2 = {6,7,8,9,0};

    // Swaping these two vector

    vector1.swap(vector2);

    // Printing Vector1 After Swapping
    cout<<"Printing Vector1 After Swapping: ";
    for(auto vector1_swap : vector1)
    {
        cout<<vector1_swap<<" ";
    }
    // Printing Vector2 After Swapping
    cout<<endl<<endl<<"Printing Vector2 After Swapping: ";
    for(auto vector2_swap : vector2)
    {
        cout<<vector2_swap<<" ";
    }

    // Deleting All Element of a vector1
    cout<<endl<<endl<<"Size of Vector1: "<<vector1.size();
    cout<<endl<<endl<<"Deleting All Element of a Vector1: "; 
    vector1.clear();
    cout<<endl<<endl<<"Size of Vector1: "<<vector1.size()<<endl<<endl;

    // Checking that a vector is empty of not
    // If it is empty function return : true else : false

    // Checking that vector1 is Empty or not
    cout<<"Checking that vector1 is Empty or not: "<<vector1.empty()<<endl<<endl;
    // Checking that vector2 is Empty or not
    cout<<"Checking that vector2 is Empty or not: "<<vector2.empty()<<endl<<endl;

}

void list_example(){

    list<int> number;

    number.push_back(2);
    number.emplace_back(4);

    number.push_front(5);
    number.emplace_front(4);

    for(auto list_number : number)
    {
        cout<<list_number<<" ";
    }
    cout<<endl;
    
}