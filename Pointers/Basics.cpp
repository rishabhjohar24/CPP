#include<iostream>
using namespace std;
// class Node{
//     public :
//         int data;
//         Node *next;
// };
// int main(){
//     Node *head = NULL;
//     cout<<head<<endl;
//     cout<<&head<<endl;
//     cout<<*head;
// }

// int main() {
//     int i=10; //simple or ordinary variable.
//     int *p=&i; //single pointer
//     int **pt=&p; //double pointer
//     int ***ptr=&pt; //triple pointer
//     // All the above pointers differ in the value they store or point to.
//     cout << "i=" << i << "\t" << "p=" << p << "\t"
//          << "pt=" << pt << "\t" << "ptr=" << ptr << "\n";
//          cout << "i=" << i << "\t" << "*p=" << *p << "\t"
//          << "**pt=" << **pt << "\t" << "***ptr=" << ***ptr << "\n";
//          return 0;
// }
int main(){
    int var = 20;
    int *ptr = &var;
    cout<<var;
        *ptr = 30;
        cout<<var;
    // cout<<"Address : "<<ptr<<endl;
    // cout<<"Value at address "<<ptr<<" is : "<<*ptr<<endl;
    // *ptr = 300;
    // cout<<"AFTER"<<endl;
    // cout<<"Address : "<<ptr<<endl;
    // cout<<"Value at address "<<ptr<<" is : "<<*ptr<<endl;
    // cout<<var<<endl;
    return 0;
}


// Array and pointer
// int main(){
//     int arr[4] = { 656, 213, 2443, 432};
//     int *ptr = arr;
//     for(int i = 0; i < 4; i++){
//         cout<<*ptr<<" ";
//         cout<<ptr<<" ";
//         ptr++;
//     }
//     return 0;
// }

// int main(){
//     int arr[4] = { 656, 213, 2443, 432};
//     int *ptr = arr;
//     for(int i = 0; i < 4; i++){
//         cout<<ptr[i]<<" ";
//         cout<<&ptr[i]<<" ";
//     }
//     return 0;
// }