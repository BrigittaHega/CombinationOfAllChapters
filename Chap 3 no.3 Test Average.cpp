#include <iostream>
using namespace std;

int main()
{
	int score1, score2, score3, score4, score5;
	
	cout << "Put in your five test scores so I could count your avergae score:\n";
	cin >> score1
	>> score2
	>>score3
	>>score4
	>>score5;
	
	int averageScore = (score1+score2+score3+score4+score5) / 5;
	
	cout << "\nYour average score is "<<averageScore;
	
	return 0;
}
