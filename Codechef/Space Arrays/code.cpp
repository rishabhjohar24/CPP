#include<bits/stdc++.h>
using namespace std;
bool isarray(int A[], int N){
    int B[N];
    sort(A, A + N);
    for(int i = 0; i < N; i++){
        B[i] = i + 1;
    }
    for(int i = N - 1; i >= 0; i--){
        if(A[i] > B[i]){
            return false;
        }
    }
    return true;
}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t ; i++){
        long long int N, var = 0; 
        cin>>N;
        int A[N];
        for(int i = 0; i < N; i++){
            cin>>A[i];
        }
        for(int i = 0; i < N; i++){
            var = var + A[i];
        }
        var = ((N * (N + 1)) / 2) - var;
        if(isarray(A, N) == true){
            if(*min_element(A, A + N) != 1){
                cout<<"Second"<<endl;
            }
            else{
                if(var < 0){
                    cout<<"Second"<<endl;
                }
                else if((var % 2) == 0){ 
                    cout<<"Second"<<endl;
                }
                else{
                    cout<<"First"<<endl;
                }
            }
        }
        else{
            cout<<"Second"<<endl;
        }
    }
    return 0;
}