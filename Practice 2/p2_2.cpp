#include <iostream>
using namespace std;

double moving_body(double x0, double v, double a, double t){ 
    double x_t = x0 + v * t + 1/(2*a) * (t * t);
    cout << "At time " << t << " the position is " << x_t << endl;
    return x_t;
}

int main() {
  double x1, x2, x3, x4,inter0;
  cout << "enter the initial position, the speed and the acceleration:";
  cin >> x1 >> x2 >> x3;
  cout << "how many times you want to display the position of the moving body?";
  cin >> inter0;
  cout << "how often (in seconds) you want to update the position of the moving object? ";
  cin >> x4;
  cout <<  "Acceleration:  " << x3 << " Initial speed:  " << x2 << " Initial position:  " << x1 << " Number of times: " << inter0 << "Delta t: " << x4;
  double i,t;  
  for (i=0, t=0; i < inter0; i = i+1, t = t + x4)
      cout << moving_body(x1, x2, x3, t) << endl; 
  return 0;
  
}
