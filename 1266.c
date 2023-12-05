#include <stdlib.h>

#define max(a, b) (a>b?a:b)

int minTimeToVisitAllPoints(int **points, int pointsSize, int *pointsColSize)
{
	int time = 0;

	for (int i = 1; i < pointsSize; i++) {
		int x = abs(points[i][0] - points[i - 1][0]);
		int y = abs(points[i][1] - points[i - 1][1]);

		time += max(x, y);
	}

	return time;
}


