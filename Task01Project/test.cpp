#include "test.h"

void print(int matrix[N][N], int expected, string name) {
	int actual = count_zero_elements(matrix);

	string msg = expected == actual ? "Pass." : "Fail.";

	cout << name << " - " << msg << endl;
	cout << "--------------" << endl;
}

void test01()
{
	int matrix[][N]
	{ {1, 2, 3, 4, 5},
	{2, 3, 4, 5, 6},
	{3, 4, 5, 6, 7},
	{4, 5, 6, 7, 8},
	{5, 6, 7, 8, 9} };

	int expected = 0;
	print(matrix, expected, "Test01");
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
	print(matrix, expected, "Test02");
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
	print(matrix, expected, "Test03");
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
	print(matrix, expected, "Test04");
}