#include <iostream>
using namespace std;
int main()
{
    int test;
    cin >> test;
    while (test--)
    {
        int na, ma;
        cin >> na >> ma;
        long int karl;
        cin >> karl;
        int  man = min(na, ma), mumbai = max(na, ma);
        long int  cant  = 0;
        for (int i = 2; i <= mumbai +  man; i++) {
            int kkr = i - 1;
            if(kkr %2!=0) {
                if(kkr <= man && kkr <= mumbai) cant =cant ^ (karl + i);
                    else {
                        int kp = kkr - man;
                        int kq = kkr - mumbai;
                        long long int  qqp = 0;
                        if(kp > 0) qqp += kp;
                         if(kq > 0) qqp += kq;
                        kkr = kkr - qqp ;
                        if(kkr % 2 != 0) cant = cant ^ (karl + i);
                    }
            }
            else {
                if(!(kkr <= man && kkr <= mumbai)) {
                    int kp = kkr - man;
                        int kq = kkr - mumbai;
                        long long int  qqp =0;
                        if(kp > 0)  qqp  += kp;
                         if(kq > 0)  qqp  += kq;
                        kkr = kkr - qqp;
                        if(kkr % 2 != 0) cant  = cant ^ (karl + i);
                }
            }
        }
        cout << cant  << "\n";
    }