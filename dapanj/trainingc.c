
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





