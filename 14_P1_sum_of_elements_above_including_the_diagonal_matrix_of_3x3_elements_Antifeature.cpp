/*
    WAP_to_print_sum_of_elements_above_and_including_the_diagonal_matrix_of_3*3_elements(with_Antifeature).
*/
#include<iostream>
//#include<string>
// using namespace std;

using std::cout;
using std::cin;
//using std::string;

int main()
{
    int i,j,sumofdiagonal;

    int a[3][3]={1,2,3,
                 4,5,6,
                 7,8,9};

    
    sumofdiagonal=0;

    for(i=0;i<3;i++) 
    {
        cout<<'\n';
      for(j=0;j<3;j++) 
      {
        if(i==0&&j==0)
          {
              sumofdiagonal=a[0][0];
          }
         else if(j >= i)
            {
                sumofdiagonal=sumofdiagonal+a[i][j];
                
                a[i][j]=a[i][j+1];
            }
      }
    }
    cout<<"Sum of upper diagonal elements are: ";
    cout<<sumofdiagonal;
}