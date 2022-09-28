#include <iostream>
using namespace std;
int main()
{
	unsigned int wiek;
	cout << "Ile masz lat?: " << endl;
	cin >> wiek;
	if(wiek<18)
	{
		cout << "Nie jestes pelnoletni i nie mozesz zostac prezydentem" << endl;
	}
	else if ((wiek>=18)&&(wiek<35))
	{
		cout << "Jestes pelnoletni ale mozesz zostac prezydentem" << endl;
	}
	else
	{
		cout << "Jestes pelnoletni i mozesz zostac prezydentem" << endl;
	}
	
}
