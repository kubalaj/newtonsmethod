#include <iostream>
#include <stdlib.h>
#include <cmath>

double function(double x){
  double y = 0.0;
  int o1,o2,o3 = 0;
  
  if(x < 3){
    o1 = -1;
  }
  else o1 = 1;

  if(x < 6){
    o2 = -1;
  }
  else o2 = 1;

  if(x < 56){
    o3 = -1;
  }
  else o3 = 1;

  y = (o1*(1/(pow(10,20)*(pow((x-3),2))))) + (o2*(1/(pow(10,20)*(pow((x-6),2)))))+ (o3*(1/(pow(10,20)*(pow((x-56),2)))));
  return y;
}

double derive(double x){
  double y = 0.0;
  int o1,o2,o3 = 1;
  double pow20 = pow(10,20);
 if(x < 3){
    o1 = -1;
  }
  else o1 = 1;

  if(x < 6){
    o2 = -1;
  }
  else o2 = 1;

  if(x < 56){
    o3 = -1;
  }
  else o3 = 1;
  double j = (x-3);
  double k = (x-6);
  double h = (x-56);
  y = o1/(pow20 * pow(j,2))+o2/(pow20 *pow(k,2))+o3/(pow20 * pow(h,2));

  return y;
}

int main(int argc, char* argv[]){
  double x = 25.1;
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

