#include "../PPP.h"
#include "Chapter3_Drill.h"

vector<string> legalUnits{ "cm", "in", "m", "ft" };

double ConvertToMeters(double x, string unit)
{
	double meters;

	if (unit == "cm")
	{
		meters = x * CM_TO_METERS;
	}
	else if (unit == "in")
	{
		meters = x * INCH_TO_METERS;
	}
	else if (unit == "ft")
	{
		meters = x * FT_TO_METERS;
	}
	else
	{
		return meters = x;
	}

	return meters;
}
void Drill_Output(double x, double y)
{
	while(cin >> x >> y)
	{
		cout << x << " " << y << '\n';
	}
}

double Drill_Min(double x, double y)
{
	if (x < y)
		return x;
	else
		return y;
}

double Drill_Max(double x, double y)
{
	if (x > y)
		return x;
	else
		return y;
}

bool Drill_Equal(double x, double y)
{
	return x == y;
}

bool CheckLegalUnits(string unit)
{
	for(auto legalUnit : legalUnits)
	{
		if (legalUnit == unit)
			return true;
	}
	return false;
}

bool Drill_AlmostEqual(double x, double y)
{
	return abs(x - y) < doubleTolerance;
}

void Drill_Main()
{
	double x = 0; 
	double y = 0; 
	while (cin >> x >> y)
	{
		double smaller = Drill_Min(x, y);
		double bigger = Drill_Max(x, y);
		if (Drill_Equal(x, y))
			cout << "The numbers are equal.\n";
		else if(Drill_AlmostEqual(x, y))
		{
			cout << "The numbers are almost equal \n";
		}
		else
		{
			cout << "The smaller value is: " << smaller << '\n';
			cout << "The bigger value is: " << bigger << '\n';
		}
	}
}

void Drill_MainV2()
{
	double x = 0;
	double meters = 0;
	string unit = "";
	double sum = 0;

	double smallest = 0;
	double largest = 0;

	int count = 0;

	vector<double> values{};

	cout << "Enter a number followed by one of the metric unit types: cm, m, in, ft\n";

	while (cin >> x >> unit)
	{
		if (CheckLegalUnits(unit))
		{
			meters = ConvertToMeters(x, unit);
			if (count == 0)
			{
				cout << x << unit << " (" << meters << "m" << ")" << " is the largest and smallest so far. \n";
				smallest = meters;
				largest = meters;
			}

			if (meters > largest)
			{
				cout << x << unit << " (" << meters << "m" << ")" << " is the largest so far. \n";
				largest = meters;
			}
			else if (meters < smallest)
			{
				cout << x << unit << " (" << meters << "m" << ")" << " is the smallest so far. \n";
				smallest = meters;
			}
			count++;
			values.push_back(meters);
			sum += meters;
		}
		else
			cout << "The type of unit you typed in is illegal. Please try again. The legal units are: cm, m, in, ft\n";
	}

	cout << "Smallest value: " << smallest << " meters\n";
	cout << "Largest value: " << largest << " meters\n";
	cout << "Number of values: " << count << '\n';
	cout << "Sum of values: " << sum << " meters\n";

	cout << "All values: ";
	ranges::sort(values);
	for(auto value : values)
	{
		cout << value << ", ";
	}
}