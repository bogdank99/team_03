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
	Comment();

public:
	Comment(string author, string plotComment, string date);

	string getAuthor();

	string getPlot�omment();

	string getDate();

	void setAuthor(string author);

	void setPlot�omment(string plotComment);

	void setDate(string date);

	friend istream & operator >> (istream &input, Comment &comment);

	friend ostream & operator << (ostream &output, Comment &comment);
};