                                                                                                                                               
// Eldomatt.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include<string>
#include<time.h>
#include <iostream>
using namespace std;
class Orders
{
	friend class Employees;
	friend class Customers;
private: //Unable to declare arrays.
		//Declared inside functions as a workaround.
		string orders[11]; //to hold buyers choices.
		int totals;
	string purchase; //For title of items boughts
		double cost[11];
	int delcost;
	int a = 1; //Work on date ofdelivery / retrieval
		int user = 1;
	int x;
	int num;
	double totalcost = 0;
	int ordernumber = 0;
	int mmm = 0;
public:
	void showproducts() //Func to show products and prices
	{
		double bedprice[3] = { 5000, 3000, 3800 };
		string beds[3] = { "Double Deckers", "Single Beds", "Double Beds" };
		double tableprice[4] = { 2800, 2500, 3800, 2000 };
		string tables[4] = { "Dining tables", "Office Tables", "Kitchen Tables", "Coffee Tables" };
		double seatprice[4] = { 2800, 800, 2500, 500 };
		string seats[4] = { "Arm Chairs", "Class Chairs", "Office Chairs", "Benches" };
		int i = 0;
		cout << "Tables:" << endl;
		while (i < 4)
		{
			cout << a << ". ‐ " << tables[i] << " ‐ KSh." << tableprice[i] << endl;
			++i;
			a++;
		}
		cout << "Seats:" << endl;
		i = 0;
		while (i < 4)
		{
			cout << a << ". ‐ " << seats[i] << " ‐ KSh." << seatprice[i] << endl;
			++i;
			a++;
		}
		cout << "Beds:" << endl;
		i = 0;
		while (i < 3)
		{
			cout << a << ". ‐ " << beds[i] << " ‐ KSh." << bedprice[i] << endl;
		  ++i;
		  a++;
		}
	}
	void singlepurch()
	{
		int bedprice[3] = { 5000, 3000, 3800 };
		string beds[3] = { "Double Deckers", "Single Beds", "Double Beds" };
		int tableprice[4] = { 2800, 2500, 3800, 2000 };
		string tables[4] = { "Dining tables", "Office Tables", "Kitchen Tables", "Coffee Tables" };
		int seatprice[4] = { 2800, 800, 2500, 500 };
		string seats[4] = { "Arm Chairs", "Class Chairs", "Office Chairs", "Benches" };
	repeat:
		cout << "Enter your choice followed by the number of orders for the item" << endl;
		cin >> x;
		cin >> num;
		if (x == 0 || num == 0)
		{
			cout << "Invalid Entry." << endl << "The entries must be above zero" << endl;
			goto repeat;
		}
		if (x == 1)
		{
			orders[0] = tables[0];
			cost[0] = tableprice[0]*num;
		}
		else if (x == 2)
		{
			orders[0] = tables[1];
			cost[0] = tableprice[1] * num;
		}
		else if (x == 3)
		{
			orders[0] = tables[2];
			cost[0] = tableprice[2] * num;
		}
		else if (x == 4)
		{
			orders[0] = tables[3];
			cost[0] = tableprice[3] * num;
		}
		else if (x == 5)
		{
			orders[0] = seats[0];
			cost[0] = seatprice[0] * num;
		}
		else if (x == 6)
		{
			orders[0] = seats[1];
			cost[0] = seatprice[1] * num;
		}
		else if (x == 7)
		{
			orders[0] = seats[2];
			cost[0] = seatprice[2] * num;
		}
		else if (x == 8)
		{
			orders[0] = seats[3];
			cost[0] = seatprice[3] * num;
		}
		else if (x == 9)
		{
			orders[0] = beds[0];
			cost[0] = bedprice[0] * num;
		}
		else if (x == 10)
		{
			orders[0] = beds[1];
			cost[0] = bedprice[1] * num;
		}
		else if (x == 11)
		{
			orders[0] = beds[2];
			cost[0] = bedprice[2] * num;
		}
		cout << "You have ordered " << num << " " << orders[0] << "." << endl;
		cout << "The total cost of the item is: " << cost[0] << endl;
		cout << "You are required to pay at least " << (40 * cost[0]) / 100 << endl;
	}
	void multipurch()
	{
		double bedprice[3] = { 5000, 3000, 3800 };
		string beds[3] = { "Double Deckers", "Single Beds", "Double Beds" };
		double tableprice[4] = { 2800, 2500, 3800, 2000 };
		string tables[4] = { "Dining tables", "Office Tables", "Kitchen Tables", "Coffee Tables" };
		double seatprice[4] = { 2800, 800, 2500, 500 };
		string seats[4] = { "Arm Chairs", "Class Chairs", "Office Chairs", "Benches" };
		cout << "How many different products would you like to buy?" << endl;
		cin >> user;
		for (mmm = 1; mmm <= user; mmm++)
		{
		repeat:
			cout << "Enter your choice followed by the number of orders for the item" << endl;
			cin >> x;
			cin >> num;
			while (x == 0)
			{
				cout << "Invalid Entry." << endl << "The entries must be above zero" << endl;
				goto repeat;
			}
			if (x == 1)
			{
				orders[mmm] = tables[0];
				cost[mmm] = tableprice[0] * num;
			}
			else if (x == 2)
			{
				orders[mmm] = tables[1];
				cost[mmm] = tableprice[1] * num;
			}
			else if (x == 3)
			{
				orders[mmm] = tables[2];
				cost[mmm] = tableprice[2] * num;
			}
			else if (x == 4)
			{
				orders[mmm] = tables[3];
				cost[mmm] = tableprice[3] * num;
			}
			else if (x == 5)
		{
			orders[mmm] = seats[0];
			cost[mmm] = seatprice[0] * num;
		}
			else if (x == 6)
			{
				orders[mmm] = seats[1];
				cost[mmm] = seatprice[1] * num;
			}
			else if (x == 7)
			{
				orders[mmm] = seats[2];
				cost[mmm] = seatprice[2] * num;
			}
			else if (x == 8)
			{
				orders[mmm] = seats[3];
				cost[mmm] = seatprice[3] * num;
			}
			else if (x == 9)
			{
				orders[mmm] = beds[0];
				cost[mmm] = bedprice[0] * num;
			}
			else if (x == 10)
			{
				orders[mmm] = beds[1];
				cost[mmm] = bedprice[1] * num;
			}
			else if (x == 11)
			{
				orders[mmm] = beds[2];
				cost[mmm] = bedprice[2] * num;
			}
			cout << "You have ordered " << num << " " << orders[mmm] << "." << endl;
			cout << "The cost of the item is: " << cost[mmm] << endl;
			cout << "You are required to pay at least " << (40 * cost[mmm]) / 100 << endl;
		}
	}
};
class Customers : Orders
{
private:
	string Fname;
	string Sname;
	string purchases;
	int payments[11]; //Hold the amount paid
	double bal[11]; //Hold balance
	string custcat; //gold or silver.
	int idno;
	int distance;
public:
	void newcust()
	{
		cout << "Enter your First Name" << endl;
		cin >> Fname;
		cout << "Enter your second Name" << endl;
		cin >> Sname;
		cout << "Enter your Id No" << endl;
		cin >> idno;
	}
	void pay()
	{
		int k;
	  double minpayment;
	  if (custcat == "silver")
	  {
		  minpayment = (0.04 * cost[0]);
		  do
		  {
			  cout << "Enter the amount paid." << endl;
			  cin >> payments[mmm];
			  if (payments[mmm] == ' ' || payments[mmm] < minpayment)
			  {
				  cout << "Invalid entry. You must pay at least 40 percent of the items cost" << endl
					  ;
				  k = 1;
			  }
			  else
			  {
				  bal[0] = (cost[0] - payments[0]);
				  cout << "bal" << endl;
				  k = 0;
			  }
		  } while (k == 1);
	  }
	  else if (custcat == "gold")
	  {
		  do
		  {
			  for (mmm = 1; mmm <= user; mmm++)
			  {
				  minpayment = (0.04 * cost[mmm]);
				  cout << "Enter the amount paid for the item." << endl;
				  cin >> payments[mmm];
				  if (payments[mmm] == ' ' || payments[mmm] < minpayment)
				  {
					  cout << "Invalid entry. You must pay at least 40 percent of the items cost" <<
						  endl;
					  k = 1;
				  }
				  else
				  {
					  bal[mmm] = (cost[mmm] - payments[mmm]);
					  cout << "bal" << endl;
					  k = 0;
				  }
			  }
		  } while (k = 1);
	  }
	  cout << "Pick your item two weeks from now. Each day past the two week limit will be charged."
		  << endl;
	}
	void delivery()
	{
		if (custcat == "gold")
		{
			delcost = 0;
			cout << "Your delivery will be on the house. Thank you for chhosing Eldomatt Furniture." <<
				endl;
		}
		else if (custcat == "silver")
		{
			cout << "Info!" << endl;
			cout << "You are required to clear any balance before delivery" << endl;
			cout << "Enter the distancee to place of delivery" << endl;
			cin >> distance;
		  if (distance <= 5) //Measured in KM.
		  {
			  delcost = 500;
			  cout << delcost << endl;
		  }
		  else if (distance > 5 && distance <= 10)
		  {
			  delcost = 1200;
			  cout << delcost << endl;
		  }
		  else if (distance > 10 && distance <= 15)
		  {
			  delcost = 2000;
			  cout << delcost << endl;
		  }
		  else if (distance > 15 && distance <= 20)
		  {
			  delcost = 2800;
			  cout << delcost << endl;
		  }
		  else
		  {
			  cout << "unavailable" << endl;
		  }
		}
	}
	friend void entercat(Customers cat1);
};
int y;
void entercat(Customers cat1)
{
	if (y == 0)
	{
		cat1.custcat = "silver";
	}
	else if (y == 1)
	{
		cat1.custcat = "gold";
	}
	else
	{
		cat1.custcat = "none";
	}
}
class Employees : Orders
{
	friend class Orders;
private:
	string Fname;
	string Sname;
	int empid;
	int allocjobs = 0;
	string jobs[4];
	int status; //To hold identifier for Temp and perm hires.
		string jobid;
	int supjobs = 0;
	double pay;
	string toolrented[4];
	double t[4];
	int itemno;
public:
	int q = allocjobs - 1;
	void createemp()
	{
		cout << "Enter first name." << endl;
		cin >> Fname;
		cout << "Enter second name." << endl;
		cin >> Sname;
		cout << "Enter employee ID number." << endl;
		cin >> empid;
		cout << "Enter 1. for permanent employee, 2. for temporary hires." << endl;
		cin >> status;
	}
	void givejobs()
	{
		double bedprice[3] = { 5000, 3000, 3800 };
		string beds[3] = { "Double Deckers", "Single Beds", "Double Beds" };
		double tableprice[4] = { 2800, 2500, 3800, 2000 };
		string tables[4] = { "Dining tables", "Office Tables", "Kitchen Tables", "Coffee Tables" };
		double seatprice[4] = { 2800, 800, 2500, 500 };
		string seats[4] = { "Arm Chairs", "Class Chairs", "Office Chairs", "Benches" };
		for (q = 0; q < 4; q++)
		{
			if (itemno == 1)
			{
				jobs[q] = tables[0];
				t[q] = tableprice[0];
			}
			else if (itemno == 2)
			{
				jobs[q] = tables[1];
				t[q] = tableprice[1];
			}
			else if (itemno == 3)
			{
				jobs[q] = tables[2];
				t[q] = tableprice[2];
			}
			else if (itemno == 4)
			{
				jobs[q] = tables[3];
				t[q] = tableprice[3];
			}
			else if (itemno == 5)
			{
				jobs[q] = seats[0];
				t[q] = seatprice[0];
			}
			else if (itemno == 6)
			{
				jobs[q] = seats[1];
				t[q] = seatprice[1];
			}
			else if (itemno == 7)
			{
				jobs[q] = seats[2];
				t[q] = seatprice[2];
			}
			else if (itemno == 8)
			{
				jobs[q] = seats[3];
				t[q] = seatprice[3];
			}
			else if (itemno == 9)
			{
				jobs[q] = beds[0];
				t[q] = bedprice[0];
			}
			else if (itemno == 10)
			{
				jobs[q] = beds[1];
				t[q] = bedprice[1];
			}
			else if (itemno == 11)
			{
				jobs[q] = beds[2];
				t[q] = bedprice[2];
			}
		}
		int repeat = 0;
		do
		{
			if (allocjobs < 4)
			{
				cout << "Enter order" << endl;
				cin >> itemno;
				allocjobs++;
				cout << "Enter 1 to give more jobs, 0 to exit" << endl;
				cin >> repeat;
			}
			else
			{
				cout << "The employee has maximum number of jobs allocated." << endl;
				repeat = 0;
			}
			if (status == 2)
			{
				int t;
				cout << "Enter supervisor's empid" << endl;
				cin >> t;
				if (empid == t)
				{
					cout << Fname << endl << Sname << endl;
				}
				cout << "enter jobno" << endl;
				cin >> supjobs;
			}
		} while (repeat == 1);
		if (status == 2)
		{
			int k;
			cout << "Tools are available for rent. To rent them press 1. To continue press 0." <<
				endl;
			cin >> k;
			while (k != 0)
			{
				int j = 0;
				int store;
				int p;
				int f;
				int h;
				string tools[4] = { "Hammers", "Saws", "Randa", "Tapemeasure" };
				double toolcost[4] = { 70, 80, 150, 40 };
				double fine[4];
				cout << "The tools and their rent rates per day and fines if damaged or lost, are listed below : " << endl;
					int l = 0;
				while (l < 4)
				{
					h = 1;
					cout << h << tools[l] << " ‐ KSh." << toolcost[l] << " and a possible fine of: " << fine[l] << endl;
						++h;
					++l;
				}
			  cout << "Enter 1 to rent tool, 2 if the tool has been lost or damaged." << endl;
			  cin >> f;
			  if (f == 1)
			  {
			  rent:
				  cout << "Enter the number for the tool you would like to rent." << endl;
				  cin >> store;
				  toolrented[j] = tools[store];
				  cout << "Press 1. to rent more tools, 0. to exit." << endl;
				  cin >> p;
				  if (p == 1)
				  {
					  j++;
					  goto rent;
				  }
			  }
			  else if (f == 2)
			  {
				  int g;
				  cout << "Enter the number of the tool lost or damaged." << endl;
				  cin >> g;
				  cout << "The fine due is KSh. " << fine[g] << endl;
			  }
			  k = 0;
			};
		}
	}
	void salary()
	{
		if (status == 1)
		{
			pay = (5000 + (0.02*t[q]) + (0.01 * supjobs)); //??
		}
		if (status == 2)
		{
			pay = 0.03*t[q];
		}
	}
};
int _tmain(int argc, _TCHAR* argv[])
{
	int Z; //Z for main choice and system page
		cout << "Enter " << endl << "1. For Customer Services." << endl << "2. For Administrative Services"
		<< endl;
	cin >> Z;
	if (Z == 1)
	{
		int isfound = 0;
		Customers cat1;
		Customers c1;
		Orders p1;
		p1.showproducts();
		cout << "Enter 0 to proceed. If you would like to buy more than one type of product enter 1, 2 to exit" << endl;
			cin >> y;
		entercat(cat1);
		if (y == 0) //Needs attention.
		{
			c1.newcust();
			p1.singlepurch();
			c1.pay();
			c1.delivery();
		}
		else if (y == 1)
		{
			c1.newcust();
			p1.multipurch();
			c1.pay();
			c1.delivery();
		}
		system("pause");
		cout << "Thank you for using the service. Goodday." << endl;
		system("pause");
		goto exit;
	}
	else if (Z == 2)
	{
		int v;
		Orders o1;
		Employees e1;
	here:
		cout << "To enter a new employee's data enter 1, to allocate jobs enter 2, to calculate pay enter 3." << endl;
			cin >> v;
		if (v == 1)
		{
			e1.createemp();
		}
		else if (v == 2)
		{
			o1.showproducts();
			e1.givejobs();
		}
		else if (v == 3)
		{
			e1.salary();
		}
		else
		{
			cout << "Invalid Entry. Try Again." << endl;
			goto here;
		}
		system("pause");
	}
exit:
	return 0;
};
