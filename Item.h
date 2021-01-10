#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Item
{
private:
	string id;
	string title;
	string Rtype; //rental type; record, DVDs or Game
	string Ltype; //2 days or 1 week
	int numcopy;
	double rentalfee;
	bool borrowed; //rental status
	bool two_day;
	string genre;

public:
	Item();
	Item(string id, string title, string Rtype, string Ltype, int numcopy, double rentalfee);
	//Item(string id, string title, string type, bool Ltype, int numcopy, double rentalfee, bool Rstatus, string genre);
	Item(string id, string title, string Rtype, string Ltype, int numcopy, double rentalfee, string genre);
	~Item();
	bool borrowing();
	bool returning();
	string getId();
	string getTitle();
	string getRtype();
	string getLtype();
	int getNumcopy();
	bool is_twoday();
	void setId(string id);
	void setTitle(string title);
	void setRtype(string Rtype);
	void setLtype(string Ltype);
	void setNumcopy(int numcopy);
	void setRentalfee(double rentalfee);
	void setGenre(string genre);
	void setAll(string id, string title, string Rtype, string Ltype, int numcopy, double rentalfee, string genre);

};

