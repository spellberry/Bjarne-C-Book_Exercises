#include "../PPP.h"
#include "Chapter2.h"

void MilesConverter()
{

	double miles = 0.0;
	constexpr double MILES_TO_KM = 1.609;

	cout << "Please input a number of miles: ";

	while (cin >> miles)
	{
		cout << "Miles: " << miles << " Kilometers: " << miles * MILES_TO_KM << '\n';

		cout << "\nPlease input a number of miles: ";
	}
}

void IllegalNamesAndValues()
{
	/*int double = 0;
	float x = 5;
	FLoat z = 6;
	int int = 5;*/
}

void NumberThing()
{
	int val1 = 0;
	int val2 = 0;

	cout << "Enter two integer values: ";

	cin >> val1 >> val2;

	if (val1 < val2)
	{
		cout << "The smaller value is: " << val1 << '\n';
		cout << "The bigger values is: " << val2 << '\n';
		cout << "The sum of the two values: " << val1 + val2 << '\n';
		cout << "The difference of the two values: " << val2 - val1 << '\n';
		cout << "The product of the two values: " << val1 * val2 << '\n';
		cout << "The ratio of the two values: " << val2 / val1 << '\n';
	}
	if (val1 > val2)
	{
		cout << "The smaller value is: " << val2 << '\n';
		cout << "The bigger values is: " << val1 << '\n';
		cout << "The difference of the two values: " << val1 - val2 << '\n';
		cout << "The product of the two values: " << val1 * val2 << '\n';
		cout << "The ratio of the two values: " << val1 / val2 << '\n';
	}
	

}

void NumberThingDoubles()
{
	double val1 = 0;
	double val2 = 0;

	cout << "Enter two floating point values: ";

	cin >> val1 >> val2;

	if (val1 < val2)
	{
		cout << "The smaller value is: " << val1 << '\n';
		cout << "The bigger values is: " << val2 << '\n';
		cout << "The sum of the two values: " << val1 + val2 << '\n';
		cout << "The difference of the two values: " << val2 - val1 << '\n';
		cout << "The product of the two values: " << val1 * val2 << '\n';
		cout << "The ratio of the two values: " << val2 / val1 << '\n';
	}
	if (val1 > val2)
	{
		cout << "The smaller value is: " << val2 << '\n';
		cout << "The bigger values is: " << val1 << '\n';
		cout << "The difference of the two values: " << val1 - val2 << '\n';
		cout << "The product of the two values: " << val1 * val2 << '\n';
		cout << "The ratio of the two values: " << val1 / val2 << '\n';
	}
	

}

void ThreeInts()
{
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;

	int min = 0;
	int mid = 0;
	int max = 0;

	cout << "Input 3 integer values: ";

	while (cin >> val1 >> val2 >> val3)
	{// 1 3 2

		if (val1 < val2) // 1 < 3
		{
			if (val1 < val3) // 1 < 2
			{
				min = val1; //true 
				if (val2 < val3)
				{// false
					mid = val2;
					max = val3;
				}
				else
				{
					mid = val3;
					max = val2;
				}
			}
		}
		if (val2 < val1)
		{
			if (val2 < val3)
			{
				min = val2;
				if (val1 < val3)
				{
					mid = val1;
					max = val3;
				}
				else
				{
					mid = val3;
					max = val1;
				}
			}
		}
		if (val3 < val1)
		{
			if (val3 < val2)
			{
				min = val3;
				if (val2 < val1)
				{
					mid = val2;
					max = val1;
				}
				else
				{
					mid = val1;
					max = val2;
				}
			}
		}
		cout << "Yours values in order: " << min << " " << mid << " " << max << '\n';
	}


}

void ThreeStrings()
{
	string val1 = "";
	string val2 = "";
	string val3 = "";

	string min = "";
	string mid = "";
	string max = "";

	cout << "Input 3 strings values: ";

	while (cin >> val1 >> val2 >> val3)
	{// 1 3 2

		if (val1 < val2) // 1 < 3
		{
			if (val1 < val3) // 1 < 2
			{
				min = val1; //true 
				if (val2 < val3)
				{// false
					mid = val2;
					max = val3;
				}
				else
				{
					mid = val3;
					max = val2;
				}
			}
		}
		if (val2 < val1)
		{
			if (val2 < val3)
			{
				min = val2;
				if (val1 < val3)
				{
					mid = val1;
					max = val3;
				}
				else
				{
					mid = val3;
					max = val1;
				}
			}
		}
		if (val3 < val1)
		{
			if (val3 < val2)
			{
				min = val3;
				if (val2 < val1)
				{
					mid = val2;
					max = val1;
				}
				else
				{
					mid = val1;
					max = val2;
				}
			}
		}
		cout << "Yours values in order: " << min << " " << mid << " " << max << '\n';
	}
}

void IsEven()
{
	int val = 0;

	cout << "Input an integer to check if its an even number: ";

	while (cin >> val)
	{
		if (val % 2 == 0)
		{
			cout << val << " is an even number\n";
		}
		else
		{
			cout << val << " is an odd number\n";
		}
		cout << "\nInput an integer to check if its an even number: ";
	}
}

void OutputStringtToNumber()
{

}

void Money()
{
	double total = 0;

	int pennies = 0;
	int nickles = 0;
	int dimes = 0;
	int quarters = 0;
	int halfs = 0;
	int dollars = 0;

	cout << "How many pennies do you have: ";
	cin >> pennies;
	total += pennies;

	cout << "How many nickles do you have: ";
	cin >> nickles;
	total += nickles*5;

	cout << "How many dimes do you have: ";
	cin >> dimes;
	total += dimes*10;

	cout << "How many quarters do you have: ";
	cin >> quarters;
	total += quarters*25;

	cout << "How many halves do you have: ";
	cin >> halfs;
	total += halfs*50;

	cout << "How many dollars do you have: ";
	cin >> dollars;
	total += dollars*100;

	cout << "You have: \n";

	if (pennies == 1)
		cout << pennies << " penny\n";
	else
		cout << pennies << " pennies\n";

	if (nickles == 1)
		cout << nickles << " nickle\n";
	else
		cout << nickles << " nickles\n";
	
	if (dimes == 1)
		cout << dimes << " dime\n";
	else
		cout << dimes << " dimes\n";
	
	if (quarters == 1)
		cout << quarters << " quarter\n";
	else
		cout << quarters << " quarters\n";
	
	if (halfs == 1)
		cout << halfs << " half\n";
	else
		cout << halfs << " halfs\n";
	
	if (dollars == 1)
		cout << dollars << " dollar\n";
	else
		cout << dollars << " dollars\n";

	cout << "In total you have: " << total / 100;
}
