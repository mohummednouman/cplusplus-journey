/*

     *
    **
   ***
  ****
 *****             


*/
#include <iostream>
using namespace std;
int main (){
    int tr;
    cin>>tr;
    int r=1;
    while (r<=tr){
      
        int s=1;
        while (s<=tr-r){
            cout<<' ';
            s++;
            }
            int st=1;
            while (st<=r){
                cout<<'*';
                st++;

            }
            cout<<endl;
            r++;
    }
    return 0;

}