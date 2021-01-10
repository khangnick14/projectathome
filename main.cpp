#include <iostream>
#include <fstream>
#include <string>

using namespace std;


void itemMange()
{
	int input;

	cout << "1. Add new item\n"
		<< "2. Update item\n"
		<< "3. Delete item\n";

	cin >> input;
	switch (input)
	{
	case '1':
		//make function for add item
	case '2':
		//make function for update
	case '3':
		//make function for delete
	}
}

void memberMange()
{
	int input;

	cout << "1. Add new customer\n"
		<< "2. Update customer\n";

	cin >> input;
	switch (input)
	{
	case '1':
		//make function for add customer
	case '2':
		//make function for update customer
	}
}

void promoteMember()
{

}

void rentItem()
{

}

void returnItem()
{

}

void displayItem()
{

}

void displayOutstock()
{

}

void displayCustomer()
{

}

void displayGroup()
{

}

void searchItemCustomer()
{

}

int main()
{
	int input;

	//print menu
	cout << "Welcome to Genie¡¯s video store\n"
		<< "Enter an option below.\n"
		<< "1. Add a new item, update or delete an existing item\n"
		<< "2. Add new customer or update an existing customer\n"
		<< "3. Promote an existing customer\n"
		<< "4. Rent an item\n"
		<< "5. Return an item\n"
		<< "6. Display all items\n"
		<< "7. Display out-of-stock items\n"
		<< "8. Display all customers\n"
		<< "9. Display group of customers\n"
		<< "10. Search items or customers\n"
		<< "Exit." << endl;

	cin >> input;

	switch (input)
	{
	case 1:
		itemMange;
		break;
	case 2:
		memberMange;
		break;
	case 3:
		promoteMember;
		break;
	case 4:
		rentItem;
		break;
	case '5':
		returnItem();
		break;
	case '6':
		displayItem();
		break;
	case '7':
		displayOutstock();
		break;
	case '8':
		displayCustomer();
		break;
	case '9':
		break;
	case '10':
		searchItemCustomer();
		break;
	}

	//print team member
	cout << endl << "ASSIGNMENT 1 GROUP <10>" << endl;
	cout << "s3768999,s3768999@rmit.edu.vn,Sanghwa,Jung" << endl;
	cout << "s3864131,s3864131@rmit.edu.vn,Khang,Nguyen" << endl;
	cout << "s3741309,s3741309@rmit.edu.vn,Hyunho,Kim" << endl;
	cout << "s3594528,s3594528@rmit.edu.vn,Triet,Luu Huynh" << endl;
}
