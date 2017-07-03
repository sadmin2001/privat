//
//  main.cpp
//  Class Stuff 
//  This is d
//  Created by Sadmin on 7/2/17.
//  Copyright © 2017 Sadmin. All rights reserved.
// Program outputs a loop however many times the user wants, but not more than 50.
// Uses two "while" loops as switches to set boolean value and then execute the loop


#include <iostream>

using namespace std;

int main()
{
    int loops;
    bool over50flag = false;
    cout << "How many loops, but less than 50 loops\n";
    cin >> loops;
    while (loops > 50) {
        
        over50flag = true;
        cout << "That's more than 50. Try again\n";
        cin >> loops;
        
    }
    while (loops > 0 && over50flag == false)
    {
        cout << " \n YOU GET A LOOP! \n";
        loops = loops - 1;
    
    }
    std::cout << "\nDone!\n";
    return 0;
}
