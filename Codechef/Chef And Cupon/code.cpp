#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int delivery, coupon;
        cin>>delivery>>coupon;
        int a1, a2, a3, b1, b2, b3;
        cin>>a1>>a2>>a3>>b1>>b2>>b3;
        int day_1, day_2;
        day_1 = a1 + a2 + a3;
        day_2 = b1 + b2 + b3;
        if(day_1 >= 150 && day_2 >= 150 && 2*delivery > coupon){
            cout<<"YES"<<endl;
        }
        else if(((day_1 < 150 && day_2 >= 150) || (day_1 >= 150 && day_2 < 150)) && 2*delivery > coupon){
            if(day_1 + day_2 + delivery <= day_1 + day_2 + coupon){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}