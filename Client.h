//Client.h
#include<string>
#include "Person.h"
#ifndef CLIENT_H
#define CLIENT_H
using namespace std;
class Client
{
	public: 
	
		Client(string, string, string);
		void setBalance(double);
		void setAccNum(string);
		double getBalance();
		string getAccNum();

		
		
	private:
	double balance
	sting accountNum
};

Client::Client(string fname, string lname, string id)
{
setName(fname, lname);
setID(id);
setBalance(0.0);
setAccNum("New Client");
}

void Client::setBalance(double b)
{
balance = b;
}

void Client::setAccNum(string acc)
{
accNum = acc;
}

#endif
