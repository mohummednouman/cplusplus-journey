/*
   *
  ***
 *****
*******

*/
#include <iostream>
using namespace std;
int main (){
    int tr;
    cin>>tr;
    int r=1;
    while (r<=tr){
        int sp=1;
        while (sp<=tr-r) {
            cout<<' ';
            sp++;
        }
        int st=1;
        while (st<=2*r-1){
            cout<<'*';
            st++;
        }
        cout<<endl;
        r++;
    }
    return 0;

}