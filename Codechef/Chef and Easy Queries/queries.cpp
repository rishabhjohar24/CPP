#include<iostream>
using namespace std;
int main() {
    int t,n,k;
    //Number Of test cases
    cin>>t; 
    for(int i=0; i<t; i++){
        //n=
        cin>>n>>k;
        int q[n],temp=0,temp1; 
        for(int j=0; j<n; j++){
            cin>>q[j];
            temp = temp + q[j];
        };
        temp1 = temp/k;
        int e ;
        e = temp%k;
        if(e == 0){
            temp1=temp1;
        } else {
            temp1 = temp1+1;
        }
        int b[temp1+1]={0};
        for(int j=0; j<n; j++){
            b[j]=q[j];
        }
        for( int j=0; j<temp1+1; j++){
            temp=0;
            if(b[j]-k<0){
                cout<<j+1;
                break;
            }
            else if(b[j]-k>=0) {
                temp=b[j]-k;
                b[j+1]=b[j+1]+temp;
            }
        };
    };
    return 0;
}