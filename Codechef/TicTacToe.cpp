#include<bits/stdc++.h>
#define ll long long
using namespace std;
void boardMaker(char Array[][3], ll & countX, ll & countO, ll & count_){
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 3; j++){
            cin>>Array[i][j];
            if(Array[i][j] == 'X'){ 
                countX++;
            }
            else if(Array[i][j] == 'O') {
                countO++;
            }
            else {
                count_++;
            }
        }
    }
}
void Win_Lose(char Array[][3], ll & FirstX, ll & SecondO){
    for(ll i = 0; i < 3; i++){
        if(Array[i][0] == Array[i][1] && Array[i][2] == Array[i][1]){
            if(Array[i][0] == 'X') {
                FirstX++;
            }
            else if(Array[i][0] == 'O') {
                SecondO++;
            }
        }
    }
    for(ll i = 0; i < 3; i++){
        if(Array[0][i] == Array[1][i] && Array[2][i] == Array[1][i]){
            if(Array[0][i] == 'X') {
                FirstX++;
            }
            else if(Array[0][i]=='O') {
                SecondO++;
            }
        }
    }
    if(Array[0][0] == Array[1][1] && Array[2][2] == Array[1][1]){
        if(Array[1][1] == 'X'){
            FirstX++;
        }
        else if(Array[1][1] == 'O') {
            SecondO++;
        }
    }
    if(Array[0][2] == Array[1][1] && Array[2][0] == Array[1][1]){
        if(Array[1][1] == 'X') {
            FirstX++;
        }
        else if(Array[1][1] == 'O') {
            SecondO++;
        }
    }
}
void answer(char Array[][3], ll countX, ll countO, ll count_, ll FirstX, ll SecondO){
    if(countO > countX) {
        cout<<"3\n";
    }
    else if(countX - countO > 1) {
        cout<<"3\n";
    }
    else if((countX > countO) && FirstX == 1 && SecondO == 0){
        cout<<"1\n";
    }
    else if((countX == countO) && SecondO == 1 && FirstX == 0){
        cout<<"1\n";
    }
    else if(count_ == 0 && (FirstX + SecondO == 0)){
        cout<<"1\n";
    }
    else if(count_ == 0 && FirstX == 2){
        cout<<"1\n";
    }
    else if(count_ > 0 && (FirstX + SecondO == 0)){
        cout<<"2\n";
    }
    else{
        cout<<"3\n";
    }
}
int main(){
    ll t;
    cin>>t;
    for(ll i = 0; i < t; i++){
        char Array[3][3];
        ll countX = 0, countO = 0, FirstX = 0 , SecondO = 0, count_ = 0;
        boardMaker(Array, countX, countO, count_);
        Win_Lose(Array, FirstX, SecondO);
        answer(Array, countX, countO, count_, FirstX, SecondO);
    }
    return 0;
}
// #include<bits/stdc++.h>
// using namespace std;
// // void boardMaker(char arr[][3], string a, string b, string c, int &_count, int &xcount, int &ocount);
// void print(char arr[][3]);
// int checker(char a[][3], int &_count, int &xcount, int &ocount);
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         char arr[3][3];
//         int under = 0, x = 0, o = 0;
//         for(int i = 0; i < 3; i++){
//             for(int j = 0; j < 3; j++){
//                 cin>>arr[i][j];
//                 if(arr[i][j] == '_'){
//                     under++;
//                 }
//                 if(arr[i][j] == 'X'){
//                     x++;
//                 }
//                 if(arr[i][j] == 'O'){
//                     o++;
//                 }
//             }
//         }
//         int val = checker(arr, under, x, o);
//         if((val > 1 && val != 0 && under != 0) || (((x - o) < 1) ||(x - o) > 1)&& (x - o != 0)){
//             cout<<"3\n";
//         }
//         if(((val == 1) || (val == 0 && under == 0) || (val == 2 && under == 0)) && (x - o == 1)){
//             cout<<"1\n";
//         }
//         if((val == 0 && under != 0) && ((x - o == 1) || (x - o) == 0)){
//             cout<<"2\n";
//         }
//     }
//     return 0;
// }
// int checker(char a[][3], int &_count, int &xcount, int &ocount){
//     int val = 0;
//     if((a[0][0] == a[0][1]) && (a[0][0] == a[0][2])){
//         val++;
//     }
//     if((a[1][0] == a[1][1]) && (a[1][0] == a[1][2])){
//         val++;
//     }
//     if((a[2][0] == a[2][1]) && (a[2][0] == a[2][2])){
//         val++;
//     }
//     //---------------ROw-----------------
//     if((a[0][0] == a[1][0]) && (a[0][0] == a[2][0])){
//         val++;
//     }
//     if((a[0][1] == a[1][1]) && (a[0][1] == a[2][1])){
//         val++;
//     }
//     if((a[0][2] == a[1][2]) && (a[0][2] == a[2][2])){
//         val++;
//     }
//     //------------COLUMN------------------
//     if((a[0][0] == a[1][1]) && (a[0][0] == a[2][2])){
//         val++;
//     }
//     if((a[2][0] == a[1][1]) && (a[1][1] == a[0][2])){
//         val++;
//     }
//     print(a);
//     if(val == 1 && xcount == ocount){
//         return 10;
//     }
//     return val;
// }
// void boardMaker(char arr[][3], string a, string b, string c, int &_count, int &xcount, int &ocount){
//     string temp;
//     for(int i = 0; i < 3; i++){
//         if(i == 0){
//             temp = a;
//         }
//         else if(i == 1){
//             temp = b;
//         }
//         else{
//             temp = c;
//         }
//         for(int j = 0; j < 3; j++){
//             if(temp[j] == '_'){
//                 _count++;
//             }
//             if(temp[j] == 'X'){
//                 xcount++;
//             }
//             if(temp[j] == 'O'){
//                 ocount++;
//             }
//             arr[i][j] = temp[j];
//         }
//     }
// }
// void print(char arr[][3]){
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             cout<<arr[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }