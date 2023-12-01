#include<iostream>
using namespace std;
int main (){
    char ch;
cin>>ch;
if(ch>='A' and ch<='Z'){
    cout<<"is upper"<<endl;
}
else if(ch>='a' and ch<='z'){
    cout<<"is lower"<<endl;
}
else{
    cout<<"some other character"<<endl;
}
    return 0;
}