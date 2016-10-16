#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int countDigit(int num)
{
	char *chars = reinterpret_cast<char*>(&num);
	int result = sizeof(chars)/sizeof(chars[0]);
	return result;
}

int main()
{
	int answer;
	
	unsigned seed = time(0);
	srand (seed);
	
	int randomNumber1 = rand();
	int count1 = countDigit(randomNumber1);
	
	int randomNumber2 = rand();
	int count2 = countDigit(randomNumber2);
	
	cout <<randomNumber1 << endl
	<<randomNumber2 << endl;
	
	cout << count1 << endl << count2;
	
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
