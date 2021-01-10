#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Item.h"

using namespace std;



class Customer
{
protected:
	string id;
	string name;
	string address;
	string phonenum;
	int numBorrowed;
	string status;
	vector<Item*> rentlist;


public:
	Customer(string id, string name, string address, string phonenum,int numBorrowed, string status);
	~Customer();
	string getId();
	string getName();
	string getAddress();
	string getPhonenum();
	int getNumBorrowed();
	string getStatus();


	void setId(string id);
	void setName(string name);
	void setAddress(string address);
	void setPhonenum(string phonenum);
	void setNumBorrowed(int numBorrowed);
	void setStatus(string status);
	void setAll(string id, string name, string address, string phonenum, int numBorrow, string status);


	virtual bool borrowing(Item* rental) = 0;
	virtual bool returning(Item* rental) = 0;




};







