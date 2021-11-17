/*
napisz program ktory wyswietla tablice N*N wartosciami 1 : 0 wedlug wzoru:

11111111111
10000000001
10000000001
10000000001
10000000001
10000000001
11111111111
 
 dlugosc i szerokosc przez uzytkownika
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
	    //first
	     arr[i][j] = i==0 ||i==n-1||j==0||j==n-1;
	     
	     //second
	     
	 /* if(i==0||i==n-1){
	      arr[i][j] = 1;
	  }
	   if(j==0|| j==n-1){
	      arr[i][j] = 1;
	  }*/
	  
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
}
