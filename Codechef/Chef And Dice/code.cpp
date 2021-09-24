#include<iostream>
using namespace std;
long max_pips_visible(long n, long array[]){
    long answer;
    if(n <= 4){
        answer = array[n];
    } 
    else if(n > 4 && (n % 4) != 0){
        answer = 44 * (n / 4) + 16 + array[n % 4] - 4 * (n % 4);
    }
    else if(n % 4 == 0){
        answer = 44 * (n / 4) + 16;
    }
    return answer;
}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        long n;
        cin>>n;
        long a[5] = {0, 20, 36, 51, 60};
        cout<<max_pips_visible(n, a)<<endl;
    }
    return 0;
}