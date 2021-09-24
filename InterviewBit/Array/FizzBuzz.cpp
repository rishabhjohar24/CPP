#include<iostream>
#include<vector>
using namespace std;
void fizzbuzz(int A){
    vector<string> V;
    for(int i = 0; i < A; i++){
        if(((i + 1) % 3 == 0) &&((i + 1) % 5 == 0)){
            V.push_back("FizzBuzz");
        }
        else if((i + 1) % 3 == 0){
            V.push_back("Fizz");
        }
        else if((i + 1) % 5 == 0){
            V.push_back("Buzz");
        }
        else{
            V.push_back(to_string(i + 1));
        }
    }
    for(int i = 0; i < A; i++){
        cout<<V[i]<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    fizzbuzz(n);
    return 0;
}