#include <iostream>
using namespace std;
int main () {
    int N;
    cin>>N;
    int R=1;
    while (R<=N){
        int S=1;
    while (S<=R) {
        cout<<'*';
        S++;
    }
    cout<<endl;
    R++;
    }
    return 0;

 }