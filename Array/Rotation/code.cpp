
    // //METHOD 3 (A Juggling Algorithm)
    // #include<iostream>
    // using namespace std;
    // int gcd(int a, int b){
    //     //a = number of elements , b  = number of rotations
    //     if (b == 0){
    //         return  a;
    //     } else {
    //         return gcd (b, a%b);
    //     }
    // }
    // // int main(){
    // //     int n,d;
    // //     cin>>n>>d;
    // //     cout<<gcd(n,d);
    // //     return 0;
    // // }
    // int  rotate (int arr[], int d, int n){
    //     int j,k,m,p,q;
    //     d = d%n;
    //     q = gcd(n, d);
    //     m = n/q;
    //     for(int i=0; i<q; i++){
    //         int temp = arr[i];
    //         for(j=0; j<m-1; j++){
    //             k = d*(j+1);
    //             p = d*j;
    //             arr[i+p] = arr[i+k];
    //         }
    //         arr[i+k] = temp;
    //         // cout<<"after "<<i+1<<" rotation";
    //         // for(int l=0; l<n; l++){
    //         //     cout<<arr[l]<<" ";
    //         // }
    //         // cout<<endl;
    //     }    
    //     return 0;
    // }
    // int main(){
    //     int ele,rot;
    //     cin>>ele>>rot;
    //     int a[ele];
    //     for(int i=0; i<ele; i++){
    //         a[i] = i+1;
    //         //cin>>a[i];
    //     }
    //     rotate(a,rot,ele);
    //     for(int i=0; i<ele; i++){
    //         cout<<a[i]<<" ";
    //     }
    //     return 0;
    // }


//METHOD 2 (Rotate one by one)
// #include<iostream>
// using namespace std;
// int rotate(int arr[], int d, int n) {
//     int temp;
//     for(int j=0; j<d; j++){
//         temp = arr[0];
//         for(int i=0; i<n-1; i++){
//             arr[i] = arr[i+1];
//         }
//         arr[n-1] = temp ;
//     }    
//     for(int i=0; i<n; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }
// int main(){
//     int q,p;
//     cin>>q>>p;
//     int a[q];
//     for(int i=0; i<q; i++){
//         cin>>a[i];
//     }
//     rotate(a,p,q);
//     return 0;
// }