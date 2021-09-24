#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long n, x, space, rating;
        cin>>n>>x;
        long ratingtemp = INT_MIN;
        for(int i = 0; i < n; i++){
            cin>>space>>rating;
            if(space <= x){
                if(rating > ratingtemp){
                    ratingtemp = rating;
                }
            }
        }
        cout<<ratingtemp<<endl;
    }
}