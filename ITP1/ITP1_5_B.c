#include <stdio.h>

void draw_line(int width, int is_middle)
{
	for (int i = 0; i < width; i++)
	{
		if (is_middle && (i != 0 && i != width - 1))
		{
			printf(".");
		}
		else
		{
			printf("#");
		}
	}
	printf("\n");
}

void draw_regtangle(int height, int width)
{
	for (int i = 0; i < height; i++)
	{
		int is_middle = (i != 0 && i != height - 1);
		draw_line(width, is_middle);
	}
	printf("\n");
}

int main(void)
{
	int height;
	int width;

	while (1)
	{
		scanf("%d %d", &height, &width);
		if (!height && !width)
		{
			break;
		}
		draw_regtangle(height, width);
	}
	return (0);
}
