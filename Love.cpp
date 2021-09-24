#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> groom, bride;
    string name;
    int n, m;
    cin>>n>>m;
    for(int i = 0; i < n; i++){
        cin>>name;
        groom.push_back(name);
    }
    for(int i = 0; i < m; i++){
        cin>>name;
        bride.push_back(name);
    }
    for(int i = 0; i < n; i++){
        for(int p = 0; p < m; p++){
            string a, b;
            a = groom[i];
            b = bride[p];
            // cout<<"Groom's Name : "<<a<<endl;
            // cout<<"Bride's Name : "<<b<<endl;
            int k = 0, mat[100] = {0}, count = 0;
            vector <char> seen;
            set <char> _set_groom, _set_bride;
            //_set_groom = distinct character in the name of groom
            //_set_bride = distinct character in the name of bride

            //used vetor for maintaining order of the character in name of groom
            
            //mat is a array keeping track of the frequency of charactes in groom's and brides name

            //grooms's name distinct characters
            for(int i = 0; i < a.length(); i++){
                if(_set_groom.find(a[i]) == _set_groom.end()){
                    seen.push_back(a[i]);
                }
                _set_groom.insert(a[i]);
            }
            //Number of same characters in groom's name
            for(int i = 0; i < seen.size(); i++){
                for(int j = 0; j < a.size(); j++){
                    if(seen[i] == a[j]){
                        count++;
                    }
                }
                mat[i] = count;
                count = 0;
            }
            //Matching letters in groom's and bride's Name
            for(int i = 0; i < seen.size(); i++){
                count = 0;
                for(int j = 0; j < b.length(); j++){
                    if(seen[i] == b[j]){
                        count++;
                    }
                }
                mat[k] += count;
                k++;
            }
            //Remaining letters of bride
            for(int i = 0; i < b.length(); i++){
                count = 1;
                if(_set_groom.find(b[i]) == _set_groom.end()){
                    if(_set_bride.find(b[i]) == _set_bride.end()){
                        for(int j = i + 1; j < b.length(); j++){
                            if(b[i] == b[j]){
                                count++;
                            }
                        }
                        _set_bride.insert(b[i]);
                        mat[k] = count;
                        k++;
                    }
                }
            }
            int len = k, i = 0, j = k - 1;
            while(i < j){
                mat[i] = mat[i] + mat[j];
                i++;
                j--;
                if(i >= j){
                    i = 0;
                    if(len % 2 == 0){
                        j = (len / 2) - 1;
                    }
                    else if(len % 2 != 0){
                        j = (len / 2);
                    }
                    
                    len = (len + 1)/ 2;
                }
                if(i == 0 && j == 1){
                    break;
                }
            }
            cout<<"Love % between "<<a<<" & "<<b<<" is : "<<mat[0]<<mat[1]<<"%"<<endl<<endl;
        }
    }       
    return 0;
}