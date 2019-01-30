/* 描述：三天大逾，两天晒网*/
# include <stdio.h>
# include <stdlib.h>

typedef struct D		// 日期类型的结构体
{
	int year;
	int month;
	int day;
}Date;

// 判断是否是闰年
int IsLeapYear(int year)
{
	return (year % 400 == 0 || year % 4 == 0 && year % 100 != 0);
	// 获得某年某月的最大天数
	int GetMaxDay(int year, int month)
	{
		switch(month)
		{
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
			case 12:
				return 31;		// 上述的月份天数是31天
			case 4:
			case 6:
			case 9:
			case 11:
				return 30;		// 上述月份天数是30天
			case 2:
				return IsLeapYear(year)?29:28;
			default:
				return -1;
		}
	}
	
	// 两个日期是否相等
	int IsEqual(Date date1, Date date2)
	{
		int x = 0;
		
		while (!IsEqual(date1, date2))	// 循环条件为两个日期不是同一天
		{
			if (date1.day != GetMaxDay(date1.year, date1.month))
			{
			//如果要查询的日期不等逾该月的最大天数
			date1.day++;
			}
			else	//如果这个月的日期等于该月的最大天数
			{
				if (date1.month != 12)
				{
					date1.month++;
					date1.day = 1;
				}
				else
				{
					date1.day = date1.month = 1;
					date1.year++;
			
				}
			}
			x++;
		}
	return x;
}

int main()
{
	Date date1, date2;	// 定义两个日期类变量
	int x = 0;
	//对初始日期进行初始化
	date1.year = 1992;
	date1.month = 1;
	date1.day = 1;
	
	printf ("请输入日期：");
	scanf ("%d%d%d"， &date2.year, &date2.month, &date2.day);		// 对查询日期进行u
	
	x = GetdiffDays(date1, date2);	// 获取两个日期之间相差的天数
	printf("日期差为：%d天\n", x);	// 输出相差的天数
	
	x = x % 5;	// 天数对5取余
	if (x == 0 || x == 1)		// 余数为0、4，则为晒网
		printf ("晒网！\n");
	else
		printf ("打鱼！\n");
		
	return 0;
}
