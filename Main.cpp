/*
	Huynh, Melissa

	September 10, 2019

	CS A250
	Lab 2
*/

#include "Movie.h"


using namespace std;

int main()
{
	Movie movie1;
	movie1.print();

	Movie movie2("Toy Story 3", 2010);
	movie2.print();

	Movie movie3;
	movie3.setMovieTitle("The Lion King");
	movie3.setYear(2019);
	movie3.print();

	cout << "Are movie 2 and movie 3 the same year?: ";
	if (movie1.sameYear(movie2))
		cout << " Yes";
	else
		cout << "No" << endl;

	system("Pause");
	return 0;
}