/*
    WAP_to_print_sum_of_elements_above_the_diagonal_matrix_of_3*3_elements
*/
#include<iostream>
#include<string>
// using namespace std;

using std::cout;
using std::cin;
using std::string;

int main()
{
    int i,j,sumofdiagonal,sac;

    int a[3][3]={1,2,3,
                 4,5,6,
                 7,8,9};

    
    sumofdiagonal=0;

    for(i=0;i<3;i++) 
    {
        cout<<'\n';
      for(j=1;j<3;j++) 
      {
          if(i==1)
            {
              j=2;
            }
          else if(i==2)
            {
              break;
            }
          sumofdiagonal=sumofdiagonal+a[i][j];
          
      }
    }
    cout<<"Sum of upper diagonal elements are: ";
    cout<<sumofdiagonal;
}