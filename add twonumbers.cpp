#include <iostream>
using namespace std;

class Numbers
{
	private:
		int a;
		int b;
	public:
		
		void numberscan(void);
		void numbershow(void);
		int calcAddition(void);
};

void Numbers::numberscan(void)
{
	cout<<"Enter first number: ";
	cin>>a;
	cout<<"Enter second number: ";
	cin>>b;	
}

void Numbers::numbershow(void)
{
	cout<<"a= "<<a<<",b= "<<b<<endl;
}

int Numbers::calcAddition(void)
{
	return (a+b);
}


int main()
{
	
	Numbers num;
	int add; 
	
	num.numberscan();

	add=num.calcAddition();
	
	
	num.numbershow();
	
	cout<<"Addition/sum= "<<add<<endl;
	
	return 0;	
}

