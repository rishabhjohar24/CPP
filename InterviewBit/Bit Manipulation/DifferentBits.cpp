#include<bits/stdC++.h>
using namespace std;
//---------TLE--------------------- 
int f(int x, int y){
    int temp, a1[32], b1[32], cmp1, cmp2, count = 0, i = 0;
    while(x > 0){
        temp = x % 2;
        a1[i] = temp;
        x = x / 2;
        i++;
    }
    cmp1 = i;
    for(int j = i; j < 32; j ++){
       a1[j] = 0;
    }   
    i = 0;
    while(y > 0){
        temp = y % 2;
        b1[i] = temp;
        y = y / 2;
        i++;
    }
    cmp2 = i;
    for(int j = i; j < 32; j ++){
       b1[j] = 0;
    }
    cmp1 = max(cmp1, cmp2);
    for(int i = 0; i <cmp1; i++){
        if(a1[i] != b1[i]){
            count++;
        }
    }
    return count;
}
int main(){
    int a[3], v, temp = 0;
    for(int i = 0; i < 3; i++){
        cin>>a[i];
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            v = f(a[i], a[j]);
            temp = temp + v;
        }
    }
    cout<<temp;
    return 0;
}