#include<iostream>
using namespace std;

int main()
{
	int age;
	cout<<"Enter your current age : ";
	cin>>age;
	if(age>=18)
	{
		cout<<"YOU ARE ELIGIBLE TO VOTE \n";
		cout<<"HAVE SUCCESSFULL VOTING IN ELECTIONS";
	}
	else
	{
		cout<<"YOU ARE NOT ELIGIBLE TO VOTE TILL YET \n";
		cout<<"WAIT FOR "<<18-age<<" year(s)";
	}
	return 0;
}
