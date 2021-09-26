                                        //Factorial of a Number Using Recursion
#include<iostream>

using namespace std;

int find_factorial(int n)
{
  if (n>=1)
        return n*find_factorial(n-1);
    else
        return 1;
}

int main()
{
  int input_no;// factorial=0;

  cout <<"Enter the no. you want to find factorial of: ";
  cin >>input_no;
  find_factorial(input_no);

  cout <<"Factorial of no. "<< input_no <<" is: "<<find_factorial(input_no) ;
}

  