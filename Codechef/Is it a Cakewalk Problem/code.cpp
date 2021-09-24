#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    int t,a[10][10];
    vector <int> b;
    cin>>t;
    for(int i=0; i<t; i++){
        for(int j=0; j<10;j++){
            for(int k=0; k<10; k++){
                cin>>a[j][k];
            }
        }
        for(int j=0; j<10;j++){
            for(int k=0; k<10; k++){
                if(a[j][k] <= 30){
                    b.push_back(a[j][k]);
                }
            }
        }
        if(b.size() >= 60){
            cout<<"yes"<<endl;
        } else {
            cout<<"no"<<endl;
        }
    }
    return 0;
}

// Residue
 // for(int j=0; j<10;j++){
        //     for(int k=0; k<10; k++){
        //         cin>>temp;
        //         b.push_back(temp);
        //     }
        //     a.push_back(b);
        //     cout<<endl;
        // }

        // for(int j=0; j<10;j++){
        //     for(int k=0; k<10; k++){
        //         cout<<a[j][k];
        //     }
        //     cout<<endl;
        // }