#include<bits/stdc++.h>
using namespace std;
int maxi(int x, int y, int z, int rod){
    int t[rod + 1];
    memset(t, -1, sizeof(t));
    t[0] = 0;
    for(int i = 0; i <= rod; i++){
        if (t[i] == -1){
            continue;
        }
        if(i + x <= rod){
            t[i + x] = max(t[i] + 1, t[i + x]);
        }
        if(i + y <= rod){
            t[i + y] = max(t[i] + 1, t[i + y]);
        }
        if(i + z <= rod){
            t[i + z] = max(t[i] + 1, t[i + z]);
        }
    }
    if(t[rod] == -1){
        return 0;
    }
    return t[rod];
}
int maxi(int x, int y, int z, int rod, int count){
    if(rod == 0){
        return count;
    }
    if(rod < 0){
        return 0;
    }
    if(rod < min(x, min(y, z))){
        return 0;
    }
    return max(maxi(x, y, z, rod - x, count++), max(maxi(x, y, z, rod - y, count++), maxi(x, y, z, rod - z, count++)));
}
int main(){
    int x, y, z, r, count = 0;
    cin>>x>>y>>z>>r;
    cout<<maxi(x, y, z, r, count)<<endl;
    cout<<maxi(x, y, z, r);
    return 0;
}