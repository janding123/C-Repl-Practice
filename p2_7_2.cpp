#include <iostream>
using namespace std;
int x = 0;

int power_k(int a, int k){
  x = x+1;
  if (k == 0)
    return 1;
  if (k%2 == 0)
    return power_k(a, k/2) * power_k(a, k/2);
  else
    return a * power_k(a, k/2) * power_k(a, k/2);
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

// For the question 7, the number of calls of function 2 is larger than function 1