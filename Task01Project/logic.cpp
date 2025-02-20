#include "logic.h"

string get_line_with_zero(int matrix[N][N])
{
	string lines = "";

	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			if (matrix[j][i] == 0) {
				lines += to_string(j + 1) + " ";
				break;
			}
		}
	}

	return lines;
}