#include "../PPP.h"
#include "Chapter4_Exercises.h"

double CelsiusToKelvin(double c, char type) // converts Celsius to Kelvin
{
	if (type == 'C' || type == 'c')
	{
		double k = c + 273.15;
		if (c < -273.15 || k < 0)
			error("Invalid temperature. Try again.");
		return k;
	}
	else if (type == 'K' || type == 'k')
	{
		double celsius = c - 273.15;
		if (c < 0 || celsius < -273.15)
			error("Invalid temperature. Try again.");
		return celsius;
	}

	return 0;
}

double FahrenheitToCelsius(double temp)
{
	double fahrenheit = (temp - 32) / 1.8;
	return fahrenheit;
}


void QuadraticEquation(double a, double b, double c)
{
	double d = pow(b, 2) - 4 * a * c;

	if (d < 0)
	{
		cout << "This equation has no solution" << '\n';
		return;
	}

	double x1 = (-b - sqrt(d)) / (2 * a);
	double x2 = (-b + sqrt(d)) / (2 * a);

	cout << "Discriminant: " << d << '\n';
	cout << "X1 = " << x1 << '\n';
	cout << "X2 = " << x2 << '\n';
}

void CalculateInputIntegers(int numberOfVals)
{
	cout << "Please enter some integers: ";
	int val = 0;
	int sum = 0;
	vector<int> values{};
	while(cin >> val)
	{
		values.push_back(val);
	}
	if(numberOfVals >= values.size())
	{
		cout << "Too few integers. Please try again.";
		return;
	}
	else
	{
		for(int i = 0; i < numberOfVals; i++)
		{
			sum += values[i];
		}
	}

	

	cout << "The sum of the first " << numberOfVals << " is: " << sum << '\n';
}

void CalculateInputDoubles(int numberOfVals)
{
	cout << "Please enter some integers: ";
	double val = 0;
	double sum = 0;
	vector<double> values{};
	vector<double> differences{};
	while (cin >> val)
	{
		values.push_back(val);
	}
	if (numberOfVals >= values.size())
	{
		cout << "Too few doubles. Please try again.";
		return;
	}
	else
	{
		for (int i = 0; i < numberOfVals; i++)
		{
			sum += values[i];
		}
	}

	for (int i = 0; i < values.size()-1; i++)
	{
		double diff = values[i + 1] - values[i];
		differences.push_back(diff);
	}

	cout << "The sum of the first " << numberOfVals << " is: " << sum << '\n';

	cout << "Here is a vector with differences of the adjacent values you input: ";
	for (auto val : differences)
	{
		cout << val << " ";
	}
}

void Fibonacci(int n)
{
	int previous = 1;
	int current = 1;

	for(int i = 0; i <= n; i++)
	{
		cout << current << " ";
		int next = current + previous;
		previous = current;
		current = next;
	}
}

void CowsAndBulls()
{
	vector<int> numbers{1, 2, 3 ,4};
	vector<int> playerNumber{};
	int guess = 0;

	cout << "Try to guess the 4 numbers: ";

	while(cin >> guess)
	{
		for(int i = 0; i < 3; i++)
		{
			playerNumber.push_back(guess);
		}
		for(int i = 0; i < numbers.size(); i++)
		{
			for(int j = 0; j < playerNumber.size(); j++)
			{
				if (numbers[i] == playerNumber[j] && i == j)
				{
					
				}
			}
		}
	}


}
