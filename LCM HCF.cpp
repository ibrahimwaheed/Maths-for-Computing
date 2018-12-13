#include <iostream>
#include <string>

using namespace std;

int main() 
	{
		int dogs,buns,c;
		cout<< "Enter the amount of hot dogs and buns you have "<<endl;
		cout<< "How many Hot Dogs do you have? ";
		cin>>dogs;
		cout<< "How many Buns do you have? ";
		cin>>buns;
		c = dogs*buns;
		while(dogs!=buns)
			{
				if (dogs>buns)
					dogs = dogs-buns;
				else
					buns = buns-dogs;
			}
		cout<< "The number of items per package are "<<a<<endl;
		cout<< "The minimum amount of servings to be catered for "<< c/a <<endl;

		
return 0;
	}