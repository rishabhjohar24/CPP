#include<iostream>
#include<string>
#include<tuple>
using namespace std;
int main() {
    tuple < string, int, int > t;
    t = make_tuple("Rishabh",20,55);
    cout<<get<0>(t)<<" ";
    cout<<get<1>(t)<<" ";
    cout<<get<2>(t)<<" ";
    return 0;
}