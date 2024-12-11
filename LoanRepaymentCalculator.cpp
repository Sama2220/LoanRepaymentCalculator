#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


string File_name;

class Bank {
public:
	string name;
	string loan;
	string choice;
	int age;
	int maxMonths;
	int repayPeriod;
	double monthlyIncome;
	double intRate;
	double barrowMoney;
	char selection;
	
	

void customerDetails() {
	

	cout << "\nEnter your name :";
	cin >> name;
	
	cout << "Enter your age :";
	cin >> age;
	
	cout << "Enter monthly income :";
	cin >> monthlyIncome;
}

void loanDetails() {

	

	if (!(age >= 18 && age <= 55 && monthlyIncome >= 45000) && !(age >= 25 && age <= 55 && monthlyIncome >= 100000) && !(age >= 25 && age <= 35 && monthlyIncome >= 45000) && !(age >= 60 && monthlyIncome >= 35000) && !(age >= 30 && age <= 55 && monthlyIncome >= 100000)) {
		cout << "You can't apply for any loan"<<endl;
		choice = "no";
	}
	else {

		cout << "\nLoan Details(LKR)" << endl << endl;
		cout << "Loan Name          Max. Loan Amount     Max. Repay period(months)    interest rate" << endl;
		cout << "----------------------------------------------------------------------------------" << endl;

		if (age >= 18 && age <= 55 && monthlyIncome >= 45000) {
			cout << "Vehical            1000000               60                           14" << endl;
			choice = "yes";
		}
		if (age >= 25 && age <= 55 && monthlyIncome >= 100000) {
			cout << "Housing            2500000               60                            8" << endl;
			choice = "yes";
		}
		if (age >= 25 && age <= 35 && monthlyIncome >= 45000) {
			cout << "Education          1500000               284                           6" << endl;
			choice = "yes";
		}
		if (age >= 60 && monthlyIncome >= 35000) {
			cout << "Senior Citizen      500000               60                            4.5" << endl;
			choice = "yes";
		}
		if (age >= 30 && age <= 55 && monthlyIncome >= 100000) {
			cout << "Personal           2000000               60                           14.5" << endl;
			cout << "                   3000000               84                           16.2" << endl;
			choice = "yes";
		}


		cout << "----------------------------------------------------------------------------------" << endl;
	}
}

void Selection() {
	
	cout << endl;
	

	if (age >= 18 && age <= 55 && monthlyIncome >= 45000) {
		cout << "Vehical - V " << endl;

	}
	if (age >= 25 && age <= 55 && monthlyIncome >= 100000) {
		cout << "Housing - H" << endl;
	}
	if (age >= 25 && age <= 35 && monthlyIncome >= 45000) {
		cout << "Education - E" << endl;
	}
	if (age >= 60 && monthlyIncome >= 35000) {
		cout << "Senior Citizen - S " << endl;
	}
	if (age >= 30 && age <= 55 && monthlyIncome >= 100000) {
		cout << "Personal - P" << endl;
		
	}
	cout << "Select one of above to proceed : " ;
	cin >> selection;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << "\nEnter the amount of money you wish to barrow : ";
	cin >> barrowMoney;
	cout << "Possible repay period (in months) : ";
	cin >> repayPeriod;

	if (selection == 'V'|| selection == 'v') {
		intRate = 14;
		maxMonths = 60;
		loan = "Vehical";
		
		if (barrowMoney > 1000000) {
			cout << "Sorry! You can't get that much of money \nMax. loan amount = 1000000" << endl;
		}
		if (repayPeriod > maxMonths) {
			cout << "Sorry!  Max. repay period = 60" << endl;
		}
		if (barrowMoney <= 1000000 && repayPeriod <= 60){
			calculations(intRate, repayPeriod, barrowMoney);
		}
	}

	if (selection == 'H' || selection == 'h') {
		intRate = 8;
		maxMonths = 60;
		loan = "Housing";

		if (barrowMoney > 2500000) {
			cout << "Sorry! You can't get that much of money \nMax. loan amount = 2500000" << endl;
		}
		if (repayPeriod > maxMonths) {
			cout << "Sorry!  Max. repay period = 60" << endl;
		}
		if (barrowMoney <= 2500000 && repayPeriod <= 60) {
			calculations(intRate, repayPeriod, barrowMoney);
		}
	}

	if (selection == 'E' || selection == 'e') {
		intRate = 6;
		maxMonths = 284;
		loan = "Education";

		if (barrowMoney > 1500000) {
			cout << "Sorry! You can't get that much of money \nMax. loan amount = 1500000" << endl;
		}
		if (repayPeriod > maxMonths) {
			cout << "Sorry!  Max. repay period = 284" << endl;
		}
		if (barrowMoney <= 1500000 && repayPeriod <= 284) {
			calculations(intRate, repayPeriod, barrowMoney);
		}
	}
	if (selection == 'S' || selection == 's') {
		intRate = 4.5;
		maxMonths = 60;
		loan = "Senior Citizen";

		if (barrowMoney > 500000) {
			cout << "Sorry! You can't get that much of money \nMax. loan amount = 500000" << endl;
		}
		if (repayPeriod > maxMonths) {
			cout << "Sorry!  Max. repay period = 60" << endl;
		}
		if (barrowMoney <= 500000 && repayPeriod <= 60) {
			calculations(intRate, repayPeriod, barrowMoney);
		}
	}

	if (selection == 'P' || selection == 'p') {
		int personalMinor;
		cout << "\n                 interest rate" << endl;
		cout << "1 - Personal 1      14.5" << endl;
		cout << "2 - Personal 2      16.2" << endl;
		cout << "Select 1 or 2 : ";
		cin >> personalMinor;

		loan = "Personal";
		
		if (personalMinor == 1) {
			intRate = 14.5;
			maxMonths = 60;

			if (barrowMoney > 2000000) {
				cout << "Sorry! You can't get that much of money \nMax. loan amount = 2000000" << endl;
			}
			if (repayPeriod > maxMonths) {
				cout << "Sorry!  Max. repay period = 60" << endl;
			}
			if (barrowMoney <= 1500000 && repayPeriod <= 284) {
				calculations(intRate, repayPeriod, barrowMoney);
			}
		}

		if (personalMinor == 2) {
			
			intRate = 16.2;
			maxMonths = 84;

			if (barrowMoney > 3000000) {
				cout << "Sorry! You can't get that much of money \nMax. loan amount = 3000000" << endl;
			}
			if (repayPeriod > maxMonths) {
				cout << "Sorry!  Max. repay period = 84" << endl;
			}
			if (barrowMoney <= 3000000 && repayPeriod <= 84) {
				calculations(intRate, repayPeriod, barrowMoney);
			}
		}
	}
	

}

void calculations(double interest, int n, double loanAmount) {
	fstream outputFile;
	outputFile.open(File_name, ios::out| ios::app); // Open the file in append mode
	
	double IR,D,totMonPayment,A, prevMonInterest=0,monInterest,totInterest = 0,totPayment;
	IR = interest/ 1200;
	D = (pow((1+IR),n)-1)/(IR*pow((1+IR),n));
	totMonPayment = loanAmount / D;

	totPayment = totMonPayment * n;
	A = loanAmount;
	outputFile<< "Name of the customer : " << name << endl
		<< "Selected Loan : " << loan << endl
		<< "Maximum repay period : " << maxMonths << endl
		<< "Annual Interest Rate : " << intRate << endl
		<< "Requested loan amount : " << barrowMoney << endl
		<< "Repay period : " << repayPeriod << endl << endl
		<< "Month        Remaining Loan Amount      Interest        Repaid loan amount" << endl
		<< "----------------------------------------------------------------------------------" << endl;
	
	outputFile.close();
	
	

	for (int i = 1; i <= n; i++){
		monInterest = A * IR;
		prevMonInterest = totMonPayment - monInterest;
		totInterest += monInterest;
		writeToFile(i,A, monInterest, prevMonInterest,totPayment);
		A = loanAmount - prevMonInterest;
		
	}

	outputFile.open(File_name, ios::out | ios::app); // Open the file in append mode
	outputFile << "\nTotal amount of money paid by the customer at the end of the loan repay period : " << totPayment;
	outputFile.close();
	
	cout << "\nTotal monthly payment = " << totMonPayment << endl;
	cout << "Total amount of interest end of the loan period = " << totInterest << endl;
	cout << "Total Payment end of the loan period = " << totPayment<<endl;
	cout << "----------------------------------------------------------------------------------" << endl;
	cout << endl<<endl;
	
}

void writeToFile(int month,double a,double interest,double loanRepaid, double totalPayment) {
	
	fstream outputFile;
	outputFile.open(File_name,ios::out | ios::app); 
	if (outputFile.is_open())
	{
		outputFile << month << "             " << a << "                    " << interest << "               " << loanRepaid << endl;
		outputFile.close(); 
	}
	else {
		cout << "Unable to open the file." << endl;
	}
}

}; 


int main() {

	while (true) {
		Bank b1;


		b1.customerDetails();
		File_name = b1.name + ".txt";
		b1.loanDetails();
		if (b1.choice != "yes") {
			continue;
		}
		b1.Selection();


	}
	return 0;



}