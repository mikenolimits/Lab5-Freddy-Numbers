#include <iostream>
using namespace std;

int main(){

   int n;

   cout<<"please enter your integer\n";
   cin>>n;

   if(n % 2 == 0){

     n = n/2;
   }

   cout<<n<<"\n";

   return 0;
}
