#include <iostream>
using namespace std;

int main() {
  int lines, number = 1;

  cout << "Enter number of lines";
  cin >> lines;

  for(int i = 1; i <= lines; i++)
  {
    for (int j = 1; j <= i; ++j)
    {
      cout << number << " ";
      ++number;
    }
    
    cout << endl;
  
  }

  return 0;
}