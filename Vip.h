#pragma once
#include "Customer.h"
#include  "Item.h"
#include <string>
#include <vector>


class Vip : public Customer
{
private:
	int point;
	vector<Item*> rentlist;


public:
	Vip(string id, string name, string address, string phonenum, int numBorrowed, string status);
	~Vip();
	bool borrowing(Item* rental);
	bool returning(Item* rental);

};

