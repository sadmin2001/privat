/* pseudocode
get_input function calls by reference and sets variables loops and max number
Loops is used to set the number of numbers to generate, and max number sets the upper limit of the random numbers generated
Once those two variable are set, we call random_gen to pass the variables by value, and declare variable x to count the loop.
random_get creates a loop for (loops) and generates a random number with a modulus of the max_number, and adds one to x
When x = (loops), the loop will end.
*/
#include <iostream>
#include  <cstdlib>
#include <ctime

using namespace std;
int max_number = 0, loops = 0;
void get_input(int&, int&);
void random_gen(int, int);



int main()
{
    get_input(loops, max_number);
    random_gen(loops, max_number);

    return 0;
}


void get_input(int&, int&){
    cout << "Please input the number of random numbers to generate.\n\n";
    cin >> loops;
    cout << "Please input the max number for the random numbers\n\n";
    cin >> max_number;

}


void random_gen(int, int){
    for(int x = 1; x<loops;x++)
    {cout << 1+(rand()%max_number) << endl;
        }
        }
