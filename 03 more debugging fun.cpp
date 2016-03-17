using namespace std;
#include<iostream>

int main()
{
	double pointThree = 0.3;
	double sum = 0;
	for(int i = 0; i < 10; ++i)
	{
		sum += pointThree;
	}
	
	cout << sum == 3; //hwat?
}