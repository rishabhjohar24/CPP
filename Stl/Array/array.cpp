#include<iostream>
#include<array>
using namespace std;
int main (){
    array <int, 8 > data = { 11,22,33,44,55};
    array <int, 8 > data1 = { 1,2,3,4,5};
    data.swap(data1);
    for(int i=0; i<8 ; i++){
        cout<<data.at(i)<<" ";
    }
    cout<<"-------------------------";
    for(int i=0; i<8 ; i++){
        cout<<data1.at(i)<<" ";
    }
    return 0 ;
}