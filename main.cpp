#include "Appointment.h"
#include "Time.h"
#include "Date.h"
#include "Daily.h"
#include "Monthly.h"
#include "Onetime.h"
#include "Weekly.h"

using namespace std;
#include <iostream>      
// Needed for cout
#include <cstdlib>       
#include <vector>
// Needed for the exit function


//void create(vector<Appointment>&);

void ask(Appointment& app) {
	app.print();
}

int main() {

	/*
	Appointment* appt1;
	appt1 = new Appointment(_________);
	appt1->
	*/

	int year;
	int month;
	int day;

	string choice;
	Time time2,time3 ;
	int shr, smin,ssec;
	int ehr,emin,esec;


	string desc;
	Date day2, day3;
	
	
	Monthly monthlyobj;
	
	//create date

	string type;

	vector<Appointment*> schedule(3);
	Onetime onetimeobj;

	onetimeobj = Onetime("see the dentist", Date(1998, 9, 4),

		Time(11, 30, 0), Time(12, 30, 0));
	schedule[0] = &onetimeobj;

	schedule[1] = new Daily("brush my teeth", Time(8, 0, 0),

		Time(8, 5, 0));

	schedule[2] = new Monthly("clean the house", 4,

		Time(14, 0, 0), Time(16, 0, 0));

	cout << "Enter year month day: ";



	

	cin >> year >> month >> day;

	cout << "You have these appointments: " << endl;
	
	
	/*schedule[0]->print();
	schedule[1]->print();
	schedule[2]->print();
	*/

	for (int i = 0; i < 3; i++) 
		{
		ask(*schedule[i]);
		}
/*	for (int i = 0; i < schedule.size(); i++) {
		if (schedule[i]->occurs_on(year, month, day))
		{
			schedule[i]->Onetime.print();
		//	schedule[i]->Monthly.print();
		//	schedule[i]->Weekly.print();

		//	cout << schedule[i]->Daily.print();

		}
		else (schedule[i]->occurs_on(year, month, day) == false) {
			cout << "No appointment";
		}
	}
	*/

	//new
	cout << "\nWant to enter an appointment (e to exit)? ";
	cin >> choice;
	cout << "\nEnter type: ";
	cin >> type;
	cout << "\nEnter the description: ";
	cin >> desc;
	cout << "\nEnter the year: ";
		cin >> year;
		cout << "\nEnter the month: ";
		cin >> month;
		cout << "\nEnter the day: ";
		cin >> day;


		day2= Date(year,month,day);
	cout << "\nEnter start time hour: ";
	cin >> shr;
	cout << "\nEnter start time minute: ";
	cin >> smin;
	cout << "\nEnter start time second: ";
	cin >> ssec;
	cout<<"\nEnter end time hour: ";
	cin >> ehr;
	cout << "\nEnter end time minute: ";
	cin >> emin;
	cout << "\nEnter end time second: ";
	cin >> esec;

	time2 = Time(shr,smin,ssec);
	time3 = Time(ehr,emin,esec);


	while (choice != "e") {

		cout << "\nWant to enter an appointment (e to exit)? ";
		cin >> choice;
		cout << "\nEnter type: ";
		cin >> type;
		cout << "\nEnter the description: ";
		cin >> desc;
		cout << "\nEnter the year: ";
		cin >> year;
		cout << "\nEnter the month: ";
		cin >> month;
		cout << "\nEnter the day: ";
		cin >> day;


		day2 = Date(year, month, day);
		cout << "\nEnter start time hour: ";
		cin >> shr;
		cout << "\nEnter start time minute: ";
		cin >> smin;
		cout << "\nEnter start time second: ";
		cin >> ssec;
		cout << "\nEnter end time hour: ";
		cin >> ehr;
		cout << "\nEnter end time minute: ";
		cin >> emin;
		cout << "\nEnter end time second: ";
		cin >> esec;

		time2 = Time(shr, smin, ssec);
		time3 = Time(ehr, emin, esec);
	}


	/*
		if (type=="Monthly"|| type == "monthly"){
			monthlyobj=Monthly(desc,month,time2,time3);
		}

		if (type == "Daily" || type == "daily") {
			dailyobj = Daily(desc, month, time2, time3);
		}

		if (type == "Weekly" || type == "weekly") {
			weeklyobj = Weekly(desc, month, time2, time3);
		}

		if (type == "Onetime" || type == "onetime") {
			onetimeobj = Onetime(desc, month, time2, time3);
		}
		*/

/*	vector <Appointment> Appointment*;

	Appointment.create();

	void create(vector)
*/
	return 0;
	}