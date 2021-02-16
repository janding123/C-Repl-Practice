#include<iostream>
#include "Stack.hpp"

int main(int argc, const char * argv[]) {

   Stack<int> s = Stack <int>(2);

   s.print();
   s.push(1);
   s.push(2);
   s.push(3);
   s.print();
   s.pop();
   s.print();
   s.push(3);
   s.pop();
   s.print();
   
   return 0;
}
