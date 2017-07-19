#include <iostream>
#include  <cstdlib>

using namespace std;
int max_number = 0, loops = 0;
void random_gen(int, int);
void get_input(int&,int&);
bool go_again = true;
char go_again_response = 'a';

int main()
{
    while (go_again == true)
    get_input(loops, max_number);
    random_gen(loops, max_number);
    cout << "Press any key to go again, or e for exit";
    cin >> go_again_response;
    if (go_again_response == 'e') go_again = false;

    return 0;
}


void random_gen(int loops, int max_number){
    for(int x = 1; x<loops;x++)
    {
        cout << 1+(rand()%max_number) << endl;
        x++;
    }
}


void get_input(int& loops,int& max_number){
    cout << "Please input the number of random numbers to generate.\n\n";
    cin >> loops;
    cout << "Please input the max number for the random numbers\n\n";
    cin >> max_number;
}
