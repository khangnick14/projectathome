#include "Vip.h"

Vip::Vip(string id, string name, string address, string phonenum, int numBorrowed, string status) :Customer(id, name, address, phonenum, numBorrowed, status)
{
	this->id = id;
	this->name = name;
	this->address = address;
	this->phonenum = phonenum;
	this->numBorrowed = numBorrowed;
	this->status = "VIP";
}

Vip::~Vip()
{

}
bool Vip::borrowing(Item* rental)
{
	if (rental->borrowing()) {
		cout << "Customer " << this->getId() << " borrowed video item: " << rental->getTitle() << endl;
		this->rentlist[numBorrowed++] = rental;
		point += 10;
		return true;
	}

	// if failed to rental then the video is not available
	cout << "The video id " << rental->getId() << " is not available!" << endl;
	return false;
}

bool Vip::returning(Item* rental)
{
	bool found = false;
	// check if the customer really rent this video
	for (int i = 0; i < numBorrowed; i++) {
		// if an item exists in this rentList
		if (this->rentlist[i] != NULL) {
			if (rental->getId().compare(this->rentlist[i]->getId()) == 0) {
				found = true;
				break;
			}
		}
	}
	if (!found) {
		cout << "Customer " << this->getId() << " does not rent this video: " << rental->getTitle() << endl;
		return false;
	}
	if (rental->returning()) {
		cout << "Customer " << this->getId() << " returned video item: " << rental->getTitle() << endl;
		this->rentlist[numBorrowed--] = NULL;
		return true;
	}
	cout << "The item id " << rental->getId() << " is available so returning failed!" << endl;
	return false;
}
