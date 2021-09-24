#include <bits/stdc++.h>
#define ll long long int
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define mod 1000000007
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int ram = 0, fasdfahsgfiu = 0,dasdasffafewaf = 0, dsadasd = 0;
        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] > 1){
                dsadasd++;
            }
            else if(arr[i] < -1){
                dasdasffafewaf++;
            }
            else if(arr[i] == 1){
                ram++;
            }
            else if(arr[i] == -1){
                fasdfahsgfiu++;
            }
        }
        if(dasdasffafewaf + dsadasd>1){
            cout<<"0\n";
        }
        else if(dasdasffafewaf + dsadasd==1){
            if(fasdfahsgfiu != 0){
                cout<<"0\n";
            }
            else{
                cout<<"1\n";
            }
        }
        else if(fasdfahsgfiu > 1 && ram == 0){
            cout<<"0\n";
        }
        else{
            cout<<"1\n";
        }
    }
}
int main() {
    solve();
    return 0;
}