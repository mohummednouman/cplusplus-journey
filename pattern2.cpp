/*
----------
******
*****
****
***
**
*
----------
*/
#include<iostream>
using namespace std;
int main (){
    int tr;
    cin>>tr;
    
    int r=1;
    while(r<=6){
    int s=1;
    while (s<=tr-r+1){
        cout<<'*';
        s++;
    }
    cout<<endl;
    r++;
    }
    return 0;
}