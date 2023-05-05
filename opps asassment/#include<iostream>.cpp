#include<iostream>
using namespace std;

string ename, name;
int etime, server;
double totalcostdinner, cost1, cost2, subcost;

double cod = 50, averagecost, gnumber, totalcost, depositeamount;


int
main ()
{
  cout << "*******event manag*******" << endl;

  cout << "enter event name :";
  cin >> ename;
  cout << "enter your full name :";
  cin >> name;
  cout << "Enter the number of guest :";
  cin >> gnumber;
  cout << "enter the number of min in event :";
  cin >> etime;

  cout << "-------------event estimate for :" << name;
  cout << "-------------" << endl;

  cout << "1 server can handel 20 guest " << endl;
  cout << "enter how many server you want :";
  cin >> server;

  cost1 = etime / 60 * 18.50;
  cost2 = etime % 60 * .40;

  subcost = cost1 + cost2;
  //totalcost=subcost*server;


  cout << "The cost of one server :" << subcost << endl;

  totalcostdinner = gnumber * cod;

  cout << "cost of dinner :" << totalcostdinner << endl;


  averagecost = (totalcostdinner / gnumber);

  cout << "averagecost of per person :" << averagecost << endl;

  totalcost = totalcostdinner + (subcost * server);

  cout << "Your totalcost is :" << totalcost << endl;
  cout << "Please deposite a 25% deposit amount to book your event " << endl;

  depositeamount = totalcost * .25;

  cout << "The deposit needed is " << depositeamount;


  return 0;

}
