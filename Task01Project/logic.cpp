#include "logic.h"

int count_zero_elements(int matrix[N][N])
{
	int count = 0;

	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			count += matrix[j][i] == 0 ? 1 : 0;
		}
	}

	return count;
}