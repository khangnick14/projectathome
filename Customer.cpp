#include <string>
#include "Customer.h"

Customer::Customer(string id, string name, string address, string phonenum, int numBorrowed, string status)
{
	this->id = id;
	this->name = name;
	this->address = address;
	this->phonenum = phonenum;
	this->numBorrowed = numBorrowed;
	this->status = status;

}
Customer::~Customer()
{
}

string Customer::getId()
{
	return this->id;
}

string Customer::getName()
{
	return this->name;
}

string Customer::getAddress()
{
	return this->address;
}

string Customer::getPhonenum()
{
	return this->phonenum;
}

int Customer::getNumBorrowed()
{
	return this->numBorrowed;
}

string Customer::getStatus()
{
	return this->status;
}

void Customer::setId(string id)
{
	this->id = id;
}
void Customer::setName(string name)
{
	this->name = name;
}
void Customer::setAddress(string address)
{
	this->address = address;
}
void Customer::setPhonenum(string phonenum)
{
	this->phonenum = phonenum;
}
void Customer::setNumBorrowed(int numBorrowed)
{
	this->numBorrowed = numBorrowed;
}
void Customer::setStatus(string status)
{
	this->status = status;
}
void Customer::setAll(string id, string name, string address, string phonenum, int numBorrowed, string status)
{
	this->setId(id);
	this->setName(name);
	this->setAddress(address);
	this->setPhonenum(phonenum);
	this->setNumBorrowed(numBorrowed);
	this->setStatus(status);
}
