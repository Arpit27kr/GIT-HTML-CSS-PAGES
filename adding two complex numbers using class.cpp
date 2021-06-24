#include<iostream>
#include<windows.h>
using namespace std;
class complex
{
	int a,b;
	public:
		void input(int x,int y)
		{
			a=x;	b=y;
		}
		void display()
		{
			cout<<"a= "<<a<<"b= "<<b;
		}
		complex add(complex c)
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};
int main()
{
	
	complex c1,c2,c3;
	c1.input(2,4);
	c2.input(5,9);
	c3=c1.add(c2);
	c3.display();
	
}
