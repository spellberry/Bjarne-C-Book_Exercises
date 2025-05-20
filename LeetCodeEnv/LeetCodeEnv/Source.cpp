////#include <unordered_map>
////#include <vector>
////#include <string>
////#include <iostream>
////#include <deque>
////#include <algorithm>
////
////#include "Exercises.h"
////#include "TwoSum/TwoSum-Brute.h"
////#include "TwoSum/TwoSum-TwoPassHash.h"
////#include "TwoSum/TwoSum-OnePass.h"
////#include "RomanToInt/RomanToInt.h"
////
////vector<int> plusOne(vector<int>& digits)
////{
////	for (int i = digits.size() - 1; i >= 0; i--)
////	{
////		if (digits[i] == 9)
////		{
////			digits[i] = 0;
////			digits.insert(digits.begin(), 1);
////		}
////		else
////		{
////			digits[i] += 1;
////			return digits;
////		}
////	}
////
////	return digits;
////
////	//int n = digits.size();
//// //       for(int i = n-1; i >= 0; i--){
//// //           if(i == n-1)
//// //               digits[i]++;
//// //           if(digits[i] == 10){
//// //               digits[i] = 0;
//// //               if(i != 0){
//// //                   digits[i-1]++;
//// //               }
//// //               else{
//// //                   digits.push_back(0);
//// //                   digits[i] = 1;
//// //               }
//// //           }
//// //       }
//// //       return digits;
////
////}
////
////bool isPalindrome(std::string palindrome)
////{
////	//removing any spaces in the string and making all characters uppercase
////	palindrome.erase(std::remove(palindrome.begin(), palindrome.end(), ' '), palindrome.end());
////	std::transform(palindrome.begin(), palindrome.end(), palindrome.begin(), ::toupper);
////
////	//creating a deque that will hold the separate letters of the string
////	std::deque<char> d1(palindrome.begin(), palindrome.end());
////
////	//creating a second deque to which we will copy the reversed version of d1
////	std::deque<char> d2;
////
////	//copying the characters from d1 in the reversed order
////	std::copy(d1.begin(), d1.end(), std::front_inserter(d2));
////
////	//if d1==d2 we have a palindrome
////	if (d1 == d2)
////	{
////		std::cout << "It's a palindrome" << "\n";
////		return true;
////	}
////
////	std::cout << "It's not a palindrome" << "\n";
////
////	return false;
////}
//
////int main()
////{
////	/*OnePassSoltuion newSolution;
////	std::vector<int> nums {2,7,11,15} ;
////
////	std::vector<int> solution{};
////
////	solution = newSolution.twoSum(nums, 18);
////
////	if (!solution.empty())
////	{
////		std::cout << solution[0] << " ,";
////		std::cout << solution[1] << "\n";
////	}*/
////
////	//=============================
////
////
////	//HalfTriangle();
////	//HalfTriangleReversed();
////	//HalfTriangleFlipped();
////	//HalfTriangleReversedFlipped();
////	//FullTriangle();
////	//FullTriangleReversed();
////	//HalfDiamond();
////	//FlippedHalfDiamond();
////
////	//std::cout << RomanToInt("VIII");
////	/*vector<int> digits {9, 9};
////	vector <int> answer = plusOne(digits);*/
////
////	//std::string myString = "tits";
////	//std::vector <char> charVec (myString.begin(), myString.end());
////
////	//std::cout << "[";
////	//for(auto letter : charVec)
////	//{
////	//	 std::cout << letter << " ";
////	//}
////	//std::cout << "]" << "\n";
////
////	//isPalindrome("nonon");
////
////
////	return 0;
////}
//
////#include "Exercises.h"
//#include "PPP.h"
//#include <cctype>
//#include "Chapter2/Chapter2.h"
//#include "Chapter3/Chapter3_Drill.h"
//#include "Chapter3/Chapter3_Exercises.h"
//#include "Chapter4/Chapter4_Exercises.h"
//
////cm to inch converter
//void InchToCm()
//{
//	constexpr double cm_per_inch = 2.54; // number of centimeters in an inch
//
//	double length = 1; // length in inches or centimeters
//	char unit = ' ';
//	cout << "Please enter a length followed by a unit (c or i):\n";
//
//	while (cin >> length >> unit)
//	{
//		if (unit == 'i')
//			cout << length << "in == " << length * cm_per_inch << "cm\n";
//		else if (unit == 'c')
//
//			cout << length << "cm == " << length / cm_per_inch << "in\n"; \
//		else
//			cout << "Invalid input. Please try again\n";
//	}
//}
//
//void CurrencyConverter()
//{
//	constexpr double dollar_per_yen = 0.0064;
//	constexpr double dollar_per_kroner = 0.088;
//	constexpr double dollar_per_pound = 1.25;
//
//	double amount = 1; // length in inches or centimeters
//	char currency = ' ';
//	cout << "Please enter an amount followed by a type of currency (y, k or p):\n";
//
//	while (cin >> amount >> currency)
//	{
//		if (currency == 'y')
//			cout << amount << "y == " << amount * dollar_per_yen << "$\n";
//		else if (currency == 'k')
//			cout << amount << "k == " << amount * dollar_per_kroner << "$\n";
//		else if (currency == 'p')
//			cout << amount << "p == " << amount * dollar_per_pound << "$\n";
//		else
//			cout << "Invalid input. Please try again\n";
//	}
//}
//
//void Square()
//{
//	int x = 0;
//	cout << "Input a number to put to the power of 2: ";
//	cin >> x;
//
//	int y = 0;
//	for (int i = 0; i < x; i++)
//	{
//		y += x;
//	}
//
//	cout << "Result: " << y;
//}
//class Bad_area { };
//
//int area(int length, int width)
//// calculate area of a rectangle;
//// throw a Bad_area exception in case of a bad argument
//{
//	if (length <= 0 || width <= 0)
//		throw Bad_area{};
//	return length * width;
//}
//
//int framed_area(int x, int y)
//// calculate area within frame
//{
//	constexpr int frame_width = 2;
//
//	if (x - frame_width <= 0 || y - frame_width <= 0)
//		error("non−positive area() argument called by framed_area()");
//
//	return area(x - frame_width, y - frame_width);
//}
//
//void test(int x, int y, int z)
//{
//	int area1 = area(x, y);
//	int area2 = framed_area(y, z);
//	int area3 = framed_area(y, z);
//	double ratio = area1 / area3;
//}
//
//
//
//int main()
//{
//	//cout << "Enter the name of the person you want to write to: ";
//	//string first_name; // first_name is a variable of type string
//	//string friendName;
//	//int friendAge = 0;
//	//cin >> first_name; // read characters into first_name
//	//cout << "\nOpaa, " << first_name << ",\n";
//	//cout << "Ko pravish be? Kak e polojenieto, jiv li si? ";
//	//cout << "Nqma da luja, kinda mi lipsvash, otdavna ne sme se vijdali, ama kvo da pravish, taka sme chujdencite xD\n";
//	//cout << "Type in the name of another friend: ";
//	//cin >> friendName;
//	//cout << "\nAbe, vijdal li si se s " << friendName << " ?";
//	//cout << "Enter you friend's age: ";
//	//cin >> friendAge;
//	//cout << "\n Inache i ti odurte, stana na 21, da si mi jiv i zdrav. Leka poleka porastvame, jivota si vurvi. Malko e strashno, no puk e zabavno (v nqkva chast ot vremeto xD). \n";
//	//cout << "Pozdravi, \nDancho\n";
//	//double d = 0;
//	//while (cin >> d) { // repeat the statements below as long as we type in numbers
//	//	int i = d; // try to squeeze a floating-point value into an integer value
//	//	char c = i; // try to squeeze an integer into a char
//	//	cout << "d==" << d // the original double
//	//		<< " i==" << i // double converted to int
//	//		<< " c==" << c // int value of char
//	//		<< " char(" << c << ")\n"; // the char
//	//}
//	//Drill_Main();
//
//	//double c = 0; // declare input variable
//	//char type = ' ';
//	//cin >> c >> type; // retrieve temperature to input variable
//	//double k = CelsiusToKelvin(c, type); // convert temperature
//	//cout << k << '\n' ;
//
//	cout << "Please enter expression (we can handle +, −, *, and /)\n";
//	cout << "add an x to end expression (e.g., 1+2*3x): ";
//	int lval = 0;
//	int rval = 0;
//	cin >> lval; // read left-most operand
//	if (!cin)
//		error("no first operand");
//	for (char op; cin >> op;) { // read operator and right-hand operand repeatedly
//		if (op != 'x')
//			cin >> rval;
//		if (!cin)
//			error("no second operand");
//		switch (op) {
//		case '+':
//			lval += rval; // add: lval = lval + rval
//			break;
//		case '−':
//			lval -= rval; // subtract: lval = lval - rval
//			break;
//		case '*':
//			lval *= rval; // multiply: lval = lval * rval
//			break;
//			case '/':
//				lval /= rval; // divide: lval = lval / rval
//				break;
//			default: // not another operator: print result
//				cout << "Result: " << lval << '\n';
//				return 0;
//		}
//	}
//	error("bad expression");
//
//
//}
//
//
////Type integer and a bunch of operations will happen and the output will show the results
//
////bool shouldStop = false;
////	bool validInput = false;
////	while (!shouldStop)
////	{
////		cout << "Please enter an integer value: ";
////		int n = 0;
////		char yesOrNo = 'M';
////
////		cin >> n;
////
////		if (cin.fail()) {
////            cout << "Invalid input. \n\n";
////            cin.clear();             // Clear the error state
////            cin.ignore(10000, '\n'); // Discard invalid input
////            continue;                // Restart the loop
////        }
////
////		cout << "n == " << n
////			<< "\nn+1 == " << n + 1
////			<< "\nthree times n == " << 3 * n
////			<< "\ntwice n == " << n + n
////			<< "\nn squared == " << n * n
////			<< "\nhalf of n == " << n / 2
////			<< "\nmodulo of 2 == " << n % 2
////			<< "\nsquare root of n == " << sqrt(n)
////			<< '\n';
////
////			cout << "Would you like to stop the program? (type Y/N and press enter) ";
////		while (!validInput)
////		{
////			cin >> yesOrNo;
////			if (yesOrNo == 'Y' || yesOrNo == 'y')
////			{
////				shouldStop = true;
////				validInput = true;
////			}
////
////			else if (yesOrNo == 'N' || yesOrNo == 'n')
////			{
////				shouldStop = false;
////				validInput = true;
////			}
////			else
////			{
////				validInput = false;
////				cout << "Invalid input. Please type Y if you want to exit or N if you wish to continue. ";
////			}
////		}
////		validInput = false;
////	}




//
// This is example code from Chapter 6.7 "Trying the second version" of
// "Software - Principles and Practice using C++" by Bjarne Stroustrup
//

/*
	This file is known as calculator02buggy.cpp

	I have inserted 5 errors that should cause this not to compile
	I have inserted 3 logic errors that should cause the program to give wrong results

	First try to find an remove the bugs without looking in the book.
	If that gets tedious, compare the code to that in the book (or posted source code)

	Happy hunting!

*/

//#include "PPP.h"
//
////
//// This is example code from Chapter 6.6 "Trying the first version" of
//// "Software - Principles and Practice using C++" by Bjarne Stroustrup
////
//
////#include "./std_lib_facilities.h"
//
////------------------------------------------------------------------------------
//
//class Token {
//public:
//	char kind;        // what kind of token
//	double value;     // for numbers: a value 
//	Token(char ch)    // make a Token from a char
//		:kind(ch), value(0) { }
//	Token(char ch, double val)     // make a Token from a char and a double
//		:kind(ch), value(val) { }
//};
//
////------------------------------------------------------------------------------
///*
//Token get_token()    // read a token from cin
//{
//	char ch;
//	cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)
//
//	switch (ch) {
// //not yet   case ';':    // for "print"
// //not yet   case 'q':    // for "quit"
//	case '(': case ')': case '+': case '-': case '*': case '/':
//		return Token(ch);        // let each character represent itself
//	case '.':
//	case '0': case '1': case '2': case '3': case '4':
//	case '5': case '6': case '7': case '8': case '9':
//		{
//			cin.putback(ch);         // put digit back into the input stream
//			double val;
//			cin >> val;              // read a floating-point number
//			return Token('8',val);   // let '8' represent "a number"
//		}
//	default:
//		error("Bad token");
//	}
//}
//*/
////------------------------------------------------------------------------------
//
//class Token_stream {
//public:
//	Token get();            // get a Token
//	void putback(Token t);  // put a Token back
//private:
//	bool full{ false };      // is there a Token in the buffer?
//	Token buffer = { '0' };           // where we store a 'putback' Token
//};
//
//void Token_stream::putback(Token t)
//{
//	if (full) error("putback() into a full buffer");
//	buffer = t;         // copy t to buffer
//	full = true;        // buffer is now full
//}
//
//Token Token_stream::get()
//{
//	if (full) {
//		full = false;
//		return buffer;
//	}
//	char ch;
//	cin >> ch;
//
//	switch (ch) {
//	case ';':       // for "print"
//	case 'q':       // for "quit"
//	case '(':
//	case ')':
//	case '+':
//	case '-':
//	case '*':
//	case '/':
//		return Token{ ch };   // let each character represent itself
//	case '.':
//	case '0':
//	case '1':
//	case '2':
//	case '3':
//	case '4':
//	case '5':
//	case '6':
//	case '7':
//	case '8':
//	case '9':
//	{
//		cin.putback(ch);
//		double val;
//		cin >> val;
//		return Token{ '8', val };
//	}
//	default:
//		error("Bad Token");
//	}
//}
//
////------------------------------------------------------------------------------
//
//Token_stream ts;      // provides get() and putback()
//
////------------------------------------------------------------------------------
//
//double expression();  // read and evaluate a Expression
//
////------------------------------------------------------------------------------
//
//double term();        // read and evaluate a Term
//
////------------------------------------------------------------------------------
//
//double primary()     // read and evaluate a Primary
//{
//	Token t = ts.get();
//	switch (t.kind) {
//	case '(':    // handle '(' expression ')'
//	{
//		double d = expression();
//		t = ts.get();
//		if (t.kind != ')') error("')' expected");
//		return d;
//	}
//	case '8':            // we use '8' to represent a number
//		return t.value;  // return the number's value
//	default:
//		error("primary expected");
//	}
//}
////------------------------------------------------------------------------------
//
//int main()
//{
//	double val = 0; // version 3: ’q’ and ’;’ added
//	while (cin) {
//		Token t = ts.get();
//		if (t.kind == 'q') // ’q’ for “quit”
//			break;
//		if (t.kind == ';') // ’;’ for “print now”
//			cout << "=" << val << '\n';
//		else
//			ts.putback(t);
//		val = expression();
//	}
//
//}
//
////------------------------------------------------------------------------------
//
//double expression()
//{
//	double left = term();      // read and evaluate a Term
//	Token t = ts.get();        // get the next token
//	while (true) {
//		switch (t.kind) {
//		case '+':
//			left += term();    // evaluate Term and add
//			t = ts.get();
//			break;
//		case '-':
//			left -= term();    // evaluate Term and subtract
//			t = ts.get();
//			break;
//		default:
//			ts.putback(t);
//			return left;       // finally: no more + or -: return the answer
//		}
//	}
//}
//
////------------------------------------------------------------------------------
//
//double term()
//{
//	double left = primary();
//	Token t = ts.get();     // get the next token
//
//	while (true) {
//		switch (t.kind) {
//		case '*':
//			left *= primary();
//			t = ts.get();
//			break;
//		case '/':
//		{
//			double d = primary();
//			if (d == 0) error("divide by zero");
//			left /= d;
//			t = ts.get();
//			break;
//		}
//		default:
//			ts.putback(t);
//			return left;
//		}
//	}
//}
//
////------------------------------------------------------------------------------
