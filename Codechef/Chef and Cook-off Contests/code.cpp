#include<iostream>
#include<string>
#include <vector> 
#include <algorithm> 
using namespace std;
int main() {
    int t;
    vector <string> v,b;
    cin>>t;
    string temp, a[7] = {"cakewalk", "easy", "easy-medium", "medium", "medium-hard", "hard", "simple"};
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        for(int j=0; j<n; j++){
            cin>>temp;
            v.push_back(temp);
        }
        sort(v.begin(), v.end()); 
        vector <string>::iterator ip;
        ip = ::unique(v.begin(), v.begin() + n);
        v.resize(::distance(v.begin(), ip));
        if(v.size() < 5)
        {
            b.push_back("NO");
        }
        else if(v.size() == 5)
        {
            if(v.at(0) == a[0])
            {
                if(v.at(1) == a[1])
                {
                    if(v.at(2) == a[2] || v.at(2) == a[3])
                    {
                        if(v.at(3) == a[4] || v.at(3) == a[5])
                        {
                            if(v.at(4) == a[6])
                            {
                                b.push_back("YES");
                            } else {
                                b.push_back("NO");
                            }
                        } else {
                            b.push_back("NO");
                        }
                    } else {
                        b.push_back("NO");
                    }
                } else {
                    b.push_back("NO");
                }
            } else {
                b.push_back("NO");
            }
        }
        else if(v.size()>5)
        {
            b.push_back("YES");
        }
    }
    for(int j=0; j<b.size(); j++){
        cout<<b.at(j)<<"\n";
    }
    return 0;
}

// #include<iostream>
// #include<string>
// #include <vector> 
// #include <algorithm> 
// using namespace std;
// int main() {
//     int t;
//     cin>>t;
//     string temp, a[7] = {"cakewalk", "easy", "easy-medium", "medium", "medium-hard", "hard", "simple"};
//     for(int i=0; i<t; i++){
//         int n;
//         cin>>n;
//         vector <string> v;
//         for(int j=0; j<n; j++){
//             cin>>temp;
//             v.push_back(temp);
//         }
//         sort(v.begin(), v.end()); 
//         vector <string>::iterator ip;
//         ip = ::unique(v.begin(), v.begin() + n);
//         v.resize(::distance(v.begin(), ip));
//         if(v.size() < 5)
//         {
//             cout<<"NO";
//         }
//         else if(v.size() == 5)
//         {
//             if(v.at(0) == a[0])
//             {
//                 if(v.at(1) == a[1])
//                 {
//                     if(v.at(2) == a[2] || v.at(2) == a[3])
//                     {
//                         if(v.at(3) == a[4] || v.at(3) == a[5])
//                         {
//                             if(v.at(4) == a[6])
//                             {
//                                 cout<<"YES";
//                             } else {
//                                 cout<<"NO";
//                             }
//                         } else {
//                             cout<<"NO";
//                         }
//                     } else {
//                         cout<<"NO";
//                     }
//                 } else {
//                     cout<<"NO";
//                 }
//             } else {
//                 cout<<"NO";
//             }
//         }
//         else if(v.size()>5)
//         {
//             cout<<"YES";
//         }
//     }
//     return 0;
// }