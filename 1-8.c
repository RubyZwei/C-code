# include <stdio.h>
# include <stdlib.h>

int main()
{
	int a, b, c; 		// a,b,c为三个男人
	for (a = 1; a <= 3; a++) 	// 给a， 即第一个男人尝试匹配每一个女人
		for (b = 1; b <= 3; b++)	// 给b，即第二个男人尝试匹配给每一个女人
			for (c = 1; c <= 3; c++)	// 给c， 即第三个男人尝试匹配给每一个女人
			if (a != 1 && c != 3 && c != 1 && a != b && b != c && a != c)
			// 根据他们说的话进行判断
			{
				// 符合条件，即正确的情况下，输出正确答案
				printf ("%c将嫁给A \n", 'X'+a-1);
				printf ("%c将嫁给B \n", 'X'+b-1);
				printf ("%c将嫁给C \n", 'X'+c-1);
			}
			// 程序计算结束，退出程序
			return 0;
	
}
