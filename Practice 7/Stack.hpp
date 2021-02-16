#ifndef Stack_hpp 
#define Stack_hpp

#include <stdio.h>
#include <iostream>
#include "StackI.hpp"

using namespace std;

template <typename T> class Stack:Stack<T>{

protected:
    int topindex;
    int numberOfElements;
    int size;
    T s [];

public:
    Stack(){
      s [20];
      topindex=0;
      numberOfElements=0;
      size=20;
    }

    Stack(int n){
      s[n];
      topindex=0;
      numberOfElements=0;
      size=n;
    }
void push(T t){
    if (numberOfElements)>=0 && numberOfElements<size){
        s[topindex++]=t;
        numberOfElements++;
    }
}
void pop(){
  if(numberOfElements>0){
        --topindex;
        --numberOfElements;
  }
}
T top(){
  if(numberOfElements>0){
      return s[topindex];
  }
  else
      return s[0];
}

  void print(){
    cout <<"----------"<< endl;
     if(numberOfElements==0){
        std::cout <<"EMPTY STACK" << endl;
     }
     else{
        for (int i=topindex-1; i>=0; i--){
          if(i==topindex-1)
              cout << "top->\t";
          else
              cout <<'\t\t';
          cout << s[i] << endl;
        }
     }
     cout <<'-----------'<< endl << endl;
  }

  bool isEmpty(){
    return (numberOfElements==0)?true : false;
  }
};
#endif


