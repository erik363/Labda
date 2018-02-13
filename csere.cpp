#include <iostream>

using namespace std;

void csere(int &a, int &b)
	{
		a+=b;
		b=a-b;
		a-=b;
	} 

int main()
{
	int x=0;
	int y=0;
	cout << "Irj be egy szamot: ";
	cin >> x;
	cout << endl;
	cout << "Irj be egy masik szamot: ";
	cin >> y;
	cout << endl;
	

	cout << "A beírt számok: " << x << " és " << y << endl;

	csere(x,y);
	cout << "A számok felcserélve: " << x  << " és " << y << endl;

}

/*a=5 és b=10
a=5+10
a=a+b
a=15
b=a-b
b=15-10
b=5 <-------
a=15-5
a=a-b
a=10 <------
a=a-b*/