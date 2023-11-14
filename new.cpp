#include <iostream>
using namespace std;
int main (){
    int tr;
    cin>>tr;
    int r=1;
    while (r<=tr){
        int sp=1;
        while(sp<=tr-r){
            cout<<' ';
            sp++;

        }
        int no=1;
        int st=1;
        while(st<=r){
            cout<<no;
            st++;
            no++;

        }
        int no2=r-1;
        int st2=1;
        while (st2<=r-1){
            cout<<no2;
            st2++;
            no2--;
        }
        cout<<endl;
        r++;
    }
}