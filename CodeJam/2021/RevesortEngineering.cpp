#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;
    cin>>test;
    int k = 1;
    while(test--){
        int n,cost;
        cin>>n>>cost;
        int minimum = n - 1;
        int maximum =((n* (n + 1)) / 2) - 1;
        int arr[n];
        for(int i = 0; i < n; i++){
            arr[i] = i + 1;
        }
        if(cost >= minimum && cost <= maximum){
            if(cost != (n - 1)){
                int temp = n - 1;
                int check = n;
                int left = 1,rigth = 0, point = 0, lfag = 0;
                while(temp){
                    if(left == 1){
                        for(int i = 1;i <= temp; i++){
                            arr[n - i - (point / 2)] = arr[n - i - (point/2) - 1];
                            arr[n - i - (point / 2) -1] = n;
                            if(cost == check){
                                lfag = 1;
                                break;
                            }
                            check++;
                        }
                    }
                    if(rigth == 1){
                        for(int i = 1; i <= temp; i++){
                            arr[i + (point / 2) - 1]=arr[i + (point / 2)];
                            arr[i + (point / 2)] = n;
                            if(cost == check){
                                lfag = 1;
                                break;
                            }
                            check++;
                        }
                    }
                    if(lfag){
                        break;
                    }
                    if(left == 1){
                        arr[n - (point / 2) - 1] = point + 1;
                        int k = n;
                        for(int i = 0; i < temp; i++){
                            arr[(point / 2) + i] = k;
                            k--;
                        }
                    }
                    else{
                        arr[point / 2] = point + 1;
                        int k = n;
                        for(int i = 0;i < temp; i++){
                            arr[n - i - 2 - (point / 2)] = k;
                            k--;
                        }

                    }
                    if(left == 1){
                        left--;
                    }
                    else{
                        left++;
                    }
                    if(rigth == 1){
                        rigth--;
                    }
                    else{
                        rigth++;
                    }
                    temp--;
                    point++;
                }
            }
            cout<<"Case #"<<k<<": ";
            for(int i = 0; i < n; i++){
                cout<<arr[i]<<" ";
            }
        }
        else{
            cout<<"Case #"<<k<<": IMPOSSIBLE";
        }
        k++;
        cout<<endl;
    }
    return 0;
}


// #include<iostream>
// #include<vector>
// #include<climits>
// #include<algorithm>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, cost, limit, loop_len;
//         cin>>n>>cost;
//         vector <int> A, B;
//         for(int i = 0; i < n; i++){
//             A.push_back(i + 1);
//         }
//         B = A;
//         limit = ((n * (n + 1)) / 2) - 1;
//         loop_len = limit - n;
//         if(cost < n - 1 || cost > limit){
//             cout<<"Case #"<<i + 1<<": IMPOSSIBLE"<<endl;
//         }
//         else{
//             int temp, left = 0, right = n, j = n - 1, flag = 0;
//             for(int i = 0; i < loop_len; i++){

                
//                 int lcost = 0, p = B.size();
//                 for(int m = 0; m < n - 1; m++){
//                     int minimum = INT_MAX, index;
//                     for(int k = m; k < p; k++){
//                         if(B[k] < minimum){
//                             minimum = B[k];
//                             index = k;
//                         }
//                     }
//                     lcost = lcost + index - m + 1;
//                     reverse(B.begin() + m, B.begin() + index + 1);
//                 }
//                 if(lcost == cost){
//                     break;
//                 }

//                 if(j == left && flag == 0){
//                     reverse(A.begin() + left + 1, A.begin() + right);
//                     right--;
//                     flag = 1;
//                 }
//                 if(flag == 0){
//                     temp = A[j];
//                     A[j] = A[j - 1];
//                     A[j - 1] = temp;
//                     j--;
//                 }
//                 if(j == right - 1 && flag == 1){
//                     reverse(A.begin() + left, A.begin() + right - 1);
//                     left++;
//                     flag = 0;
//                 }
//                 if(flag == 1){
//                     temp = A[j];
//                     A[j] = A[j + 1];
//                     A[j + 1] = temp;
//                     j++;
//                 }
//                 B = A;
//             }
//             cout<<"Case #"<< i+ 1<<": ";
//             for(int i = 0; i < n; i++){
//                 cout<<B[i]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, cost, flag = 0, test_case = 1;
//         cin>>n>>cost;
//         vector <int> A, B;
//         B.push_back(n - 1);
//         for(int i = 0; i < n; i++){
//             A.push_back(i + 1);
//         }
//         for(int i = 0; i < n - 1; i++){
//             B.push_back(n - i - 1);
//         }
//         int tcost = cost, limit = ((n * (n + 1)) / 2) - 1, counter = -1;
//         if(cost < n - 1 || cost > limit){
//             cout<<"Case #"<<test_case<<": IMPOSSIBLE"<<endl;
//         }
//         else if(cost == n - 1){
//             cout<<"Case #"<<test_case<<": ";
//             for(int i = 0; i < n; i++){
//                 cout<<A[i]<<" ";
//             }
//             cout<<endl;
//             flag == 1;
//         }
//         else{
//             for(int i = 0; i < n; i++){
//                 tcost = tcost - B[i];
//                 if(tcost > 0){
//                     cost = tcost;
//                     counter++;
//                 }
//                 else if(tcost == 0){
//                     flag = 2;
//                     break;
//                 }
//                 else if(tcost < 0){
//                     break;
//                 }
//             }
//             if(flag == 0){
//                 int lflag = 0, li = 0, lj = 0, tcounter = counter; 
//                 //lfag = local flag, li = local i,
//                 //lj = local j
//                 while(tcounter > 0){
//                     if(lflag == 0){
//                         reverse(A.begin() + li, A.begin() + n - lj);
//                         lflag = 1;
//                         lj++;
//                     }
//                     else if(lflag == 1){
//                         reverse(A.begin() + li, A.begin() + n - lj);
//                         lflag = 0;
//                         li++;
//                     }
//                     tcounter--;
//                 }
//                 if(counter % 2 == 0){
//                     int temp, i = li + 1;
//                     while(flag == 0 && cost > 0 && i < n - lj - 1){
//                         temp = A[i];
//                         A[i] = A[i + 1];
//                         A[i + 1] = temp;
//                         i++;   
//                         cost--;
//                     }
//                 }
//                 else if(counter % 2 != 0){
//                     int temp, i = n - lj - 1;
//                     while(flag == 0 && cost > 0 && i > li + 1){
//                         temp = A[i];
//                         A[i] = A[i - 1];
//                         A[i - 1] = temp;
//                         cost--;
//                         i--;
//                     }
//                 }
//                 if(flag == 0){
//                     cout<<"Case #"<<test_case<<": ";
//                     for(int i = 0; i < n; i++){
//                         cout<<A[i]<<" ";
//                     }
//                     cout<<endl;
//                 }
//             }
//             else if(flag == 2){
//                 int lflag = 0, li = 0, lj = 0; 
//                 //lfag = local flag, li = local i,
//                 //lj = local j
//                 while(counter >= 0){
//                     if(lflag == 0){
//                         reverse(A.begin() + li, A.begin() + n - lj);
//                         lflag = 1;
//                         lj++;
//                     }
//                     else if(lflag == 1){
//                         reverse(A.begin() + li, A.begin() + n - lj);
//                         lflag = 0;
//                         li++;
//                     }
//                     counter--;
//                 }
//                 cout<<"Case #"<<test_case<<": ";
//                 for(int i = 0; i < n; i++){
//                     cout<<A[i]<<" ";
//                 }
//                 cout<<endl;
//             }
//         }
//         test_case++;
//     }
//     return 0;
// }

// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n, cost, flag = 0, ;
//         cin>>n>>cost;
//         vector <int> A;
//         for(int i = 0; i < n; i++){
//             A.push_back(i + 1);
//         }
//         int val = (n * (n + 1)) / 2, rec = n - 1, len =  n - 1;
//         if(cost < n - 1 || cost > val){
//             flag = 1;
//         }
//         if(flag == 1){
//             cout<<"Case #"<<i + 1<<": IMPOSSIBLE"<<endl;
//         }
//         else{
//             int lflag = 0;
//             while(rec != cost){
//                 for(int i = 0; i < n - 1; i++){
//                     for(int j = rec - i; j >= 0; j--){
//                         int temp = A[j + 1];
//                         A[j + 1] = A[j];
//                         A[j] = temp;
//                     }
//                     if(lflag == 0){
//                         int temp = A[i + 1];
//                         reverse()
//                     }
//                 }
//                 len--;
//             }
//             cout<<"Case #"<<i + 1<<": ";
//             for(int i = 0; i < n; i++){
//                 cout<<A[i]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//     return 0;
// }