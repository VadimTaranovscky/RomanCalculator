#include <stdlib.h>
#include "stdafx.h"
#include <string>
#include <sstream>
#include <iostream>
#include <fstream>

using namespace std;

class MyClass
{
public:
	int getRomanConvertToInt();
	void outputInt(int num);
	char getOperator();
	int Calculation(int num1, int num2, char oper);
	void outputRomanNumeralResult(int number, char oper);
	void LoadToTheFile();
	int NoInteractive();
	int ConvertNoInteractive1();
	int ConvertNoInteractive2();
	int NointeractiveCalculation(char znak);
	void outputRomanNumeralResult2(int noint, char oper);
	void NoInteractiveLoad();
};
int main();

int numMs = 0, numDs = 0, numCs = 0, numLs = 0, numXs = 0, numVs = 0, numIs = 0;
int numMs1 = 0, numDs1 = 0, numCs1 = 0, numLs1 = 0, numXs1 = 0, numVs1 = 0, numIs1 = 0;
char ch;
string s1;
string s2;
int num10;
int num20;

int MyClass::NoInteractive() {
	string str;
	ifstream file("E:\\курсачи\\Курсач 3\\Calculator\\NoInteraciveInput.txt");

	while (getline(file, str))
	{
		//cout <<"Содержимое файла: "<< str << endl;
	}
	auto pos = str.find(" ");
	if (pos != string::npos)
	{
		 s1 = str.substr(0, pos);
		 s2 = str.substr(pos + 1);
		/*cout << "Number1: " << s1 << endl;
		cout << "Number2: " << s2 << endl;*/

	}
	
	
	return 0;
}
int MyClass::ConvertNoInteractive1() {
	if (s1 == "M")
		num10 += 1000;
	else if (s1 == "D")
		num10 += 500;
	else if (s1 == "C")
		num10 += 100;
	else if (s1 == "L")
		num10 += 50;
	else if (s1 == "X")
		num10 += 10;
	else if (s1 == "V")
		num10 += 5;
	else if (s1 == "I")
		num10 += 1;
	return num10;
}
int MyClass::ConvertNoInteractive2() {
	if (s2 == "M")
		num20 += 1000;
	else if (s2 == "D")
		num20 += 500;
	else if (s2 == "C")
		num20 += 100;
	else if (s2 == "L")
		num20 += 50;
	else if (s2 == "X")
		num20 += 10;
	else if (s2 == "V")
		num20 += 5;
	else if (s2 == "I")
		num20 += 1;
	
	return num20;
}
int MyClass::NointeractiveCalculation(char znak) {
	int NoInteractiveResult;
	if (znak == '+')
	{
		NoInteractiveResult = num10 + num20;
	}

	else if (znak == '*')
	{
		NoInteractiveResult = num10*num20;
	}

	else if (znak == '-')
	{
		NoInteractiveResult = num10 - num20;
	}
	else if (znak == '/') {
		NoInteractiveResult = num10 / num20;
	}
	return NoInteractiveResult;
}
void MyClass::outputRomanNumeralResult2(int NoInteractiveResult, char oper)
{
	int x = 0;
	while (NoInteractiveResult >= 1000)
	{
		numMs1 = NoInteractiveResult / 1000;
		NoInteractiveResult %= 1000;
	}

	while ((NoInteractiveResult < 1000) && (NoInteractiveResult >= 500))
	{
		numDs1 = NoInteractiveResult / 500;
		NoInteractiveResult %= 500;
	}

	while ((NoInteractiveResult < 500) && (NoInteractiveResult >= 100))
	{
		numCs1 = NoInteractiveResult / 100;
		NoInteractiveResult %= 100;
	}

	while ((NoInteractiveResult < 100) && (NoInteractiveResult >= 50))
	{
		numLs1 = NoInteractiveResult / 50;
		NoInteractiveResult %= 50;
	}

	while ((NoInteractiveResult < 50) && (NoInteractiveResult >= 10))
	{
		numXs1 = NoInteractiveResult / 10;
		NoInteractiveResult %= 10;
	}

	while ((NoInteractiveResult < 10) && (NoInteractiveResult >= 5))
	{
		numVs1 = NoInteractiveResult / 5;
		NoInteractiveResult %= 5;
	}

	while ((NoInteractiveResult < 5) && (NoInteractiveResult >= 1))
	{
		numIs1 = NoInteractiveResult / 1;
		NoInteractiveResult %= 1;
	}
}
void MyClass::NoInteractiveLoad() {
	ofstream fout;
	fout.open("E:\\курсачи\\Курсач 3\\Calculator\\NoInteractiveOutput.txt");
	int x = 0;
	while (x != numMs1)
	{
	fout << "M";
	x++;
	}

	x = 0;
	while (x != numDs1)
	{
	fout << "D";
	x++;
	}

	x = 0;
	while (x != numCs1)
	{
	fout << "C";
	x++;
	}

	x = 0;
	while (x != numLs1)
	{
	fout << "L";
	x++;
	}

	x = 0;
	while (x != numXs1)
	{
		fout << "X";
		x++;
	}

	x = 0;
	while (x != numVs1)
	{
		fout << "V";
		x++;
	}

	x = 0;
	while (x != numIs1)
	{
	fout << "I";
	x++;
	}
	cout << "Success!!!" << endl;
}

int MyClass::getRomanConvertToInt()
{
	int num = 0;

	cout << "Enter Roman Numeral Number: ";

	cin.get(ch);

	while (ch != '\n')
	{
		if (ch == 'M')
			num += 1000;
		else if (ch == 'D')
			num += 500;
		else if (ch == 'C')
			num += 100;
		else if (ch == 'L')
			num += 50;
		else if (ch == 'X')
			num += 10;
		else if (ch == 'V')
			num += 5;
		else if (ch == 'I')
			num += 1;
		else
			cout << ch << " Not a roman number \n";

		cin.get(ch);
	}

	return num;
}
void MyClass::outputRomanNumeralResult(int RomanResult, char oper)
{
	int x = 0;
	while (RomanResult >= 1000)
	{
		numMs = RomanResult / 1000;
		RomanResult %= 1000;
	}

	while ((RomanResult < 1000) && (RomanResult >= 500))
	{
		numDs = RomanResult / 500;
		RomanResult %= 500;
	}

	while ((RomanResult < 500) && (RomanResult >= 100))
	{
		numCs = RomanResult / 100;
		RomanResult %= 100;
	}

	while ((RomanResult < 100) && (RomanResult >= 50))
	{
		numLs = RomanResult / 50;
		RomanResult %= 50;
	}

	while ((RomanResult < 50) && (RomanResult >= 10))
	{
		numXs = RomanResult / 10;
		RomanResult %= 10;
	}

	while ((RomanResult < 10) && (RomanResult >= 5))
	{
		numVs = RomanResult / 5;
		RomanResult %= 5;
	}

	while ((RomanResult < 5) && (RomanResult >= 1))
	{
		numIs = RomanResult / 1;
		RomanResult %= 1;
	}

	cout << "\n" << "Number1 " << oper << " Number2 = ";

	while (x != numMs)
	{
		cout << "M";
		x++;
	}

	x = 0;
	while (x != numDs)
	{
		
		cout << "D";
		x++;
	}

	x = 0;
	while (x != numCs)
	{
		
		cout << "C";
		x++;
	}

	x = 0;
	while (x != numLs)
	{
		
		cout << "L";
		x++;
	}

	x = 0;
	while (x != numXs)
	{
		
		cout << "X";
		x++;
	}

	x = 0;
	while (x != numVs)
	{
		
		cout << "V";
		x++;
	}

	x = 0;
	while (x != numIs)
	{
		
		cout << "I";
		x++;
	}

	cout << "\n";
}

void MyClass::outputInt(int num)
{
	cout<<"Number"<< " = " << num << "\n";
}

char MyClass::getOperator()
{
	char znak;

	cout << "Enter an operator (+, -, *,/): ";
	cin >> znak;

	return znak;
}

int MyClass::Calculation(int num1, int num2, char znak)
{
	int otvet;
	if (znak == '+')
	{
		otvet = num1 + num2;
	}

	else if (znak == '*')
	{
		otvet = num1*num2;
	}

	else if (znak == '-')
	{
		otvet = num1 - num2;
	}
	else if (znak == '/') {
		otvet = num1 / num2;
	}
	return otvet;
	
}

void MyClass::LoadToTheFile() {
	int x = 0;
	ofstream fout("E:\\курсачи\\Курсач 3\\Calculator\\output.txt");

	while (x != numMs)
	{
		fout << "M";
		x++;
	}

	x = 0;
	while (x != numDs)
	{
		fout << "D";
		x++;
	}

	x = 0;
	while (x != numCs)
	{
		fout << "C";
		x++;
	}

	x = 0;
	while (x != numLs)
	{
		fout << "L";
		x++;
	}

	x = 0;
	while (x != numXs)
	{
		fout << "X";
		x++;
	}

	x = 0;
	while (x != numVs)
	{
		fout << "V";
		x++;
	}

	x = 0;
	while (x != numIs)
	{
		fout << "I";
		x++;
	}
	cout << "Success!!!" << endl;
}

int main()
{
	setlocale(LC_ALL, "russian");
	MyClass obj1;
	MyClass obj2;
	MyClass obj3;
	MyClass obj4;
	MyClass obj5;
	MyClass obj6;
	MyClass obj7;
	MyClass obj8;
	MyClass obj9;
	MyClass obj10;
	MyClass obj11;
	MyClass obj12;
	MyClass obj13;
	MyClass obj14;
	MyClass obj15;
	MyClass obj16;
	int num1, num2, result;
	char znak;
	int k;
	int result2;
	cout << "<----------Short instruction---------->" << endl;
	cout << "M (=1000), D (= 500), C (= 100), L (= 50), X (= 10), V (= 5), I (= 1)\n";
	num1 = obj1.getRomanConvertToInt();
	obj2.outputInt(num1);
	num2 = obj3.getRomanConvertToInt();
	obj4.outputInt(num2);
	znak = obj5.getOperator();
	result = obj6.Calculation(num1, num2, znak);
	obj7.outputRomanNumeralResult(result, znak);
	obj8.outputInt(result);
		cout << "1. Output in file\n";
		cout << "2. No Interactive\n";
		cout << "3. Exit\n";
		cout << "Selection: ";
		cin >> k;
		switch (k) {
		case 1:
			obj9.LoadToTheFile();
			break;
		case 2:
			obj10.NoInteractive();
			obj11.ConvertNoInteractive1();
			obj12.ConvertNoInteractive2();
			znak = obj13.getOperator();
			result2 = obj14.NointeractiveCalculation(znak);
			obj15.outputRomanNumeralResult2(result2,znak);
			obj16.NoInteractiveLoad();
			break;
		case 3:
			break;
		default:
			cout << "Error!!!!\n";
			break;
		}

	system("pause");
	return 0;
}


