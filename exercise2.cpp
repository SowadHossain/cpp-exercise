#include <iostream>
#include <ostream>

using namespace std;

int main(){
	int sales = 95000;
	double stateTax = 4.0/100;
	double countyTax = 2.0/100;
	double stateTaxAmount = sales * stateTax;
	double countyTaxAmount = sales * countyTax;
	double totalTaxAmount = stateTaxAmount + countyTaxAmount;
	
	cout << "Sales = $" << sales << endl
		<< "State Tax = $" << stateTaxAmount << endl
		<< "County Tax = $" << countyTaxAmount << endl
		<< "Total Payable Tax = $" << totalTaxAmount << endl ;

}








