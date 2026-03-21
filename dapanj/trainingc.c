
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//int main() {
//	printf("hello world!\n");
//}
// 复制函数
//void mystrcpy(char *str1, char *str2[]) {
//	while (*str1++ = *str2++);
//}
//int main() {
//	char str1[10], str2[10];
//	mystrcpy(str1, str2);
//	return 0;
//}

//ascii码排序
//void sort(char *s) {
//	int len = strlen(s);
//	for(int i=0;i<len-1;i++)
//		for (int j = i+1; j < len; j++)
//		{
//			if (s[i] > s[j])
//			{
//				char temp = s[i];
//				s[i] = s[j];
//				s[j] = temp;
//			}
//		}
//}
//int main() {
//	char s[100] = "helloworld";
//	sort(s);
//	printf("排序后的结果是：%s", s);
//	return 0;
//}

//求5个学生平均成绩
//#define stu_num 5
//#define cur_num 3
//
// struct student {
//	int num;
//	float chinese;
//	float math;
//	float english;
//	float avg;
//};
//
//int main() {
//	struct student stu[stu_num];
//	float sum_ch = 0, sum_math = 0, sum_en = 0;
//	float avg_ch, avg_math, avg_en;
//	for (int i = 0; i < stu_num; i++) {
//		printf("学号：");
//		scanf("%d", &stu[i].num);
//		printf("语文, 数学, 英语");
//		scanf("%f %f %f",&stu[i].chinese,&stu[i].math,&stu[i].english);
//		//个人平均分
//		stu[i].avg = (stu[i].chinese + stu[i].math + stu[i].english)/cur_num;
//		
//		//各科总分
//		sum_ch += stu[i].chinese;
//		sum_math += stu[i].math;
//		sum_en += stu[i].english;
//
//	}
//
//	//各科平均分
//	avg_ch = sum_ch / stu_num;
//	avg_en = sum_en / stu_num;
//	avg_math = sum_math / stu_num;
//	// 输出每个学生的信息
//	printf("\n学号\t语文\t数学\t英语\t平均分\n");
//	for (int i = 0; i < stu_num; i++) {
//		printf("%d\t%.1f\t%.1f\t%.1f\t%.1f\n",
//			stu[i].num, stu[i].chinese, stu[i].math, stu[i].english, stu[i].avg);
//	}
//
//	// 输出各科平均分
//	printf("\n各科平均分：\n");
//	printf("语文平均分: %.1f\n", avg_ch);
//	printf("数学平均分: %.1f\n", avg_math);
//	printf("英语平均分: %.1f\n", avg_en);
//
//	return 0;
//		
//}

//int main() {
//	int a[20],b[20];
//	int i, j = 0;
//	    printf("请输入20个数：");
//		for ( i=0; i <= 20; i++)
//		scanf("%d", &b[i]);
//		for (i = 1; i <= 20; i+2)
//			b[j++] = a[i];
//		for(int i=0;i<j;i++)
//		printf("修改后的数组为：", &b[i]);
//	    return 0;
//}

//十个数最大最小值

//int main() {
//	int a[10] = { 3,-30,20,6,77,2,0,-4,-7,99 };
//	int max = a[0], min = a[0];
//	for (int i = 1; i < 10; i++)
//	{
//		if (a[i] > max)
//		{
//			max = a[i];
//		}
//		if (a[i] < min) {
//			min = a[i];
//		}
//
//	}
//	printf("最大最小值为：%d,%d", max, min);
//	return 0;
//}

//两正数和的立方
//int main() {
//	int a, b;
//	printf("请输入两个数");
//	scanf("%d,%d", &a,&b);
//	printf("所求结果为：%d",stu(a,b));
//}
//
//int stu(int a, int b) {
//	int c = a + b;
//	return c * c * c;
//}


//读文件并显示
//int main() {
//	FILE* fp;
//	char ch;
//	fp = fopen("flie1.txt", "r");
//	if (!fp) {
//		printf("无法打开文件");
//		return 1;
//	}
//	while ((ch = fgetc(fp)) != EOF) {
//		putchar();
//	}
//	return 0;
//}


//1-100奇数偶数和
//int main() {
//	int sum1 = 0, sum2 = 0;
//	for (int i = 0; i < 101; i++)
//	{
//		if (i % 2 == 0)
//			sum2 += i;
//		else
//			sum1 += i;
//	}
//	printf("奇数偶数和分别是：%d,%d", sum1, sum2);
//	return 0;
//}

//三个整数最大值
//int maxnum(int a, int b, int c) {
//	return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
//}
//int main()
//{
//	int a, b, c;
//	printf("输入三个数：");
//	scanf("%d,%d,%d", &a, &b, &c);
//	printf("最大值为：%d", maxnum(a, b, c));
//	return 0;
//}

//首尾字母大写
//char uf(char* s) {
//	int len = strlen(s);
//	if (s[0] >= 'a' && s[0] <= 'z')
//	s[0] = s[0] - 'a' + 'A';
//	if (s[len - 1] >= 'a' && s[len - 1] <= 'z')
//		s[len - 1] = s[len - 1] - 'a' + 'A';
//	return s;
//}
//int main() {
//	char s[100];
//	printf("请输入一个字符串：");
//	scanf("%s", s);
//
//	uf(s);
//	printf("修改后的字符串为：%s", s);
//	return 0;
//}

//三个双精度数平均值，保留后一位，小数点第二位四舍五入
//int main() {
//	double a, b, c;
//	printf("请输入三个数：");
//	scanf("%lf,%lf,%lf", &a, &b, &c);
//	double avg = (a + b + c) / 3;
//	avg = (int)(avg * 10 + 0.5) / 10.0; // 保留一位小数，四舍五入
//	printf("平均值为：%.1lf", avg);
//	return 0;
//}

//求1！+2！...+n！，用递归和非递归两种方法
//递归方法
//int fun(n) {
//	if (n == 1)
//		return 1;
//	else
//		return n*fun(n - 1);
//}

//非递归方法
//int main() {
//	int n;
//	printf("请输入一个数：");
//	scanf("%d", &n);
//	int sum = 1, j = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		j *= i;
//		sum += j;
//	}
//	printf("结果为：%d", sum);
//	return 0;
//}

//杨辉三角前十行
//int main() {
//	int a[10][10] = { 0 };
//	for (int i = 0; i < 10; i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for (int i = 2; i < 10; i++) {
//		for (int j = 0; j <= i; j++)
//			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//	}
//
//	for (int i = 0; i < 10; i++) {
//	{
//		for (int j = 0; j <= i; j++)
//			printf("%d ", a[i][j]);
//	}
//	printf("\n");
//}
//	return 0;
//}

//选择排序函数
//void select_sort(int arr[], int n) {
//	for (int i = 0; i < n - 1; i++)
//		{
//		int min_index = i;
//		for (int j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[min_index])
//				min_index = j;
//		}
//		if (min_index != i)
//		{
//			int temp = arr[i];
//			arr[i] = arr[min_index];
//			arr[min_index] = temp;
//		}
//	}
//}
//int main() {
//	return 0;
//}


//能否被7和11同时整除
//int main() {
//	int a;
//	printf("请输入一个数：");
//	scanf("%d", &a);
//
//	if(a%7==0&&a%11==0)
//		printf("能被7和11同时整除");
//	if(a%7!=0&&a%11!=0)
//		printf("不能被7和11同时整除");
//	if(a%7==0&&a%11!=0)
//		printf("能被7整除，不能被11整除");
//	if(a%7!=0&&a%11==0)
//		printf("不能被7整除，能被11整除");
//	return 0;
//}


//8位2进制数转10进制
//int main() {
//	int bin[8];
//		printf("请输入一个8位二进制数：");
//		for (int i = 0; i < 8; i++)
//			scanf("%d", &bin[i]);
//		int dec = 0;
//		for(int j=7;j>=0;j--)
//			dec += bin[j] * (1 << (7 - j));
//		printf("转换后的十进制数为：%d", dec);
//}

//数组中比相邻元素大的数

//int Statistics(int a[], int n) {
//	int count = 0;
//	for (int i = 0; i < n; i++)
//	{
//
//		if (a[i] > a[i - 1] && a[i] > a[i + 1])
//			count++;
//	}
//	return count;
//
//}
//
//void  main() {
//	int a[10];
//	printf("请输入10个数：");
//	for(int i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//
//	printf("数组中比相邻元素大的数的个数为：%d", Statistics(a, 10));
//}


//10个数中最大最小值
//int main() {
//	int a[10];
//	printf("请输入10个数：");
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//
//	int max = a[0], min = a[0];
//	for (int j = 1; j < 10; j++)
//	{
//		if(a[j]>max)
//			max = a[j];
//		else if(a[j]<min)
//			min = a[j];
//	}
//
//	printf("最大值为：%d，最小值为：%d", max, min);
//}

//输出图形
//int main() {
//	int i, j, k = 1;
//	for (int i = 0; i <= 9; i++) {
//		if (i <= 5) {
//			for(j=1;j<=i;j++)
//				printf("* ");
//			printf("\n");
//		}
//		else {
//			for(j=1; j <= i-2*k; j++)
//				printf("* ");
//			printf("\n");
//			k++;
//		}
//	}
//}

//fact(n)计算1！+2！+。。。+n！的阶乘

//float fact(int n) {
//	float sum = 0, j = 1;
//	for (int i = 1; i <= n; i++)
//	{
//		j *= i;
//		sum += j;
//	}
//
//	return sum;
//}
//
//int main() {
//	int n;
//	printf("请输入一个数：");
//	scanf("%d", &n);
//
//	printf("结果为：%f", fact(n));
//}


//1000-2000内能被5，11同时整除的数，但不能被9整除，以16进制输出
//int main() {
//	for (int i = 1000; i <= 2000; i++) {
//		if(i%5==0&&i%11==0&&i%9!=0)
//			printf("%x ", i);
//	}
//}


//输出一个整数的每一位，空格分开
//int main() {
//	int N;
//	printf("请输入一个整数：");
//	scanf("%d", &N);
//	for (int i = 0; i < 10; i++)
//	{
//		int digit = N % 10;
//		printf("%d ", digit);
//		N /= 10;
//	}
//	return 0;
//}

//求一个正整数的二进制数
//int main() {
//	int n;
//	printf("请输入一个正整数：");
//	scanf("%d", &n);
//	while (n != 1 && n != 0) {
//		n%2 == 0 ? printf("0") : printf("1");
//		n /= 2;
//	}
//
//}

//统计数组奇偶数并求和
//int main() {
//	int a[20];
//	
//	printf("请输入20个数：");
//		for (int i = 0; i < 20; i++)
//			scanf("%d", &a[i]);
//	
//		int sum_j = 0, sum_o = 0;
//			for(int i =0;i<20;i++)
//			{
//				if(a[i]%2==0)
//					sum_o+=a[i];
//				else
//					sum_j+=a[i];
//			}
//		printf("奇数和为：%d，偶数和为：%d", sum_j, sum_o);
//}

//杨辉三角前十行
//int main() {
//	int a[10][10] = { 0 };
//
//	for(int i=0;i<10;i++)
//	{
//		a[i][0] = 1;
//		a[i][i] = 1;
//	}
//	for(int i=2;i<10;i++)
//		for(int j=0;j<=i;j++)
//			a[i][j] = a[i-1][j-1]+a[i-1][j];
//	for(int i=0;i<10;i++)
//	{
//		for(int j=0;j<=i;j++)
//			printf("%d ", a[i][j]);
//		printf("\n");
//	}
//}


//1900-2000闰年
//int main() {
//	int j = 0;
//	for (int i = 1900; i <= 2000; i++)
//	{
//		
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//		{
//			printf("%d ", i);
//			j++;
//			if (j == 3)
//			{
//				printf("\n");
//				j = 0;
//			}
//		}
//		
//	}
//
//}


//定义一个宏，两参数互换
#define SWAP(a,b)  temp = a; a = b; b = temp;
//int main() {
//	int a, b, temp;
//	printf("请输入两个数：");
//	scanf("%d,%d", &a, &b);
//	SWAP(a, b);
//	printf("交换后的结果为：%d,%d", a, b);
//}

//使字符串按反序存放
//void inver(char* s) {
//	int len = strlen(s);
//	int j, k;
//	for (j = 0, k = len - 1; j < k; j++, k--)
//	{
//		char temp = s[j];
//		s[j] = s[k];
//		s[k] = temp;
//	}
//}
//
//
//int main() {
//	char s[100];
//	printf("请输入一个字符串：");
//	scanf("%s", s);
//	inver(s);
//	printf("反序后的字符串为：%s", s);
//}

//取无符号整数右边的4-7位
//int main() {
//		unsigned int n;
//	printf("请输入一个无符号整数：");
//	scanf("%u", &n);
//	unsigned int result = (n >> 4) & 0x0F; // 右移4位后取低4位
//	printf("右边的4-7位为：%u", result);
//	return 0;
//}

//20个数的和及平均值，分别统计大于，小于，等于平均值的个数
//int main() {
//	int a[20],sum=0;
//	printf("请输入20个数：");
//	for (int i = 0; i < 20; i++) {
//		printf("请输入第%d个数：", i+1);
//
//		scanf("%d", &a[i]);
//		sum += a[i];
//	}
//	int avg = sum / 20;
//	int count_big=0, count_small=0, count_equal=0;
//	for(int i=0;i<20;i++)
//	{
//		if(a[i]>avg)
//			count_big++;
//		else if(a[i]<avg)
//			count_small++;
//		else
//			count_equal++;
//	}
//	printf("20个数的和为：%d，平均值为：%d\n", sum, avg);
//	printf("大于平均值的个数为：%d，小于平均值的个数为：%d，等于平均值的个数为：%d", count_big, count_small, count_equal);
//	return 0;
//	
//}

//if-else实现比大小
//int main() {
//	int a=0, b=10, c=-9;
//	if (a > b)
//	{
//		if (a > c)
//			printf("a最大");
//		else
//			printf("c最大");
//	}
//	else if (a < b)
//	{
//		if (b > c)
//			printf("b最大");
//		else
//			printf("c最大");
//	}
//	return 0;
//}

//编写函数使数组逆序存放
//void inv(int a[], int n) {
//	int j, k;
//	for(j=0, k = n - 1; j < k; j++, k--)
//	{
//		int temp = a[j];
//		a[j] = a[k];
//		a[k] = temp;
//	}
//}
//
//void main() {
//	int a[10]={ 1,2,3,4,5,6,7,8,9,10 };
//	inv(a, 10);
//	printf("逆序后的数组为：");
//	for(int i=0;i<10;i++)
//		printf("%d ", a[i]);
//
//}