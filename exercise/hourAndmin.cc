#include<iostream>
using namespace std;
void times(int,int);
int main(){
  int hours;
  int minutes;
  cout<<"Enter the number of hours:";
  cin>>hours;
  cout<<"Enther the number of minutes;";
  cin>>minutes;
  times(hours,minutes);
  return 0;
}

void times(int a,int b){
  cout<<"Time: "<<a<<":"<<b;
}
