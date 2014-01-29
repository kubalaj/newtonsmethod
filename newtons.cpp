#include <iostream>
#include <stdlib.h>
#include <cmath>

double function(double x){
  double y = 0.0;
  y = (pow(x,5)) - (.12*(pow(x,4))) - (17.9119*(pow(x,3))) - (6.43977*(pow(x,2))) +
    (80.0455*x) + 73.7877;
  return y;
}
double derive(double x){
  double y = 0.0;
  y = (5*(pow(x,4))) - (.48*(pow(x,3))) - (53.7357 *(pow(x,2))) - (12.87954*x);
  return y;
}


int main(int argc, char* argv[]){
  double x = 3.13135;
  double x1 = 0.0;
  while(abs(function(x)) != 0){
    x1 = x - (function(x)/derive(x));
    x = x1;
      std::cout << "this is x1 = " << x1 << std::endl;
  }
  return 0;
}


