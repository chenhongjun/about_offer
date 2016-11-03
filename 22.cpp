#include <stack>
#include <iostream>

using namespace std;
bool IsPopOrder(const int* pPush, const int* pPop, int nLength);
int main()
{
	int push[] = {1, 2, 3, 4, 5};
	int pop[] = {4, 2, 5, 3, 1};
	const bool& p = IsPopOrder(push, pop, 5);
	cout << &p << endl;

	return 0;
}

bool IsPopOrder(const int* pPush, const int* pPop, int nLength)
{
	bool bPossible = false;
	cout << &bPossible << endl;
	if (pPush != NULL && pPop != NULL && nLength > 0)
	{
		const int* pNextPush = pPush;
		const int* pNextPop = pPop;
		stack<int> stackData;
		while (pNextPop - pPop < nLength)
		{
			while (stackData.empty() || stackData.top() != *pNextPop)
			{
				if (pNextPush - pPush == nLength)
				  break;
				stackData.push(*pNextPush);
				++pNextPush;
			}
			if (stackData.top() != *pNextPop)
			  break;
			stackData.pop();
			++pNextPop;
		}
		if (stackData.empty() && pNextPop - pPop == nLength)
		  bPossible = true;
	}
	return bPossible;
}
