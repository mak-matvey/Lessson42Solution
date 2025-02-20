#include "test.h"

void test01()
{
	int matrix[][N]
	{ {1, 2, 3, 4, 5},
	{2, 3, 4, 5, 6},
	{3, 4, 5, 6, 7},
	{4, 5, 6, 7, 8},
	{5, 6, 7, 8, 9} };

	int expected = 0;
	int actual = count_zero_elements(matrix);

	string msg = expected == actual ? "Pass." : "Fail.";

	cout << "Test01 - " << msg << endl;
	cout << "--------------" << endl;
}

void test02()
{
	int matrix[][N]
	{ {1, 2, 3, 4, 5},
	{2, 3, 4, 5, 6},
	{3, 4, 5, 6, 7},
	{4, 5, 6, 7, 8},
	{5, 6, 7, 8, 0} };

	int expected = 1;
	int actual = count_zero_elements(matrix);

	string msg = expected == actual ? "Pass." : "Fail.";

	cout << "Test02 - " << msg << endl;
	cout << "--------------" << endl;
}

void test03()
{
	int matrix[][N]
	{ {1, 2, 3, 4, 0},
	{2, 3, 4, 5, 0},
	{3, 4, 5, 6, 0},
	{4, 5, 6, 7, 0},
	{5, 6, 7, 8, 0} };

	int expected = 5;
	int actual = count_zero_elements(matrix);

	string msg = expected == actual ? "Pass." : "Fail.";

	cout << "Test03 - " << msg << endl;
	cout << "--------------" << endl;
}

void test04()
{
	int matrix[][N]
	{ {0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0} };

	int expected = 25;
	int actual = count_zero_elements(matrix);

	string msg = expected == actual ? "Pass." : "Fail.";

	cout << "Test04 - " << msg << endl;
	cout << "--------------" << endl;
}