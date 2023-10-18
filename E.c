#include <stdio.h>

int main()
{
	int time = 0, upwardLift, downwardLift, steadyLift = 0;

	scanf("%d %d %d", &upwardLift, &downwardLift, &steadyLift);

	while (upwardLift < steadyLift || downwardLift > steadyLift)
	{
		upwardLift++;
		downwardLift--;
		time++;
	}

	if (upwardLift == steadyLift && downwardLift == steadyLift)
	{
		printf("%d\n", time);
	}
	else
	{
		printf("-1\n");
	}
	return 0;
}
