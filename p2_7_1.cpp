#include <iostream>
using namespace std;
int x = 0;

int power_k(int a, int k){
  x = x+1;
  if (k == 0)
  return 1;
  return a * power_k(a, k-1);
}

int main(){
 int a, k;
 cout << "enter the base number:  ";
 cin >> a;
 cout << "enter the power:  ";
 cin >> k;
 cout << power_k(a, k) << endl;
 cout << "power_k was called " << x << " times" << endl;
 return 0;

}