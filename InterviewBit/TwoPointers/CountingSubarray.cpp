#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> A = {8, 5, 1, 10, 5, 9, 9, 3, 5, 6, 6, 2, 8, 2, 2, 6, 3, 8, 7, 2, 5, 3, 4, 3, 3, 2, 7, 9, 6, 8, 7, 2, 9, 10, 3, 8, 10, 6, 5, 4, 2, 3, 4, 4, 5, 2, 2, 4, 9, 8, 5 };
    int B;
    cin>>B;
    int count = 0, sum = 0, i = 0, j = 0;
    for(j = 0; j < A.size(); j++){
        sum = sum + A[j];
        while(sum >= B){
            sum = sum - A[i++];
            count = count + j - i + 1;
        }
    }
    cout<<count;
    return 0;
}