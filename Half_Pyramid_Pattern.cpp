#include <iostream>
using namespace std;
int main () {
int N;
cin>>N;
int r=1;
while (r<=N){
    int st=1;
    int num=1;
    while(st<=r){
        cout<<num<<' ';
      st++; 
      num++;  
        }
        cout<<endl;
    r++;

}
    return 0;

}


