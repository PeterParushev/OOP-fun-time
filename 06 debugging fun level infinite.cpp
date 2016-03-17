using namespace std;
#include<iostream>

int main()
{
	int a = 1;
	int b = 2;
	
	if(a == 0 && ++b)
	{
		cout << "I will never be printed anyway.";
	}
	
	cout << b; // WAIT?? Didn't we increment b???
}