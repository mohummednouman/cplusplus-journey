#include<iostream>
using namespace std;
int main (){
    char ch;
cin>>ch;
if(isupper (ch)){
    cout<<"is upper"<<endl;
}
else if(islower (ch)){
    cout<<"is lower"<<endl;
}
else{
    cout<<"some other character"<<endl;
}
    return 0;
}