#include <iostream>

using namespace std;
/*a program to print the pattern using for loopin a way that Take the number of rows of
pyramid from user.*/
int main() 
{
	int rows; //variable declaration
	cout<<"Enter the number of rows: "; cin>>rows; //input rows from user
	for(int i=1; i<=rows; i++) //loop for no. of rows entered 
	{
		for (int j=1; j<=i; j++) //nested "for loop" for cout "*" with respect to rows entered 
		cout<<"*";
		cout<<endl; //after this\n cursor will be move to "for loop" when nested "for loop" is completed
	}
	
	return 0;
}
