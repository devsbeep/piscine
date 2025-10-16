#include <unistd.h>
int main(int ac, char **ag)
{
	int i;
	int repeat;

	if (ac == 2)
	{
		i = 0;
		while (ag[1][i])
		{
			if (ag[1][i] <= 'Z' && ag[1][i] >= 'A')
				repeat = ag[1][i] - 'A' + 1;
			else if (ag[1][i] <= 'z' && ag[1][i] >= 'a')
				repeat = ag[1][i] - 'a' + 1;
			else
				repeat = 1;
			while (repeat--)
				write(1, &ag[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
