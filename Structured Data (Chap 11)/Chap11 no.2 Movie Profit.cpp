#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
	string title; //Movie title
	string director; //Director that make the movie
	int year; // Hourly pay rate
	int timeMinute;
	float cost;
	float firstYearRevenues;
};

void movieMenu(MovieData);

int main()
{
	MovieData movieData1 = {"Snowden", "Oliver Stone", 2016, 134, 40, 24.9};
	MovieData movieData2 = {"Inferno", "Ben Foster", 2016, 121, 75, 50};
	
	movieMenu(movieData1);
	cout<<endl<<endl;
	movieMenu(movieData2);
	return 0;
}

void movieMenu(MovieData movie)
{
	cout<<"Movie title: "<<movie.title
	<<"\nThe Director: "<<movie.director
	<<"\nYear released: "<<movie.year
	<<"\nTime Length: "<<movie.timeMinute
	<<" minutes.\nMovie cost: $"<<movie.cost
	<<" million.\nFirst year profit: $"<<movie.firstYearRevenues<<" million.";
}

//	The program should create twoMovieData variables, store values in their members,
//and pass each one, in turn, to a function that displays the information about the movie
//in a clearly formatted manner.
