#include <iostream>
using namespace std;
int main (){
    int tr;
    cin>>tr;
    int r=1;
    while(r<=tr-1){
        int st=1;
        int no=1;
        while(st<=r){
            cout<<no<<'\t';
            st++;
            no++;
        }
        int sp=1;
        while(sp<=(2*tr-1)-(2*r)){
            cout<<' '<<'\t';
            sp++;
        }
        int st2=1;
        int no2=r;
        while(st2<=r){
            cout<<no2<<'\t';
            st2++; 
            no2--;  
        }
        cout<<endl;
        r++;
        }
        int st3=1;
        int no3=1;
        while(st3<=tr){
            cout<<no3<<'\t';
            st3++;
            no3++;
        }
        int st4=1;
        int no4=tr-1;
        while(st4<=tr-1){
            cout<<no4<<'\t';
            st4++;
            no4--;
        }
        

}
