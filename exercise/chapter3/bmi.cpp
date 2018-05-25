#include<iostream>
int main(){
  using namespace std;
  double height;
  double weight;
  cout<<"Input your height in feet:";
  cin>>height;
  cout << "Input your weight in pound:";
  cin>>weight;
  double bmi=(height*12*0.0254)*(height*12*0.0254)/(weight/2.2);
  cout<<"The BMI is "<<bmi;
  return 0;
}
