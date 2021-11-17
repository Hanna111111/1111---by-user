/*
napisz program ktory wyswietla tablice N*N wartosciami 1 : 0 wedlug wzoru:
1 
 1 
  1 
   1
 
 dlugosc i szerokosc przez uzytkownika
*/
#include <iostream>
#include <iomanip>
using namespace std;

int
main ()
{
  int rows, cols;
  cout << "Please, input size of rows:  " << endl;
  cin >> rows;

  cout << "Please, input size of columns:  " << endl;
  cin >> cols;
  int arr[rows][cols];

  //input numbers in array
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
	{
	    arr[i][j] = 0;
	    if(i == j){
	        arr[i][j] = 1;
	    }
	  
	}
    }

  //output numbers from array
  for (int i = 0; i < rows; i++)
    {
      for (int j = 0; j < cols; j++)
	{
  cout<<arr[i][j]<<" ";
	}
      cout << endl;
    }

  return 0;
}
