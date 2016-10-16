#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int answer;
	
	unsigned seed = time(0);
	srand (seed);
	int randomNumber1 = rand();
	int randomNumber2 = rand();
	
	cout <<randomNumber1 << endl
	<<randomNumber2 << endl;
	
	int total = randomNumber1 + randomNumber2;
	
	cout << "-------+\n";
	cin >> answer;
	
	if (total == answer)
	{
		cout <<"Congratulation! You answer it correctly!";
	}
	else
	{
		cout <<"Too bad! The correct answer is "<<total;
	}
	return 0;
}
