#include <iostream>
using namespace std;
int main () 
{
    int N;
cin>>N;
int R=1;
 while (R<=N) {

int SP=1;
while (SP<=N-R){
cout<<' '<<' ';
SP++;}

int ST=1;
while (ST<=R){
    cout<<'*'<<' ';
    ST++;
    
}
  cout<<'\n';
  R++;          
}
    return 0;
}

