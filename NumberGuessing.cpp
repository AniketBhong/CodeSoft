// Number Guessing Game

#include <iostream>
#include <random>
using namespace std;

void GuessNumber()
{
    random_device rd;
    uniform_int_distribution<int> dist(0, 10);

    int rNo = dist(rd);
    int iUser = 0;

    do
    {
        cout << "Enter the number : " << endl;
        cin >> iUser;

        if (rNo == iUser)
        {
            cout << "Congrate !! You Guessed Correct Number..." << endl;
        }
        else if (rNo > iUser)
        {
            cout << "Ohhh !! Your Guessed Number is too small... \nPlease Try Again..." << endl;
        }
        else if (rNo < iUser)
        {
            cout << "Ohhh !! Your Guessed Number is too Large... \nPlease Try Again..." << endl;
        }

    } while (rNo != iUser);
}

int main()
{
    cout << "------------------Rules of Game------------------" << endl
         << "The Guessing Number Should Be In Range 0 To 10" << endl
         << "The Game Will Continue Until You Guess Right Number" << endl
         << endl;

    GuessNumber();

    return 0;
}
