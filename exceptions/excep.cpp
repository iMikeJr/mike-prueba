#include <iostream>
double min(double x, double y){
  int min=0.0;
  min=(x+y-abs(y-x))/2;
  return min;
}


int main(){
  int x,y;
  std::cin>>x;
  std::cin>>y;
  std::cout<<"Este es el menor numero de "<<x<<" o "<<y<<" : "<<min(x,y);
  return 0;
}
