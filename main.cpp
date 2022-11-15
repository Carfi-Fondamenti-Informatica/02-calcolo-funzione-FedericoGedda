#include <iostream>
using namespace std;

int main() {
   float a,b,x,y,z;
   cin>>a>>b>>x>>y;
   if ((x<0)&&(y>0)) {
       cout<<z=(a*x)-(b*y);;
   } else if ((x>=0)&&(y<=0)){
       cout<<z=a*x*x-b*y;
   } else {
       cout<<z=a*x*+b*y*y;
   }
   return 0;
}
