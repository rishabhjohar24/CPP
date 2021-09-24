#include<bits/stdc++.h>
using namespace std;
 
int SieveOfEratosthenes(long int n)
{  long int count = 0;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (long int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (long int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (long int p = 2; p <= n; p++)
        if (prime[p])
            count++;
    return count;      
}
 
int main()
{
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        long int x, y, var, rem_1, rem_2;
        cin>>x>>y;
        var = SieveOfEratosthenes(x);
        cout<<var;
        // rem_1 = var / y; 
        // rem_2 = var % y;
        // if((rem_1 % 2 == 0) && rem_2 == 0){
        //     cout<<"Divyam"<<endl;
        // } else if((rem_1 % 2 == 0) && rem_2 != 0){
        //     cout<<"Chef"<<endl;
        // } else if((rem_1 % 2 != 0) && rem_2 == 0){
        //     cout<<"Chef"<<endl;
        // } else if((rem_1 % 2 != 0) && rem_2 != 0){
        //     cout<<"Divyam"<<endl;
        // }
    }
    return 0;
}