#include<iostream>
#include<iomanip>
using namespace std;

int main(){

    string movieName;
    double adultTicketPrice, childTicketPrice;
    int noOfAdultTicketsSold, noOfChildTicketsSold;
    double percentDonation, grossAmount, amountDonated, netSaleAmount;

    cout << "Enter Movie Name: " << endl;
    getline(cin, movieName);
    cout << endl;
    cout << "Enter the price of an adult ticket: " << endl;
    cin >> adultTicketPrice;
    cout << endl;
    cout << "Enter the price of a child ticket: " << endl;
    cin >> childTicketPrice;
    cout << endl;
    cout << "Enter the no. of adult tickets sold: " << endl;
    cin >> noOfAdultTicketsSold;
    cout << endl;
    cout << "Enter the no. of child tickets sold: " << endl;
    cin >> noOfChildTicketsSold;
    cout << endl;
    cout << "Enter the percentage gross amount to be donated: " << endl;
    cin >> percentDonation;
    cout << endl << endl;

    grossAmount = adultTicketPrice * noOfAdultTicketsSold + childTicketPrice * noOfChildTicketsSold;
    amountDonated = grossAmount * percentDonation / 100;
    netSaleAmount = grossAmount - amountDonated;

    cout << "************************************************************" << endl;
    cout << setfill('.') << left << setw(35) << "Movie Name: "
         << right << " " << movieName << endl;
    cout << setfill('.') << left << setw(35) << "Number of Tickets Sold: "
         << right << " " << "$ " << noOfAdultTicketsSold + noOfChildTicketsSold << endl;
    cout << fixed << setprecision(2);
    cout << setfill('.') << left << setw(35) << "Gross Amount: "
         << right << " " << "$ " << grossAmount << endl;
    cout << left << setw(35) << "Percentage of Gross Amount Donated: "
         << right << " " << percentDonation << "%" << endl;
    cout << setfill('.') << left << setw(35) << "Amount Donated: "
         << right << " " << "$ " << amountDonated << endl;
    cout << setfill('.') << left << setw(35) << "Net Sale: "
         << right << " " << "$ " << netSaleAmount << endl;
    cout << "***********************************************************" << endl;

    return 0;
}
