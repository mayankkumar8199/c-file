#include<iostream>
using namespace std;
class largestno
{
	private:
		int a,b,c;
    public:
    	int numbers()
    	{
    		cout<<"Enter three numbers you want";
    		cin>>a>>b>>c;
    	}
    	int decision()
    	{
    		int r;
    		r=( ( a > b) && (a > c )? a :( b> a) && (a > c) ?b :c );
    		cout<<"greates tof three numbers is"<<r;
    	}
};
int main()
{
	largestno m;
	m.numbers();
	m.decision();
	
}
