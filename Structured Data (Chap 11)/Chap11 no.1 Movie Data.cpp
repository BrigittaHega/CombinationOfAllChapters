// This program demonstrates partially initialized
// structure variables.
#include <iostream>
#include <string>
using namespace std;

struct MovieData
{
	string title; 
	string director; 
	int year; 
	int timeMinute;
};

void movieMenu(MovieData);

int main()
{
	MovieData movieData1 = {"Snowden", "Oliver Stone", 2016, 134};
	MovieData movieData2 = {"Inferno", "Ben Foster", 2016, 121};
	
	movieMenu(movieData1);
	cout<<endl;
	movieMenu(movieData2);
	return 0;
}

void movieMenu(MovieData movie)
{
	cout<<"Movie title: "<<movie.title
	<<"\nThe Director: "<<movie.director
	<<"\nYear released: "<<movie.year
	<<"\nTime Length: "<<movie.timeMinute<<" minutes.\n";
}

//	The program should create twoMovieData variables, store values in their members,
//and pass each one, in turn, to a function that displays the information about the movie
//in a clearly formatted manner.
