/*
napisz program ktory wyswietla tablice N*N wartosciami 1 : 0 wedlug wzoru:
1010101010101010
0101010101010101
1010101010101010  
0101010101010101 

 n przez urzytkownika
*/

#include <iostream>
#include <iomanip>
using namespace std;


int
main ()
{
  int n;
  cout << "Please, input size:  " << endl;
  cin >> n;

  int k = n - 1;
  int arr[n][n];


  //input numbers in array
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  
	  
	  if((i + j) % 2 == 0){
	      arr[i][j] = 1;
	  }else{
	      arr[i][j] = 0;
	  }
	  
	  
	}
	
    }



  //output numbers from array
  for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
	{
	  cout << arr[i][j];
	}
      cout << endl;
    }




  return 0;
}
