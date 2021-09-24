#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int s, min = 0;
        cin>>s;
        int introSong[s];
        for(int i = 0; i < s; i++){
            cin>>introSong[i];
        }
        for(int k = 0; k < s; k++){
            int e, x;
            cin>>e;
            for(int i = 0; i < e; i++){
                if(i == 0){
                    cin>>x;
                    min = min + x;
                }
                else{
                    min = min + x - introSong[k];
                }
            }
            // int episode[e];
            // for(int i = 0; i < e; i++){
            //     cin>>episode[i];
            // }
            // for(int i = 0; i < e; i++){
            //     if( i != 0){
            //         min = min + episode[i] - introSong[k];
            //     }
            //     else{
            //         min = min + episode[i];
            //     }
            // }
            // delete[] episode;
        }
        cout<<min<<endl;
    }
    return 0;
}