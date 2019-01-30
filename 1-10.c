# include <stdio.h>
# include <stdlib.h>
int main(int argc, char** argv)
{
	int sum = 0;
	int start = 0, end = 0;
	int step = 0;
	
	printf ("请输入数列初始值：");
	scanf ("%d", &start);
	printf ("请输入数列终止值：");
	scanf ("%d", &end);
	printf ("请输入步长值：");
	scanf ("%d", &step);
	
	for (int i = start; i <= end; i+=step)
		sum+=i;
		
	printf ("该等差数列的和为：%d\n", sum);
	
	return 0;
}
