#include <iostream>
using namespace std;
int main (){
    int N;
    cin>>N;
    for (int r=1; r<=N; r++){

        for (int sp=1; sp<=N-r; sp++){
            cout<<' '<<' '<<' ';}

int no=1;
        for (int st=1; st<=2*r-1; st++,){
            cout<<' '<<no<<' ';}
          
        cout<<endl;
    }
    return 0;
}