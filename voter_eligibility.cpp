#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter the age of the civilian: \n";
	cin>>age;
	if (age>=18)
	{
		cout<<"You are an adult.So you are eligible to vote!!\n";
	}
	else if(age>=13&&age<18)
	{
		cout<<"You are a teenager ,So you are not eligible!! Wait for "<<18-age<<" Years\n";
	}
	else
	{
		cout<<"Sorry Kiddo you are not eligible to vote!! Wait for "<<18-age<<" Years\n";
	}
}
