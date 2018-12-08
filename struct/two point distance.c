
#include <stdio.h>
#include <math.h>

struct point
{
	int x;
	int y;
};

int main()
{
	struct point po1, po2;
	double distance;

	fputs("point1 pos: ", stdout);
	scanf("%d %d", &po1.x, &po1.y);

	fputs("point2 pos: ", stdout);
	scanf("%d %d", &po2.x, &po2.y);

	distance = sqrt((double)((po1.x - po2.x)*(po1.x - po2.x) + (po1.y - po2.y)*(po1.y - po2.y)));

	printf("두 점 거리: %g \n", distance);
	return 0;
}