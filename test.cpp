/*************************************************************************
	> File Name: test.cpp
	> Author: Leo
	> Mail: Leo@169kang.com 
	> Created Time: 2017年03月03日 星期五 15时35分01秒
 ************************************************************************/

#include<iostream>
using namespace std;

bool f(int arr[], size_t len, int num);
int main()
{
	int arr[11] = {2, 5, 1, 1, 1, 1, 4, 1, 7, 3, 7};
	cout << f(arr, 11, 4) << endl;
	return 0;
}

bool f(int arr[], size_t len, int num)
{
	if (arr==0 || len<num*2-1 || num<=1 || num%2 != 0)
		return false;
	
	int* p_begin = arr;
	int* p_end = (arr + len - 1);
	int first_sum = 0;
	int second_sum = 0;
	while (p_end > p_begin)
	{
			if (first_sum < second_sum)
				first_sum += *p_begin++;
			else
				second_sum += *p_end--;
		
	}
	cout << first_sum << endl;
	cout << second_sum << endl;
	if (first_sum == second_sum)
	{
		num /= 2;
		if (num > 1){
			
			return f(arr, p_begin-arr, num) && f(p_begin+1, len-(p_begin-arr)-1, num);
		}
	}
	else
		return false;
}
