#include <iostream>
using namespace std;
int x = 0;

int sum_k(int k){
  x = x+1;
  if (k == 0 || k == 1)
  return k;
  return k + sum_k(k-1);

}

int main(){
 int j;
 cout << "enter the number of n-th element:  ";
 cin >> j;
 cout << sum_k(j);
 cout << "sum_k was called " << x << " times" << endl;
 return 0;

}