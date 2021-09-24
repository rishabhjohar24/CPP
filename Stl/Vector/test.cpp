#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    // vector <int> v1 {10,20,30};
    // vector <char> v2(2); //Empty vector of length 2
    // vector <int> v3(5,10); //Vector filled with all the value as 10
    // vector <string> v4(3); //Empty vector of length 3
    // vector <string> v4(3,"Hello"); //Vector containing all the value as "Hello"
    
    // cout<<v4[0]; //How to print a value at index i 

    vector <int> v ;
    //Capacity function shows the capacity of vector
    cout<<"Current capacity is: "<<v.capacity()<<endl; //Printing the initial capacity of vector "v"
    
    //Pushing the value in vector using push_back() function
    for(int i=0 ; i<10; i++){
        v.push_back(10*(i+1));
    }; 
    for(int j=0; j<v.size(); j++){
            cout<<v[j]<<" ";
        };
    cout<<"Current capacity is: "<<v.capacity()<<endl;
    cout<<endl;
    //Poping the value of from vector using pop_back() function 
    // cout<<"Current capacity is: "<<v.capacity()<<endl;
    // for(int i=0 ; i<10; i++){
    //     v.pop_back();
    //     cout<<"Current capacity is: "<<v.capacity()<<endl;
    // }; 
    // for(int j=0; j<v.capacity(); j++){
    //         cout<<v[j]<<" ";
    //     };
    //     cout<<v.at(3);

    //Inserting value using iterator at index i
    vector <int> :: iterator  it = v.begin();
    v.insert(it+3,1273);    
    for(int j=0; j<v.size(); j++){
        cout<<v[j]<<" ";
    };
    cout<<"Current capacity is: "<<v.capacity()<<endl;
    cout<<endl;
    return 0;
}