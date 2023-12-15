#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan , rate ,amount;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> rate;
	cout << "Enter amount you can pay per year: ";
	cin >> amount;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	int year =1 ;
	double prevbalance = loan,interest,total,newbalance;
	cout << fixed << setprecision(2); 
	while(newbalance != 0){
	cout << setw(13) << left << year; 
	year++ ;
	cout << setw(13) << left << prevbalance;
	interest = rate*prevbalance/100;
	cout << setw(13) << left << interest;
	total = prevbalance+interest;
	cout << setw(13) << left << total;
	if(total<amount)amount = total;
	cout << setw(13) << left << amount;
	newbalance = total-amount;
	cout << setw(13) << left << newbalance;
	cout << "\n";	
	prevbalance = newbalance;
	}
	return 0;
}
