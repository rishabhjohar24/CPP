#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        int y[n];
        for(int i = 0;i < n; i++){
            cin>>y[i];
        }
        double m, c, x1, x2, y1, y2, temp = INT_MIN, dist = 1, kt, gmax = 1;
        int k;
        for(int i = n - 1; i > 0; i--){
            x2 = i + 1; 
            y2 = y[i];
            x1 = 1;
            y1 = y[0];
            m = (y2 - y1) / (x2 - x1);
            c = ((x1 * y2) - (x2 * y1)) / (x2 - x1);
            k = 2;
            kt = 2;
            while(kt < x2){
                double x = y[k - 1] - (m * kt) + (c);
                if(x < 0 || x == 0){
                    temp = x2 - x1;
                }
                else{
                    dist = 1;
                    temp = INT_MIN;
                    x1 = k;
                    y1 = y[k - 1];
                    m = (y2 - y1) / (x2 - x1);
                    c = ((x1 * y2) - (x2 * y1)) / (x2 - x1);
                }
                k++;
                kt++;
                dist = max(dist, temp);
            }
            gmax = max(gmax, dist);
            dist = 1;
            temp = INT_MIN;
        }
        cout<<gmax<<endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n;
//         cin>>n;
//         int y[n];
//         for(int i = 0;i < n; i++){
//             cin>>y[i];
//         }
//         float m, c, x1, x2, y1, y2, temp = INT_MIN, dist = 1, kt, gmax = 1;
//         int k;
//         for(int i = n - 1; i > 0; i--){
//             x2 = i + 1; 
//             y2 = y[i];
//             for(int j = 0; j < i; j++){
//                 x1 = j + 1;
//                 y1 = y[j];
//                 m = (y2 - y1) / (x2 - x1);
//                 c = ((x1 * y2) - (x2 * y1)) / (x2 - x1);
//                 k = j + 2;
//                 kt = j + 2;
//                 while(kt < x2){
//                     if((y[k - 1] - (m * kt) + (c)) <= 0){
//                         temp = x2 - x1;
//                     }
//                     else{
//                         dist = 1;
//                         temp = INT_MIN;
//                         j = k;
//                         break;
//                     }
//                     k++;
//                     kt++;
//                     cout<<dist<<" @ "<<endl;
//                 }
//                 cout<<dist<<" A "<<endl;
//                 dist = max(dist, temp);
//                 cout<<dist<<" B "<<endl;
//             }
//             cout<<gmax<<" C "<<endl;
//             gmax = max(gmax, dist);
//             cout<<gmax<<" D "<<endl<<endl;
//         }
//         cout<<gmax<<endl;
//     }
//     return 0;
// }












// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         stack <pair<float, float>> s;
//         vector <pair<float, float>> v;
//         int n;
//         cin>>n;
//         float arr[n];
//         for(int i = 0; i < n; i++){
//             cin>>arr[i];
//         }
//         for(int i = 0; i < n; i++){
//             if(s.size() == 0){
//                 v.push_back(make_pair(arr[0], 1));
//             }
//             else if(s.size() > 0 && s.top().first > arr[i]){
//                 v.push_back(make_pair(s.top().first, s.top().second));
//             }
//             else if(s.size() > 0 && s.top().first <= arr[i]){
//                 while(s.size() > 0 && s.top().first <= arr[i]){
//                     s.pop();
//                 }
//                 if(s.size() == 0){
//                     v.push_back(make_pair(arr[0], 1));
//                 }
//                 else{
//                     v.push_back(make_pair(s.top().first, s.top().second));
//                 }
//             }
//             s.push({arr[i], i + 1});
//         }
//         // for(int i = 0 ; i < v.size(); i++){
//         //     cout<<v[i].first<<" "<<v[i].second<<endl;
//         // }
//         // for(int i = 0; i < n; i++){
//         //     cout<<arr[i]<<" "<<i + 1<<endl;
//         // }
//         float m, c, dist = 1, temp = INT_MIN, gmax = 1;
//         int k, x1, x2, y1, y2;
//         for(int i = v.size() - 1; i > 0; i--){
//             y1 = arr[i];
//             x1 = i + 1;
//             for(int j = i; j >= 0; j--){
//                 y2 = v[j].first;
//                 x2 = v[j].second, m, c;
//                 m = (y2 - y1) / (x2 - x1);
//                 c = (x1 * y2 - x2 * y1) / (x2 - x1);
//                 int k = i;
//                 while((k > x2) && (abs(x2- x1) > 1)){
//                     if((arr[k] - (m * k) + c) < 0){
//                         dist = abs(x2 - x1);
//                         temp = x1 - k;
//                         dist = max(dist, temp);
//                     }
//                     k--;
//                 } 
//             }
//         }
//         cout<<dist<<endl;
//     }
//     return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 0; i < t; i++){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i = 0; i < n; i++){
//             cin>>arr[i];
//         }
//         vector <int> v;
//         int max_ele = *max_element(arr, arr + n), min_ele = *min_element(arr, arr + n);
//         for(int i = 0; i < n; i++){
//             if(arr[i] == max_ele){
//                 v.push_back(i + 1);
//             }
//         }
//         int indexr = n - 1, indexl = v[v.size() - 1], p;
//         double x1, x2, y1, y2, c, m, temp = INT_MIN, gmax = 1, lmax = 1, k;
//         if(min_ele == max_ele){
//             gmax = n - 1;
//         }
//         else if(v.size() > 1){
//             for(int j = v.size() - 1; j > 0; j--){
//                 for(int i = indexr; i > indexl; i--){
//                     x2 = i + 1;
//                     y2 = arr[i];
//                     x1 = indexl;
//                     y1 = arr[indexl - 1];
//                     m = (y2 - y1) / (x2 - x1);
//                     c = ((x1 * y2) - (x2 * y1)) / (x2 - x1);
//                     k = indexl + 1;
//                     p = indexl + 1;
//                     while(k < x2){
//                         double x = arr[p - 1] - m * k + (c);
//                         if(x <= 0){
//                             temp = x2 - x1;
//                         }
//                         else{
//                             lmax = 1;
//                             temp = INT_MIN;
//                             x1 = k;
//                             y1 = arr[p - 1];
//                             m = (y2 - y1) / (x2 - x1);
//                             c = ((x1 * y2) - (x2 * y1)) / (x2 - x1);
//                         }
//                         k++;
//                         lmax = max(lmax, temp);
//                     }
//                     gmax = max(gmax, lmax);
//                     lmax = 1;
//                     temp = INT_MIN;
//                 }
//                 if(j == 1){
//                     indexr = indexl;
//                     indexl = 0;
//                 }
//                 else{
//                     indexr = indexl;
//                     indexl = v[j - 1];
//                 }
//             }
//         }    
//         else if(v.size() == 1){
//             for(int i = n - 1; i > 0; i--){
//                 x2 = i + 1; 
//                 y2 = arr[i];
//                 x1 = 1;
//                 y1 = arr[0];
//                 m = (y2 - y1) / (x2 - x1);
//                 c = ((x1 * y2) - (x2 * y1)) / (x2 - x1);
//                 k = 2;
//                 p = 2;
//                 while(p < x2){
//                     double x = arr[p - 1] - (m * k) + (c);
//                     if(x < 0 || x == 0){
//                         temp = x2 - x1;
//                     }
//                     else{
//                         lmax = 1;
//                         temp = INT_MIN;
//                         x1 = k;
//                         y1 = arr[p - 1];
//                         m = (y2 - y1) / (x2 - x1);
//                         c = ((x1 * y2) - (x2 * y1)) / (x2 - x1);
//                     }
//                     k++;
//                     p++;
//                     lmax = max(lmax, temp);
//                 }
//                 gmax = max(gmax, lmax);
//                 lmax = 1;
//                 temp = INT_MIN;
//             }
//         }
//         cout<<gmax<<endl;
//     }
//     return 0;
// }