#include <unistd.h>
int main(int ac, char **ag)
{
	int i;

	i = 0;
	if(ac != 4)
	{
		write(1, "\n", 1);
		return (0);
	}
	if (ag[2][1] != '\0' || ag[3][1] != '\0')
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 0;
	while (ag[1][i] != '\0')
	{
		if (ag[1][i] == ag[2][0] )
			ag[1][i] = ag[3][0];
		write(1, &ag[1][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
