#include <iostream>
using namespace std;

int main(){

  string name;
  int number;
  cout<<"Hey there!!! What is your name?\n";
  cin>>name;

  if(name == "Freddy"){
   
    return 0;
  }

  else{

    cout<<"Great your name isn't freddy. I hate that guy.\n";
    cout<<"Please enter a positive integer to show you are human. \n";

    cin>>number;
     if(number % 2 == 0){
          
        number = number % 10;
        cout<<number<<"\n";
     }
  }

  return 0;

}

