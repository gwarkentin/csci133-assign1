#include <iostream>

using namespace std;


//adds together the two numbers returning result to the function call
int sum(int num1, int num2)
{
	return num1 + num2;
}

//subracts num2 from num1 returning result to the function call
int diff(int num1, int num2)
{
	return num1 - num2;
}


//multiplies together the two numbers returning result to the function call
int prod(int num1, int num2)
{
	return num1 * num2;
}

//returns the average of the two numbers
//uses float so that the decimal is given
float avg(int num1, int num2)
{
	return float (num1 + num2)/2;
}

//returns absolute value of the difference
int dist(int num1, int num2)
{
	return abs(diff(num1, num2)); 
}

//returns max using std library
int maxi(int num1, int num2)
{
	return max(num1, num2);
}

//returns min using std library
int mini(int num1, int num2)
{
	return min(num1, num2);
}



int main(int argc, char* argv[])
{	
	//check if correct number of arguments and inform user
	if (argc != 3)
	{
		//output the call used and indicate to use two integers
		cout << "usage: " << argv[0] << " <int> <int>" << endl;
		return 1;
	}
	else
	{
		//convert string input to int and store for the several calls
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
			
		//output the return of each function call
		cout << "Sum: " << sum(num1,num2) << endl;
		cout << "Dif: " << diff(num1,num2) << endl;	
		cout << "Prod: " << prod(num1,num2) << endl;
		cout << "Avg: " << avg(num1,num2) << endl;
		cout << "Dist: " << dist(num1,num2) << endl;	
		cout << "Max: " << maxi(num1,num2) << endl;
		cout << "Min: " << mini(num1,num2) << endl;

	}

	return 0;
}
