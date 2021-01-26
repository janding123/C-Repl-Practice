#include <iostream>
#include<cmath>
using namespace std;

double * read_poly(int &n){
  cout << "il grado: ";
  cin >> n;
  double * c=new double[n+1];
  for(int i=0;i<=n;i++){
    cout << "coefficient of degree " << i << ": ";
    cin >> c[i];
  }
  return c;
}

void print_poly(double *c, int n){
  int i;
  cout << c[0];
  if(n>0)
    cout << " + ";
  for(i=1;i<n;i++)
    cout << c[i] << "*x^" << i << " + ";
  if(n>0)
    cout << c[n] << "*x^" << i;
  cout << endl;
}
// Question 1: get value of poly on X
int calculate(double *c, int &n)
{
 int i,replace,x;
 cout<<"Input value of x for calculation ";
 cin>>x;
 replace=0;
 for(i=0;i<n;i++)
     replace=replace + c[i] * pow(x,i);//to compute the value one by one
 return 0;
}

double * poli_sum (double *p1, int d1, double *p2, int d2)
{ 
   int dr = max(d1, d2); 
   double *sum = new double[dr]; 
  
   // Initiliaze the first poly 
   for (int i = 0; i<=d1; i++) 
     sum[i] = p1[i]; 
  
   // Sum the first and second poly 
   for (int i=0; i<=d2; i++) 
       sum[i] += p2[i]; 
  
   return sum; 
} 

double * poli_dot (double *p1, int d1, double *p2, int d2)
{ 
   double *prod = new double[d1+d2-1]; 
  
   // Initialize the porduct polynomial 
   for (int i = 0; i<=d1+d2-1; i++) 
     prod[i] = 0; 
  
   // Multiply two polynomials term by term 
  
   // Take ever term of first polynomial 
   for (int i=0; i<=d1; i++) 
   { 
     // Multiply the current term of first polynomial 
     // with every term of second polynomial. 
     for (int j=0; j<=d2; j++) 
         prod[i+j] += p1[i]*p2[j]; 
   } 
  
   return prod; 
} 


int main()
{
  double *p1, *p2, *p3, *p4, *p5, *add, *mul;
  int g1,g2,g3, g4, g5, cal;
  
  // execute function for question 1
  cout<<"Question 1: " << endl; 
  p1=read_poly(g1);
  print_poly(p1,g1);
  cal = calculate(p1,g1);
  cout<<"The value of the calculation is " <<cal << endl; 
  delete[] p1;
  
  // execute function for question 2
  cout<<"\nQuestion 2: " << endl;;
  p2=read_poly(g2);
  p3=read_poly(g3);
  cout << "First polynomial is \n"; 
  print_poly(p2, g2); 
  cout << "\nSecond polynomial is \n"; 
  print_poly(p3, g3); 
  
  int size = max(g2, g3);
  add = poli_sum (p2, g2, p3, g3); 
  cout << "\nsum of polynomial is \n"; 
  print_poly (add,size); 
  delete[] p2;
 
 // execute function for question 3 
  cout<<"\nQuestion 3: " << endl;;
  p4=read_poly(g4);
  p5=read_poly(g5);
  cout << "First polynomial is \n"; 
  print_poly(p4, g4); 
  cout << "\nSecond polynomial is \n"; 
  print_poly(p5, g5); 

  mul = poli_dot (p4, g4, p5,g5);
  int size2 = g4+g5;
  cout << "\n product of polynomial is \n"; 
  print_poly (mul, size2); 
  delete[] p4;

  return 0;
}