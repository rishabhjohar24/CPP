#include<iostream>
#include<string>
using namespace std;
class student {
    private:
        string name;
        int age;
    public:
        void setStudent(string s, int a) {
            name = s; age = a;
        }
        void showStudent(){
            cout<<"\n "<<"Name: "<<name;
            cout<<"\n Age: "<<age;
        }
};
int main() {
    pair <string, int > p1;
    pair <string, int > p2;
    pair <string, float > p3;
    pair <int , student > p4;
    p1 = make_pair("Rishabh",20);
    p2 = make_pair("Kartavya",20);
    p3 = make_pair("Pradhum",20.5); 
    student s1;
    s1.setStudent("Tanya",20);
    p4 = make_pair(45,s1);
    cout<<"\nPair 1 :";
    cout<<"\n"<<p1.first<<" "<<p1.second;
    cout<<"\nPair 2 :";
    cout<<"\n"<<p2.first<<" "<<p2.second;
    cout<<"\nPair 3 :";
    cout<<"\n"<<p3.first<<" "<<p3.second;
    cout<<"\nPair 4 :";
    cout<<"\n"<<p4.first<<" ";
    student s2 = p4.second;
    s2.showStudent(); 
    return 0;
}