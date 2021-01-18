#include <iostream>
using namespace std;

void swap(int &y, int &x){
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main (){
 int y = 3, x = 2;
 cout <<"x: " << x << " y: " << y << endl;
 swap (y, x);
 cout <<"After swap " << "x: " << x << "y: " << y << endl;
}