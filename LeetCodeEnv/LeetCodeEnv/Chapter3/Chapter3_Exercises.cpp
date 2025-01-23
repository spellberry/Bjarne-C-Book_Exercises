#include "../PPP.h"
#include "Chapter3_Exercises.h"

void SplitString()
{
	string myStr = "";

	while (cin >> myStr)
	{
		for (int i = 0; i < myStr.length(); i++)
		{
			cout << myStr[i] << " " << int(myStr[i]) << '\n';
		}
		cout << '\n';
	}
}

void Median()
{
	vector<double> temps; // temperatures

	for (double temp; cin >> temp;) // read into temp
		temps.push_back(temp); // put temp into vector

	// compute mean temperature:
	double sum = 0;
	for (double x : temps)
		sum += x;

	if (!temps.empty())
	{
		cout << "Average temperature: " << sum / temps.size() << '\n';

		int middleIndex = temps.size() / 2;

		// compute median temperature:
		ranges::sort(temps); // sort the temperatures
		cout << "All temps: ";
		for (auto temp : temps)
		{
			cout << temp << ", ";
		}
		if(temps.size()%2 == 0)
		{
			cout << "Median: " << (temps[middleIndex - 1] + temps[middleIndex]) / 2;
		}
		else
		{
			
			cout << "Median: " << temps[middleIndex];
		}
	}
}

void Distances()
{
	vector<double> vec{};

	double totalDist = 0.0;
	double biggestDist = std::numeric_limits<double>::lowest();
	double smallestDist = std::numeric_limits<double>::max();

	for (double val; cin >> val;)
	{
		vec.push_back(val);

		double temp = 0.0;
		temp += val;
		totalDist += temp;

		if (val > biggestDist) biggestDist = val;
		if (val < smallestDist) smallestDist = val;

		cout << val << '\n';

	};

	cout << "Total distance: " << totalDist << '\n';
	cout << "Smallest distance: " << smallestDist << '\n';
	cout << "Biggest distance: " << biggestDist << '\n';

}

void GuessingGame()
{
	int low = 1;
	int high = 100;
	int mid = 0;

	char answer = ' ';
	int question = 0;

	cout << "Think of a number between 1 and 100 and I'll try to guess it\n";

	while(low <= high)
	{
		mid = (high + low) / 2;
		cout << "Is your number " << mid << " ? Type 'Y' if I guessed it, 'L' for lower or 'H' for higher.\n";
		cin >> answer;

		if(answer == 'y' || answer =='Y')
		{
			question++;
			cout << "I got it! And it took me only " << question << " questions!";
			break;
		}
		else if(answer == 'H' || answer == 'h')
		{
			low = mid + 1;
			question++;
		}
		else if(answer == 'L' || answer == 'l')
		{
			high = mid - 1;
			question++;
		}
	}
}

void Calculator()
{
	double val1 = 0;
	double val2 = 0;
	char oper = ' ';

	cout << "An attempt at a calculator. Use it as you would a normal calculator\n";
	while (cin >> val1 >> oper >> val2)
	{
		switch (oper)
		{
		case '+':
			cout << val1 + val2 << '\n';
			break;
		case '-':
			cout << val1 - val2 << '\n';
			break;
		case '*':
			cout << val1 * val2 << '\n';
			break;
		case '/':
			cout << val1 / val2 << '\n';
			break;
		default:
			cout << "I didn't get that. Try again\n";
			break;
		}
	}
}

void NumberToString()
{
	int val = 0;
	string number = " ";

	vector<string> vec{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	cout << "Type the digit version and srtring version of a number between 0 and 9 (can be different numbers): ";
	while (cin >> val >> number)
	{
		if (val >= vec.size() || val < 0)
		{
			cout << "Illegal input. Try again.\n";
		}
		else
		{
			cout << val << " " << vec[val] << '\n';
			for(int i = 0; i < vec.size(); i++)
			{
				if (vec[i] == number) cout << number << " " << i << '\n';
			}
		}
	}
}

void CalculatorV2()
{
	double val1 = 0;
	double val2 = 0;

	string number1 = " ";
	string number2 = " ";

	vector<string> vec{ "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };

	char oper = ' ';

	cout << "A weird ass calculator. You can only type in single digits but you can type them with numbers or with letters (e.g. 7 or 'seven')\n";
	while (cin)
	{
		switch (oper)
		{
		case '+':
			cout << val1 + val2 << '\n';
			break;
		case '-':
			cout << val1 - val2 << '\n';
			break;
		case '*':
			cout << val1 * val2 << '\n';
			break;
		case '/':
			cout << val1 / val2 << '\n';
			break;
		default:
			cout << "I didn't get that. Try again\n";
			break;
		}
	}
}

void EmperorStory()
{
	int currentSquare = 1;
	double totalGrains = 0;
	double squareRice = 1;

	double reward = 1000;

	while(currentSquare < 64)
	{
		cout << "\nNumber of squares: " << currentSquare << '\n';
		cout << "Grains on current square: " << squareRice << '\n';
		totalGrains += squareRice;
		squareRice *= 2;

		currentSquare++;

		cout << "Current total grains: " << totalGrains << '\n';
	}
}

void RockPaperScissors()
{
	vector<char> vec{ 'p','r', 's' };
	char move = ' ';
	int nextMove = 0;
	char computerMove = ' ';
	int r = 0, p = 0, s = 0;

	cout << "Enter the numbers 1,2 and 3 in any order you want";
	cout << "Let's play a game of rock paper scissors. Ready? 3... 2... 1...";

	while(cin >> move)
	{
		if(nextMove < vec.size())
		{
			computerMove = vec[nextMove];
			nextMove++;
		}
		else
		{
			nextMove = nextMove % vec.size();
		}
		if(computerMove == move)
		{
			cout << "Tie. Let's try again. 3, 2, 1...";
		}
		cout << "You picked " << move << '\n';
		cout << "And I picked " << computerMove << '\n';
		switch(move)
		{
		case 'r':
			switch (computerMove)
			{
			case 'p':
				cout << "I win! Better luck next time\n";
				break;
			case 's':
				cout << "Ah, you got me, you win!\n";
				break;
			default:
				break;
			}
			break;
		case 'p':
			switch (computerMove)
			{
			case 's':
				cout << "I win! Better luck next time\n";
				break;
			case 'r':
				cout << "Ah, you got me, you win!\n";
				break;
			default:
				break;
			}
			break;

		case 's':
			switch (computerMove)
			{
			case 'r':
				cout << "I win! Better luck next time\n";
				break;
			case 'p':
				cout << "Ah, you got me, you win!\n";
				break;
			default:
				break;
			}
			break;
		}
	}
}

void FindPrimeNumbers()
{
	vector<int> primes{2};

	for(int i = 3; i < 100; i++)
	{
		if (IsPrime(i, primes))
			primes.push_back(i);
	}

}

bool IsPrime(int n, vector<int> vec)
{
	for(int i = 0; i < vec.size(); i++)
	{
		if (n % vec[i] == 0)return false;
	}
	return true;
}

void SieveAndEratosthenes()
{
	int n = 100;

	vector<int> numbers(n+1, 1);
	

	for(int p = 2; p <= n; p++)
	{
		for(int i = p*p; i <= n; i+=p)
		{
			numbers[i] = 0;
		}
	}

	for(int i = 2; i < numbers.size(); i++)
	{
		if(numbers[i] != 0)
		cout << i << '\n';
	}
}
