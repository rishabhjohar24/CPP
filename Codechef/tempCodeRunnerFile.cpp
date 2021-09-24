#include<bits/stdc++.h>
using namespace std;
void boardMaker(char arr[][3], string a, string b, string c, int &_count, int &xcount, int &ocount);
void print(char arr[][3]);
int checker(char a[][3], int &_count, int &xcount, int &ocount);
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        string a, b, c;
        cin>>a>>b>>c;
        char arr[3][3];
        int under = 0, x = 0, o = 0;
        boardMaker(arr, a, b, c, under, x, o);
        int val = checker(arr, under, x, o);
        if((val > 1 && val != 0 && under != 0) || ((x - o) < 1) && (x - o != 0)){
            cout<<"3\n";
        }
        if(((val == 1) || (val == 0 && under == 0) || (val == 2 && under == 0)) && (x - o == 1)){
            cout<<"1\n";
        }
        if((val == 0 && under != 0) && ((x - o == 1) || (x - o) == 0)){
            cout<<"2\n";
        }
    }
    return 0;
}
int checker(char a[][3], int &_count, int &xcount, int &ocount){
    int val = 0;
    if((a[0][0] == a[0][1]) && (a[0][0] == a[0][2])){
        val++;
    }
    if((a[1][0] == a[1][1]) && (a[1][0] == a[1][2])){
        val++;
    }
    if((a[2][0] == a[2][1]) && (a[2][0] == a[2][2])){
        val++;
    }
    //---------------ROw-----------------
    if((a[0][0] == a[1][0]) && (a[0][0] == a[2][0])){
        val++;
    }
    if((a[0][1] == a[1][1]) && (a[0][1] == a[2][1])){
        val++;
    }
    if((a[0][2] == a[1][2]) && (a[0][2] == a[2][2])){
        val++;
    }
    //------------COLUMN------------------
    if((a[0][0] == a[1][1]) && (a[0][0] == a[2][2])){
        val++;
    }
    if((a[2][0] == a[1][1]) && (a[1][1] == a[0][2])){
        val++;
    }
    if(val == 1 && xcount == ocount){
        return 10;
    }
    return val;
}
void boardMaker(char arr[][3], string a, string b, string c, int &_count, int &xcount, int &ocount){
    string temp;
    for(int i = 0; i < 3; i++){
        if(i == 0){
            temp = a;
        }
        else if(i == 1){
            temp = b;
        }
        else{
            temp = c;
        }
        for(int j = 0; j < 3; j++){
            if(temp[j] == '_'){
                _count++;
            }
            if(temp[j] == 'X'){
                xcount++;
            }
            if(temp[j] == 'O'){
                ocount++;
            }
            arr[i][j] = temp[j];
        }
    }
}