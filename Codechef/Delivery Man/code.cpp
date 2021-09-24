//WRONG CODES................................................
//TRY AFTER DP...............................................


#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x, y, sum = 0, i, j = 0, flag = 0, tempx, tempy;
    cin>>n>>x>>y;
    tempx = x;
    tempy = y;
    int andy[n], bob[n];
    for(i = 0; i < n; i++){
        cin>>andy[i];
    }
    for(i = 0; i < n; i++){
        cin>>bob[i];
    }
    ((*min_element(andy, andy+n) > *max_element(bob, bob+n))) ? flag = 1 : flag = 0;
    ((*max_element(andy, andy+n) < *min_element(bob, bob+n))) ? flag = 2 : flag = 0;
    vector<pair<int, int>> A, B;
    for(i = 0; i < n; i++){
        A.push_back(make_pair(andy[i], i));
        B.push_back(make_pair(bob[i], i));
    }
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());
    for(i = n - 1; i >= 0; i--){
        if(flag == 1){
            sum = sum + A[i].first;
            if(A[i].second == B[i].second){

            }
            A.pop_back();
            x--;
        }
        else if(flag == 2){
            sum = sum + B[i].first;
            A.pop_back();
            y--;
        }
        else if(flag == 0){
            if(A[i].second != B[i].second){    
                sum = sum + A[i].first + B[i].first;
                A.pop_back();
                B.pop_back();
                x--;
                y--;
                j++;
            }
            else if(A[i].second == B[i].second){
                sum = sum + max(A[i].first , B[i].first);
                (max(A[i].first , B[i].first) == A[i].first) ? x-- : y--;
                A.pop_back();
                B.pop_back();
            }
        }
        if(x == 0 || y == 0){
            break;
        }
    }
    if(flag == 1){
        i = n - 1;
        if(tempx < n){
            j = n - tempx;
            while(j > 0){
                sum = sum + B[i].first;
                j--;
                i--;
            }
        }
    }
    if(flag == 2){
        i = n - 1;
        if(tempy < n){
            j = n - tempy;
            while(j > 0){
                sum = sum + A[i].first;
                j--;
                i--;
            }
        }
    }
    else if(flag == 0){
        i = i - j;
        if(x == 0 && i != 0){
            while(i >= 0){
                sum = sum + B[i].first;
                B.pop_back();
                i--;
            }
        }
        else if(y == 0 && i != 0){
            while( i >= 0){
                sum = sum + A[i].first;
                A.pop_back();
                i--;
            }
        }
    }
    cout<<sum;
    return 0;
}

// cout<<A[i].first<<" "<<B[i].first<<endl;
        // cout<<A[i].second<<" "<<B[i].second<<endl;







// #include<bits/stdc++.h>
// using namespace std;
// int knapsack(int val[], int wt[], int n, int w){
//     int t[n+1][w+1];
//     memset(t, -1, sizeof(t));
//     for(int i = 0; i < n+1; i++){
//         for(int j = 0; j < w + 1; j++){
//             if(i == 0 || j == 0){
//                 t[i][j] = 0;
//             }
//             else if(wt[i-1] <= w){
//                 t[i][j] = max((val[i-1] + t[i-1][j-wt[i - 1]]), t[i-1][j]);
//             }
//             else{
//                 t[i][j] = t[i - 1][j];
//             }
//         }
//     }
//     return t[n][w];
// }
// int main(){
//     int p, n, a, b, x, y, a1, b1;
//     cin>>n>>a>>b;
//     int andy[n], bob[n], maxy[n], wt[n];

//     for(int i = 0; i < n; i++){
//         cin>>andy[i];
//         wt[i] = 1;
//     }
//     for(int i = 0; i < n; i++){
//         cin>>bob[i];
//     }
//     int i = 0;
//     x = a;
//     y = n - a;
//     while(x + y == n){
//         x = a - i;
//         y = n - x;
//         a1 = knapsack(andy, wt, n, x);
//         b1 = knapsack(bob, wt, n, y);
//         cout<<a1 + b1<<" ";
//         maxy[i] = a1 + b1;
//         i++;
//     }
//     for(i = 0; i < n; i++){
//         cout<<maxy[i]<<" ";
//     }
//     cout<< *max_element(maxy , maxy+n);
//     return 0;
// }