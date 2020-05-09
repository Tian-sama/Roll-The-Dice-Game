#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
/*
	This program repeatedly generates and prints three dice values and will continue until all three dice have the same value.
	 The number of dice rolls needed to accomplish this should be printed.

    Written by:   Tianna Hatch
	Date written: 5/9/2020
*/

int roll_three (int d1, int d2, int d3);
void print_dice (int dice1, int dice2, int dice3);

int main()
{
srand(time(0));

int d1, d2, d3, dice1, dice2, dice3, rolls;

rolls = 0;

while ((dice1 != dice2) || (dice2 != dice3))
{
dice1 = roll_three (d1, d2, d3);
dice2 = roll_three (d1, d2, d3);
dice3 = roll_three (d1, d2, d3);

print_dice (dice1, dice2, dice3);
rolls++;

}
   cout << "\nDice Rolls: " << rolls << endl;

   return 0;
}


int roll_three (int d1, int d2, int d3)
    {
    int dice1, dice2, dice3;

	dice1 = (rand() % 6) + 1;
	dice2 = (rand() % 6) + 1;
    dice3 = (rand() % 6) + 1;

    return dice1, dice2, dice3;

    }

void print_dice (int dice1, int dice2, int dice3)
    {
	cout << "<" << dice1 <<", " <<dice2<<", " <<dice3<< ">\n";

    }



