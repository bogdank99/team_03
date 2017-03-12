#pragma once
#include "Header.h"
#include "User.h"

using namespace std;


class Comment
{
private:
	string author;
	string plotComment;
	string date;

public:
	Comment();

	Comment(string author, string plotComment, string date);

	// getters
	string getAuthor();

	string getPlot�omment();

	string getDate();

	// setters
	void setAuthor(string author);

	void setPlot�omment(string plotComment);

	void setDate(string date);

	// other
	friend istream & operator >> (istream &input, Comment &comment);

	friend ostream & operator << (ostream &output, Comment &comment);
};