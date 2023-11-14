#include <iostream>
using namespace std;
int main (){
int TR;
cin>>TR;
int r=1;
int no=1;
while (r<=TR)
{
   int num=1;
   while (num<=r)
   {
    cout<<no<<' ';
    num++;
    no++;
   }
   cout<<endl;
   r++;
}

}
