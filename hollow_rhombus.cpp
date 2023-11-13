#include <iostream>
using namespace std;
int main ( ){
    int tr;
    cin>>tr;
// row 1
//space
int sp=1;
while (sp<=tr-1){
    cout<<' ';
    sp++;
} 
//star
int st=1;
while (st<=tr){
    cout<<'*';
    st++;
}
cout<<endl;
// row 2-4;
//spaces
int r=1;
while (r<=tr-2){
int sp2=1;
while (sp2<=tr-r-1){
    cout<<' ';
    sp2++;
}
//stars
cout<<'*';
//spaces
int sp3=1;
while (sp3<=tr-2){
    cout<<' ';
    sp3++;
}

//stars
cout<<'*';
cout<<endl;
r++;
}
//row 5
int st3=1;
while(st3<=tr){
    cout<<'*';
    st3++;
}
cout<<endl;

    
    return 0;
}