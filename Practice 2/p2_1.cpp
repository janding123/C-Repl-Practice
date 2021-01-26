#include <iostream>
using namespace std;

// declaration of function ' 
bool check_point(int circle_x, int circle_y, int rad, int x, int y) {
  // Compare radius of circle with distance 
  // of its centre 
  if ((x - circle_x)*(x - circle_x) +
      (y - circle_y)*(y - circle_y) <= rad * rad)
      return true;
  else
      return false;
}

int main(){
  int x = 1, y = 1;
  int circle_x = 0, circle_y = 0, rad = 2;
  if (check_point(circle_x, circle_y, rad, x, y))
     cout << "Inside" << endl;
  else 
     cout << "Outside" << endl;
  return 0;
}