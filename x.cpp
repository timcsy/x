#include <iostream>
using namespace std;

int main()
{
	int N;
	cout<<"please enter a number:";
	while(cin>>N)
	{
		for(int i = 0; i < N; i++)
		{
			for(int j = 0; j < N-i; j++) cout<<" ";
			for(int j = 0; j < 2*i+1; j++) cout<<"x";
			cout<<endl;
		}
		for(int i = N-2; i >= 0; i--)
		{
			for(int j = 0; j < N-i; j++) cout<<" ";
			for(int j = 0; j < 2*i+1; j++) cout<<"x";
			cout<<endl;
		}
		cout<<"please enter a number:";
	}
	return 0;
}