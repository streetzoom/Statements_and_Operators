#include <iostream>
/*
    Write a program that asks the user to enter the following:
	An integer representing the number of cents

	You may assume that the number of cents entered is greater than or equal to zero

	The program should then display how to provide that change to the user.

	In the US:
		1 dollar is 100 cents
		1 quarter is 25 cents
		1 dime is 10 cents
		1 nickel is 5 cents, and
		1 penny is 1 cent.

	Here is a sample run:

	Enter an amount in cents :  92

	You can provide this change as follows:
	dollars    : 0
	quarters : 3
	dimes     : 1
	nickels   : 1
	pennies  : 2
*/

int main() {
    // dollar converter
    const short int cents_in_dollar {100};
    const short int cents_in_quarter {25};
    const short int cents_in_dime {10};
    const short int cents_in_nickel {5};

    short int cents_amount {};

    std::cout << "Enter an amount in cents: " << std::endl;
    std::cin >> cents_amount;

    int balance{}, dollars{}, quarters{}, dimes{}, nickels{}, pennies{};

    dollars = cents_amount / cents_in_dollar;
    balance = cents_amount % cents_in_dollar;

    quarters = balance / cents_in_quarter;
    balance %= cents_in_quarter;

    dimes = balance / cents_in_dime;
    balance %= cents_in_dime;

    nickels = balance / cents_in_nickel;
    balance %= cents_in_nickel;

    pennies = balance;

    std::cout << "You can provide change for this as follows:" << std::endl;
    std::cout << "Dollars: " << dollars << std::endl;
    std::cout << "Quarters: " << quarters << std::endl;
    std::cout << "Dimes: " << dimes << std::endl;
    std::cout << "Nickels: " << nickels << std::endl;
    std::cout << "Pennies: " << pennies << std::endl;
    return 0;
}
