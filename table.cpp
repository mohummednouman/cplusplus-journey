#include <iostream>
using namespace std;
int main (){
    int INI;
    int FINAL;
    int STEP;
    cin>>INI>>FINAL>>STEP;
 int F=INI;
    while (F<=FINAL){
        int C=(5)*(F-32)/9;
    cout<<F<<'\t'<<C<<endl;
    F=F+STEP;
    }
 

}