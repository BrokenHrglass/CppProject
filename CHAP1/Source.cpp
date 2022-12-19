/* function definition example code*/

#include <iostream>

void simon(int a);

int main()
{
	using namespace std;
	simon(0);

	int donation;
	cout << "How much would u want to donate Simon?" << endl;
	cin >> donation;
	simon(donation);



}


void simon(int a)
{
	using namespace std;
	cout << "Simon says, now I have " << a << "dollars!" << endl;



}