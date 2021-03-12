//Regan Setter
//Student ID 3505894
//Computer Science 206
//February 25th, 2021

#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

//Rewrite program 1 using an inline function to perform the calculation. In the test plan for this program (actual results section), compare the time required by this program to execute against the time required by the first (non-inline) program.
//Tests 1. Rewrote the same code/program from assignment one but used an inline function instead. 
//2. After running the program - the sum of the product is identical
//3. Sum of the product is equal to 176816052 = correct and the time elapsed is either 0 or 1 for all the tests I have done, seems slower than the prior program
using namespace std;

double sumOfArrays (double[], double[]);	//double array function 

int
main ()
{
  const time_t start_time = time (NULL);	//same as previous program, time = null to given current time, start time function
  double arr1[10000], arr2[10000];
  for (int a = 100, b = 0, c = 9999; a < 10100; a++, b++, c--)
    {
      arr1[b] = a;		//array1
      arr2[c] = a;		//array2
    }
  int sum = sumOfArrays (arr1, arr2);	//sumOfArrays

  cout << "The Sum Of The Product is: " << sum << endl;	//displays sum of the product
  int time_elapsed = time (NULL) - start_time;
  cout << "The Time Elaspsed Is: " << time_elapsed << endl;	//displays Time Elapsed
}

double sumOfArrays (double[], double[]); //double function

double
sumOfArrays (double arr1[], double arr2[])	//function that calculates the sum of given arrays
{
  double sum = 0;
  for (int a = 0; a < 10000; a++)
    {
      cout << arr1[a] << " " << arr2[a] << endl;
      sum = sum + (arr1[a] * arr2[a]);	// sum = array1 * array2 
    }
  return sum;			//returns the sum 
}


//Too be honest I wasn't exactly sure what this project was asking me to complete.. I reread the question a few times. My program above gives me a - sum which does not seem correct.
//Here is what I would implement to correct it however I am unsure which is entirely correct..
//int main ()
//{
//const time_t start_time = time (NULL);	//same as previous program, time = null to given current time, start time function
//double arr1[10000];
//double arr2[10000];
  
//cout << "The Products are: " << endl;
  
//for (int a = 100, b = 0, c = 9999; a < 10100; a++, b++, c--)
//{
//arr1[b] = a;		//array1
//arr2[c] = a;		//array2
      
//cout << arr[1] << " * " << arr[2] << " = " << (arr[1] * arr[2]) << endl;
//}