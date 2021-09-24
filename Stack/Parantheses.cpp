#include<bits/stdc++.h>
using namespace std;
int main(){
    stack <char> s;
    string A;
    int count = 0, counter2 = 0, counter1 = 0;
    cin>>A;
    for(int i = 0; i < A.length(); i++){
        if(A[i] == '('){
            s.push(A[i]);
            counter1++;
        }
        else if(A[i] =')'){
            if(s.size() > 0){
                s.pop();
                count++;
                counter1--;
            }
            else{
                counter2++;
            }
        }
    }
    cout<<abs(counter1 + counter2);
    return 0;
}