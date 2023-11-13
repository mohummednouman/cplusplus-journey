#include<iostream>
using namespace std;
int main (){
    int tr;
    cin>>tr;
    int s=1;
    while (s<=tr){
        cout<<'*'<<'\t';
        s++;
    }
    // row 2
    int r=1;
    while (r<=(tr-1)/2){
        // star
        int st2=1;
        while (st2<=(tr+1)/2-r){
            cout<<'*'<<'\t';
            st2++;
        }
        // spaces
        int sp=1;
        while (sp<=2*r-1){
            cout<<' '<<'\t';
            sp++;

        }
        //star
        int st3=1;
        while (st3<=(tr+1)/2-r){
            cout<<'*'<<'\t';
            st3++;
        }
        cout<<endl;
        r++;

       }

       int r3=1;
       while(r3<=(tr-1)/2-(1)){
        int st4=1;
        while (st4<=r+1){
            cout<<'*'<<'\t';
            st4++;
        }
        int sp2=1;
        while (sp2<=tr-2-(2*r3)){
        cout<<' '<<'\t';
        sp2++;
        }
        int st5=1;
        while (st5<=r+1){
            cout<<'*'<<'\t';
            st5++;
        }
        cout<<endl;
        r3++;

       }
       int r2=1;
       while (r2<=(tr-1)/2-1){
        int st6=1;
        while (st6<=tr){
            cout<<'*'<<'\t';
            st6++;
        }
        r2++;
       }
}
