#include <iostream>
int con(int);
int main(){
  using namespace std;
  int furlong;
  cout<<"Input furlong:";
  cin>>furlong;
  int yards;
  yards=con(furlong);
  cout<<"The corresbonding yards is "<<yards;
  return 0;
}

int con(int a){
  return a*220;
}
