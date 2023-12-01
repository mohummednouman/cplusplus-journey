#include<iostream>
using namespace std;
int main (){
    int a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a>=b and a>=c and a>=d and a>=e){
        cout<<a;
    }
    else if (b>=a and b>=c and b>=d and b>=e){
        cout<<b;
    }
else if (c>=a and c>=b and c>=d and c>=e){
    cout<<c;
}
else if (d>=a and d>=b and d>=c and d>=e){
    cout<<d;
}
else{
    cout<<e;
}

    return 0;
}