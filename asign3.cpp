#include <iostream>

using namespace std;

int main()
{

    int total_income, final_tax;
    cout << "Please input your income:";
    cin >> total_income;
    if (total_income > 15000){
            if (total_income > 25000) {
            final_tax = ((total_income - 15000) * 1.05);
            cout << "your tax is \0";
            cout << final_tax;
            }
            else {
                final_tax = ((total_income - 14500) * 1.10);
            cout << "your tax is \0";
            cout << final_tax;
            }
    }
    else {cout << "No Tax!";}
    cout << "\n End of line." << endl;
    return 0;
}
