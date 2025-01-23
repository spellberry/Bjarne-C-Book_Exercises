#pragma once
#include <iostream>
#include <vector>
#include <algorithm>


/*

This prints out (for n = 4):
*
**
***
****

*/

void HalfTriangle()
{
	int n = 0;
	std::cout << "Input number of rows: ";
	std::cin >> n;
	std::cout << "\n";

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "*";
		}

		std::cout << " " << "\n";
	}
	std::cout << "\n";
}

/*

This prints out (for n = 4):
****
***
**
*

*/

void HalfTriangleReversed()
{
	int n = 0;
	std::cout << "Input number of rows: ";
	std::cin >> n;
	std::cout << "\n";

	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
	std::cout << "\n";
}

/*
This prints out (for n = 4):

   *
  **
 ***
****

*/

void HalfTriangleFlipped()
{
	int n = 0;
	std::cout << "Input number of rows: ";
	std::cin >> n;
	std::cout << "\n";

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			std::cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
	std::cout << "\n";
}

/*

This prints out (for n = 4):

****
 ***
  **
   *

*/

void HalfTriangleReversedFlipped()
{
	int n = 0;
	std::cout << "Input number of rows: ";
	std::cin >> n;
	std::cout << "\n";

	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= n - i; j++)
		{
			std::cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
	std::cout << "\n";
}

//   * 
//  ***
// *****
//*******

void FullTriangle()
{
	int n = 0;
	std::cout << "Input number of rows: ";
	std::cin >> n;
	std::cout << "\n";
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n-i; j++)
		{
			std::cout << " ";
		}

		for(int k = 1; k <= (2*i)-1; k++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
	std::cout << "\n";
}

/*

This prints out (n = 4):

*******
 *****
  ***
   *
*/

void FullTriangleReversed()
{
	int n = 0;
	std::cout << "Input number of rows: ";
	std::cin >> n;
	std::cout << "\n";

	for(int i = n; i >= 1; i--)
	{
		for(int j = 1; j <= n - i; j++)
		{
			std::cout << " ";
		}
		
		for(int k = 1; k <= (2*i)-1; k++)
		{
			std::cout << "*";
		}

		std::cout << "\n";

	}

	std::cout << "\n";
}

void HalfDiamond()
{
	int n = 0;
	std::cout << "Input number of rows: ";
	std::cin >> n;
	std::cout << "\n";

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "*";
		}

		std::cout << " " << "\n";
	}

	for (int i = n-1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}

	std::cout << "\n";
}

void FlippedHalfDiamond()
{
	int n = 0;
	std::cout << "Input number of rows: ";
	std::cin >> n;
	std::cout << "\n";

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++)
		{
			std::cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}	

	for (int i = n-1; i >= 1; i--)
	{
		for (int j = 1; j <= n - i; j++)
		{
			std::cout << " ";
		}

		for (int k = 1; k <= i; k++)
		{
			std::cout << "*";
		}

		std::cout << "\n";
	}
	std::cout << "\n";
}

void ShowRepeatedWords()
{
	std::string previous; // previous word; initialized to ""
	std::string current; // current word
	while (std::cin >> current) 
	{ // read a stream of words

		//remove any punctuation from words in sentence
		current.erase(std::remove_if(current.begin(), 
									   current.end(), 
									   [](char c) {return ispunct(c); }),
										current.end());

		//makem sure to turn the string to lower case lettters
		std::transform(current.begin(),
			current.end(),
			current.begin(),
			[](unsigned char c) {return std::tolower(c); });

		if (previous == current)
		{// check if the word is the same as last
			
			std::cout << "repeated word: " << current << '\n';
		}
		previous = current;
	}
}

