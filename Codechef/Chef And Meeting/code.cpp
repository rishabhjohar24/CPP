#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        string z, y, x, w, u, v; 
        string s, time, temp, temp1, temp2;
        cin>>z>>y;
        time = z + y;
        cin>>n;
        string a[24] = {"12AM","01AM","02AM","03AM","04AM","05AM","06AM","07AM","08AM","09AM","10AM","11AM","12PM","01PM","02PM","03PM","04PM","05PM","06PM","07PM","08PM","09PM","10PM","11PM"};
        string b[24] = {"00","01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23"};
        string arr[n];
        for(int  i = 0; i < n; i++){
            cin>>x>>w>>u>>v;
            arr[i] = x + w + u + v;
        }
        s = time.substr(0, 2) + time.substr(5, 2);
        for(int i = 0; i < 24; i++){
            if(s == a[i]){
                s = b[i];
            }
        }
        s = s + time.substr(3, 2);
        for(int i = 0; i < n; i++){
            temp = arr[i];
            temp1 = temp.substr(0, 2) + temp.substr(5, 2);
            for(int i = 0; i < 24; i++){
                if(temp1 == a[i]){
                temp1 = b[i];
                }
            }    
            temp1 = temp1 + temp.substr(3, 2);
            temp2 = temp.substr(7, 2) + temp.substr(12, 2);
            for(int i = 0; i < 24; i++){
                if(temp2 == a[i]){
                temp2 = b[i];
                }
            }    
            temp2 = temp2 + temp.substr(10, 2);
            if(s >= temp1 && s <= temp2){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
        cout<<endl;
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
//         string s, time, temp, temp1, temp2;
//         char c[7], p[14];
//         for(int i = 0; i < 7; i++){
//             cin>>c[i];
//             time = time + c[i];
//         }
//         cin>>n;
//         string a[24] = {"12AM","01AM","02AM","03AM","04AM","05AM","06AM","07AM","08AM","09AM","10AM","11AM","12PM","01PM","02PM","03PM","04PM","05PM","06PM","07PM","08PM","09PM","10PM","11PM"};
//         string b[24] = {"00","01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23"};
//         string arr[n];
//         for(int  i = 0; i < n; i++){
//             for(int i = 0; i < 14; i++){
//                 cin>>p[i];
//                 s = s + p[i];
//             }
//         }
//         s = time.substr(0, 2) + time.substr(5, 2);
//         for(int i = 0; i < 24; i++){
//             if(s == a[i]){
//                 s = b[i];
//             }
//         }
//         s = s + time.substr(3, 2);
//         for(int i = 0; i < n; i++){
//             temp = arr[i];
//             temp1 = temp.substr(0, 2) + temp.substr(5, 2);
//             for(int i = 0; i < 24; i++){
//                 if(temp1 == a[i]){
//                 temp1 = b[i];
//                 }
//             }    
//             temp1 = temp1 + temp.substr(3, 2);
//             temp2 = temp.substr(7, 2) + temp.substr(12, 2);
//             for(int i = 0; i < 24; i++){
//                 if(temp2 == a[i]){
//                 temp2 = b[i];
//                 }
//             }    
//             temp2 = temp2 + temp.substr(10, 2);
//             if(s >= temp1 && s <= temp2){
//                 cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
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
//         string s, time, temp, temp1, temp2;
//         cin>>time;
//         cin>>n;
//         string a[24] = {"12AM","01AM","02AM","03AM","04AM","05AM","06AM","07AM","08AM","09AM","10AM","11AM","12PM","01PM","02PM","03PM","04PM","05PM","06PM","07PM","08PM","09PM","10PM","11PM"};
//         string b[24] = {"00","01","02","03","04","05","06","07","08","09","10","11","12","13","14","15","16","17","18","19","20","21","22","23"};
//         string arr[n];
//         for(int  i = 0; i < n; i++){
//             cin>>arr[i];
//         }
//         s = time.substr(0, 2) + time.substr(5, 2);
//         for(int i = 0; i < 24; i++){
//             if(s == a[i]){
//                 s = b[i];
//             }
//         }
//         s = s + time.substr(3, 2);
//         for(int i = 0; i < n; i++){
//             temp = arr[i];
//             temp1 = temp.substr(0, 2) + temp.substr(5, 2);
//             for(int i = 0; i < 24; i++){
//                 if(temp1 == a[i]){
//                 temp1 = b[i];
//                 }
//             }    
//             temp1 = temp1 + temp.substr(3, 2);
//             temp2 = temp.substr(7, 2) + temp.substr(12, 2);
//             for(int i = 0; i < 24; i++){
//                 if(temp2 == a[i]){
//                 temp2 = b[i];
//                 }
//             }    
//             temp2 = temp2 + temp.substr(10, 2);
//             if(s >= temp1 && s <= temp2){
//                 cout<<"1";
//             }
//             else{
//                 cout<<"0";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// vector <pair<string, string> > g;
        // for(int i = 0; i < 24; i++){
        //     g.push_back(make_pair(a[i], b[i]));
        // }