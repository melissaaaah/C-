/*
	Huynh, Melissa

	September 10, 2019
	CS A250

	Lab 2
*/


#ifndef MOVIE_H
#define MOVIE_H 

#include <iostream>
#include <string>
#pragma once
class Movie
{
public:
	Movie();
	Movie(const std::string&, int);

	std::string getMovieTitle() const;
	int getYear() const;

	void setMovieTitle(const std::string& movieTitle);
	void setYear(int& movieYear);
	void print() const;

	bool sameYear(const Movie&) const;

	~Movie();
private: 
	int year;
	std::string title;
};
#endif
