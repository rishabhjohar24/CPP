#include<bits/stdc++.h>
using namespace std;
void mapping(int arr[], string m);
void number(int num[], int n);
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, s;
        string m;
        cin>>n>>s>>m;
        int arr[10], num[10];
        mapping(arr, m);
        int count = 0, flag = 1, lflag = 1;
        while(flag && lflag){
            lflag = 0;
            int demo = n;
            while(demo){
                lflag = 1;
                int residue = demo % 10;
                if(residue == 2 || residue == 5){
                    if(arr[2] > 0 && residue == 2){
                        arr[2]--;
                    }
                    else if (arr[2] == 0 && residue == 2){
                        if(arr[5] > 0){
                            arr[5]--;
                        }
                        else{
                            flag = 0;
                            break;
                        }
                    }
                    if(arr[5] > 0 && residue == 5){
                        arr[5]--;
                    }
                    else if (arr[5] == 0 && residue == 5){
                        if(arr[2] > 0){
                            arr[2]--;
                        }
                        else{
                            flag = 0;
                            break;
                        }
                    }
                }
                if(residue == 6 || residue == 9){
                    if(arr[6] > 0 && residue == 6){
                        arr[6]--;
                    }
                    else if (arr[6] == 0 && residue == 6){
                        if(arr[9] > 0){
                            arr[9]--;
                        }
                        else{
                            flag = 0;
                            break;
                        }
                    }
                    if(arr[9] > 0 && residue == 9){
                        arr[9]--;
                    }
                    else if (arr[9] == 0 && residue == 9){
                        if(arr[6] > 0){
                            arr[6]--;
                        }
                        else{
                            flag = 0;
                            break;
                        }
                    }
                }
                else{
                    if(arr[residue] <= 0){
                        flag = 0;
                    }
                    arr[residue]--;
                }
                demo /= 10;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;    
}
void mapping(int arr[], string m){
    for(int i = 0; i < 10; i++){
        arr[i] = 0;
    }
    for(int i = 0; i < m.size(); i++){
        arr[m[i] - '0']++;
    }
}
// if(m[i] == '2' || m[i] == '5'){
        //     arr[2]++;
        //     arr[5]++;
        // }
        // if(m[i] == '6' || m[i] == '9'){
        //     arr[6]++;
        //     arr[9]++;
        // }
        // else{
        //     arr[m[i] - '0']++;
        // }

        // for(int i = 0; i < 9; i++){
        //     if(!num[i]){
        //         continue;
        //     }
        //     else if(i != 2 || i != 6 || i != 9 || i != 5){
        //         lmax = arr[i] / num[i];
        //     }
        //     else{
        //         if(i == 2 || i == 5){
        //             lmax = arr[i] / num[i];
        //             arr[2] -= lmax;
        //             arr[5] -= lmax;
        //         }
        //         else if(i == 6 || i == 9){
        //             arr[6] -= lmax;
        //             arr[9] -= lmax;
        //         }
        //     }
        //     gmax = min(lmax, gmax);
        // }