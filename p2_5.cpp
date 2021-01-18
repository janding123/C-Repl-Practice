#include <iostream>
using namespace std;

int fib(int x)
{
    int number1 = 0;
    int number2 = 1;
    int next = 1;
 
    for (int i = 0 ; i < x-1 ; ++i)
    {
        next = number1 + number2;
        number1 = number2;
        number2 = next;
    }
    return next;
}
 
 
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
    return 0;
}