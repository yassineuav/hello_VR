#include <iostream>

using namespace std;

int main() {
    /*
     * exercise 1:
     * you made a sales for 95,000$
     * state tax = 4%
     * country tax = 2%
     * calculate the net income
     */

    const double state_tax_rate = .04;
    const double county_tax_rate = .02;

    double sales = 95000;

    double net_income = sales  - (sales * (state_tax_rate + county_tax_rate));

    cout << "Sales: $" << sales << endl;

    cout << net_income << endl;

    return 0;
}
