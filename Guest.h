#pragma once
#include "Customer.h"
#include "Item.h"
#include <string>
#include <vector>

#define MAXRENT_GUEST 2

class Guest : public Customer
{
private:
	vector<Item*> rentlist;

public:
	Guest(string id, string name, string address, string phonenum, int numBorrowed, string status);
	~Guest();
	bool borrowing(Item* rental);
	bool returning(Item* rental);
};