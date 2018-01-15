#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
	
	cout<<"Find the first natural numbers : "<<endl;
	cout<<"---------------------------------\n"<<endl;
	cout<<"The natural numbers are : "<<endl;
	for(i=1;i<=10;i++)
	{
		cout<<i<<"";
		sum=sum+i;
	}
	
	cout<<"\nThe Sum of first 10 natural numbers : "<<sum<<endl;
	
	return 0;
}
