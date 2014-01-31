#include <iostream>
#include <stdlib.h>
#include <cmath>

double function(double x){
  double y = 0.0;
  // Part 1 of problem 2 
  //y = (pow(x,5)) - (.12*(pow(x,4))) - (17.9119*(pow(x,3))) - (6.43977*(pow(x,2))) + (80.0455*x) + 73.7877;

  //Part 2 of Problem 2  
   y = (pow(x,5)) - (7.19*(pow(x,4))) - (4.676*(pow(x,3))) - (64.8686*(pow(x,2))) + (154.586*x) + 94.2459;
  
return y;
}
double derive(double x){
  double y = 0.0;
  // y = (5*(pow(x,4))) - (.48*(pow(x,3))) - (53.7357 *(pow(x,2))) - (12.87954*x);
  y = (5*(pow(x,4))) - (28.76*(pow(x,3))) - (14.028 *(pow(x,2))) - (129.7372*x);
  return y;
}


int main(int argc, char* argv[]){
  double x = 3.5;
  double x1 = 0.0;
  double thres = 1;
  int i = 0;
  while(thres != 0 && i < 100){
    x1 = x - (function(x)/derive(x));
    thres=(x-x1);
    x = x1;
      std::cout << x1 << std::endl;
      //      std::cout << "this is threshold = " << thres << std::endl;
      i++;
  }
  std::cout << "this is x1 = " << x1 << std::endl;
  return 0;
}


