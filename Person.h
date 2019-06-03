//Person.h
// superclass
#include<string>
using namespace std;
#ifndef PERSON_H
#define PERSON_H
class Person{
	protected:
		string first;
		string last;
		string id;
		string password;
	public:
		void setName(string, string);
		void setID(string);
		void setPassword(string);
		string getName() const;
		string getID() const;
		string getPassword() const;
		
	
};
void Person::setName(string fname, string lname)
{
	first = fname;
	last = lname;
}
void Person::setID(string i)
{
	id = i;
}
void Person::setPassword(string pass)
{
	password = pass;
}

#endif
