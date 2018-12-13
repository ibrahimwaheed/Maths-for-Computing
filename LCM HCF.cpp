#include <iostream>
#include <string>

using namespace std;
//Beginning of the program
int main() 
	{
	//Declaring the variables that will be used as integers
		int dogs,buns,LCM;
		cout<< "Enter the amount of hot dogs and buns you have "<<endl;
		cout<< "How many Hot Dogs do you have? ";
		cin>>dogs; //the amount of hotdogs is taken from the user
		cout<< "How many Buns do you have? ";
		cin>>buns; //the amount of buns is taken from the user
		LCM = dogs*buns; //The LCM is the product of the 2 numbers
		while(dogs!=buns) // runs when the number of hotdogs is not equal to number of buns
			{
				if (dogs>buns)//if the amount of hotdogs are greater than amount of buns then-
					dogs = dogs-buns;//the No. of buns is subtracted by the No. of hotdogs and the result is set as the new value for No. of hotdogs
				else
					buns = buns-dogs;//the No. of hotdogs is subtracted by the No. of buns and the result is set as the new value for No. of buns
			}
	//Display's the HCF
		cout<< "The number of items per package are "<<dogs<<endl;//the new result for amount of hotdogs is set as the HCF
	//Display's the LCM
		cout<< "The minimum amount of servings to be catered for "<< LCM/dogs <<endl; //The minimum servings is the LCM

		
return 0;
	}
