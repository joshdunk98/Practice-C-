#include <iostream>

using namespace std;

int main()
{
    const auto TOUCHDOWN = 6;
    const auto FIELDGOAL = 3;
    const auto PAT = 1;
    const auto SAFETY = 2;

    auto NEP = FIELDGOAL + FIELDGOAL + TOUCHDOWN + PAT;
    auto LAR = FIELDGOAL;

    cout << endl;
    cout << "In the last Super Bowl Game, the New England Patriots scored " << NEP <<
            " points \nand the Los Angeles Rams scored " << LAR << " points." << endl;
    cout << endl;

    return 0;
}