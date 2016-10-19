#include <iostream>
using namespace std;

int main()
{
	float sugar = 1.5;
	float butter = 1;
	float flour = 2.75;
//	float batter = sugar+butter+flour;
	float cookie = 48;
	int manyCookie;
	
	cin>>manyCookie;
	
	float cookieNum = (manyCookie / cookie);// * batter;
	
	float manySugar = cookieNum * sugar;
	float manyButter = cookieNum * butter;
	float manyFlour = cookieNum * flour;
	
	cout<<endl<<manySugar<<endl<<manyButter<<endl<<manyFlour;
	
	return 0;
}


