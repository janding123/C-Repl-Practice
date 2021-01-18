#include <iostream>
using namespace std;

int power_k(int k){
  int a;
  if (k == 0)
  return 1;
  return a * power_k(k-1);
}

int main(){
 int j;
 cout << "enter the number of n-th element:  ";
 cin >> j;
 cout << power_k(j);
 return 0;

}