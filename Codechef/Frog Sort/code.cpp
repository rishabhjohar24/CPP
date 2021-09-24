#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int x, int n){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == x){
            break;
        }
    }
    return i;
}
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n, count = 0, temp, t;
        cin>>n;
        int w[n], l[n], a[n], b[n], index[n];
        for(int i = 0; i < n; i++){
            cin>>w[i];
            a[i] = w[i];
        }
        for(int i = 0; i < n; i++){
            cin>>l[i];
        }
        sort(a, a + n);
        for(int i = 0; i < n; i++){
            t = find(w, a[i], n);
            index[i] = t;
            b[i] = l[t];
        }
        temp = index[0];
        for(int i = 0; i < n - 1; i++){
            if(index[i] >= index[i + 1]){
                while(temp >= index[i + 1]){
                    index[i + 1] = index[i + 1] + b[i + 1];
                    count++;
                }
            }
            temp =  index[i + 1];
        }
        cout<<count<<endl;
    }
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long int t;
//     cin>>t;
//     for(long int i = 0; i < t; i++){
//         int n, count = 0, temp;
//         cin>>n;
//         int w[n], l[n];
//         for(int i = 0; i < n; i++){
//             cin>>w[i];
//         }
//         for(int i = 0; i < n; i++){
//             cin>>l[i];
//         }
//         vector <pair <int, int> > v, o;
//         for(int i = 0; i < n; i++){
//             o.push_back(make_pair(w[i], l[i]));
//             v.push_back(make_pair(w[i], i));
//         }
//         sort(o.begin(), o.end());
//         sort(v.begin(), v.end());
//         temp = v[0].second;
//         for(int i = 0; i < n - 1; i++){
//             if(v[i].second > v[i + 1].second){
//                 while(temp >= v[i + 1].second){
//                     v[i + 1].second = v[i + 1].second + o[i + 1].second;
//                     count++;
//                 }     
//             }
//              temp =  v[i + 1].second;
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }






// #include<bits/stdc++.h>
// using namespace std;
// int n, temp, t;
// vector <pair <int, int> > v, o;
// int main(){
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int count = 0;
//         cin>>n;
//         int w[n], l[n];
//         for(int i = 0; i < n; i++){
//             cin>>w[i];
//         }
//         for(int i = 0; i < n; i++){
//             cin>>l[i];
//         }
//         for(int i = 0; i < n; i++){
//             o.push_back(make_pair(w[i], l[i]));
//             v.push_back(make_pair(w[i], i));
//         }
//         sort(o.begin(), o.end());
//         sort(v.begin(), v.end());
//         temp = v[0].second;
//         for(int i = 0; i < n - 1; i++){
//             if(v[i].second > v[i + 1].second){
//                 while(temp >= v[i + 1].second){
//                     v[i + 1].second = v[i + 1].second + o[i + 1].second;
//                     count++;
//                 }
//                 temp =  v[i + 1].second;     
//             }
//             else{
//                 temp =  v[i + 1].second;
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     long int t;
//     cin>>t;
//     for(long int i = 0; i < t; i++){
//         int n, count = 0, temp;
//         cin>>n;
//         temp = n - 1;
//         int w[n], l[n];
//         for(int i = 0; i < n; i++){
//             cin>>w[i];
//         }
//         for(int i = 0; i < n; i++){
//             cin>>l[i];
//         }
//         vector <pair <int, int> > v, o;
//         for(int i = 0; i < n; i++){
//             o.push_back(make_pair(w[i], l[i]));
//             v.push_back(make_pair(w[i], i));
//         }
//         sort(o.begin(), o.end());
//         sort(v.begin(), v.end());
//         for(int i = 0; i < n - 1; i++){
//             if(v[i].second > v[i + 1].second){
//                 while(temp >= v[i + 1].second){
//                     v[i + 1].second = v[i + 1].second + o[i + 1].second;
//                     count++;
//                 }
//                 temp =  v[i + 1].second;     
//             }
//         }
//         cout<<count<<endl;
//     }
//     return 0;
// }

// for(int i = 0; i < n; i++){
        //     cout<<w[i]<<" ";
        // }
        // cout<<endl;
        // for(int i = 0; i < n; i++){
        //     cout<<l[i]<<" ";
        // }
        // cout<<endl;

// For Printinf vector
// for(int i = 0; i < n; i++){
//             cout<<v[i].first<<" "<<v[i].second<<endl;
//         }


//logic hold upto 3 variable only else fails
// for(int i = 0; i < n - 1; i++){
        //     if(w[i] > w[i + 1]){
        //         while(temp >= v[i].second){
        //             v[i].second = v[i].second + l[i];
        //             count++;
        //             // cout<<"!";
        //         }
        //         temp =  v[i].second;
        //     }
        // }
        // for(int i = 0; i < n; i++){
        //     cout<<v[i].second<<"  ";
        // }