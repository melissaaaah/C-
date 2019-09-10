#include "Movie.h"
using namespace std;

Movie::Movie()
{
	title = "No Title";
	year = 0;
}

Movie::Movie(const string& movieTitle, int movieYear)
{
	title = movieTitle;
	year = movieYear;
}

string Movie::getMovieTitle() const
{
	return title;
}

int Movie::getYear() const
{
	return year;
}

void Movie :: setMovieTitle(const string& newTitle)
{
	title = newTitle;
}

void Movie::setYear(int& newYear)
{
	year = newYear;
}

void Movie::print() const
{
	cout << title << "(" << year << ")" << endl;
}

bool Movie::sameYear(const Movie& movie2) const
{
	return (title == movie2.title
		&& year == movie2.year);
}

Movie::~Movie()
{}