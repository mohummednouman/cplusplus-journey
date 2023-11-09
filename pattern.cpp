// *
// **
// ***
// ****
// *****
#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;
    int r=1;
    while (r<=n){
    int i=1;
    while (i<=r){
        cout<<'*';
        i++;
    }
    cout<<endl;
    r++;
    }
    return 0;

}