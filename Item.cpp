#include <string>
#include "Item.h"

Item::Item()
{
	this->id = id;
}
Item::Item(string id, string title, string Rtype, string Ltype, int numcopy, double rentalfee)
{
	this->id = id;
	this->title = title;
	this->Rtype = Rtype;
	this->Ltype = Ltype;
	this->numcopy = numcopy;
	this->rentalfee = rentalfee;
	this->borrowed = false;
}

Item::Item(string id, string title, string Rtype, string Ltype, int numcopy, double rentalfee,string genre)
{
	this->id = id;
	this->title = title;
	this->Rtype = Rtype;
	this->Ltype = Ltype;
	this->numcopy = numcopy;
	this->rentalfee = rentalfee;
	this->genre = genre;
	this->borrowed = false;
}
	
Item::~Item()
{

}

bool Item::borrowing()
{
	if (!this->borrowed)	this->borrowed = true;
	return this->borrowed;
}

bool Item::returning()
{
	if (this->borrowed)	this->borrowed = false;
	return !this->borrowed;
}

string Item::getId()
{
	return this->id;
}

string Item::getTitle()
{
	return this->title;
}
	
string Item::getRtype()
{
	return this->Rtype;
}

string Item::getLtype()
{
	return this->Ltype;
}

int Item::getNumcopy()
{
	return this->numcopy;
}

bool Item::is_twoday()
{
	return this->two_day;
}

void Item::setId(string id)
{
	this->id = id;
}

void Item::setTitle(string title)
{
	this->title = title;
}

void Item::setRtype(string Rtype)
{
	this->Rtype = Rtype;
}

void Item::setLtype(string Ltype)
{
	this->Ltype = Ltype;
}

void Item::setNumcopy(int numcopy)
{
	this->numcopy = numcopy;
}

void Item::setRentalfee(double rentalfee)
{
	this->rentalfee = rentalfee;
}

void Item::setGenre(string genre)
{
	this->genre = genre;
}

void Item::setAll(string id, string title, string Rtype, string Ltype, int numcopy, double rentalfee, string genre)
{
	this->id = id;
	this->title = title;
	this->Rtype = Rtype;
	this->Ltype = Ltype;
	this->numcopy = numcopy;
	this->rentalfee = rentalfee;
	this->genre = genre;
}

