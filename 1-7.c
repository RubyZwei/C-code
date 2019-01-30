# include <stdio.h>
# include <stdlib.h>

int main(int argc, char** argv)
{
	int total = 0;		// 记录桃子总数
	int eat_time = 0;		// 记录猴子在数桃子前吃了多少次桃子
	
	printf ("请输入最后剩余桃子数：");
	scanf ("%d", &total);	// 输入桃子的总数
	
	while(1)		// 循环计算中
	{
		printf ("请输入数桃子之前吃了多少次了？");
		scanf ("%d", &eat_time);	// 猴子吃桃子的次数
		if (eat_time < 0)
		{
		printf ("您输入的次数有误！\n");
		continue;
		}
		else
			break;
	}
	
	while (eat_time > 0)		// 逆向求解桃子的总数
	{
		total = 2 * (total + 1);	// 计算桃子总数
		eat_time--;		// 吃桃子次数控制计算的循环次数
	};
	
	printf ("桃子总共的桃子数目为：%d\n", total);
	
	return 0;
}
