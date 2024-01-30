// TIC_TAC_TOE GAME

#include <iostream>
using namespace std;
int iCounter = 0;

class TicTacToe
{
private:
    char Arr[3][3] = {};

public:
    void Display();
    void Update(int iNo, char cValue);
    bool CheckWin(string Player1, string Player2);
    bool Counter();
    

    TicTacToe()
    {
        cout << "-----------------------------------RULES OF GAME------------------------------------------\n"
             << "1. Dont Insert Value at position where already has an value\n"
             << "2. If you enter wrong choice then turn will pass to next player\n"
             << "-------------------------------------------------------------------------------------------\n\n";
    }
};

void TicTacToe ::Display()
{
    cout << "THE UPDATED CARD BOARD IS : " << endl;

    cout << "-------------------" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "|  ";

        for (int j = 0; j < 3; j++)
        {
            cout << Arr[i][j] << "  |  ";
        }

        cout << endl;
        cout << "-------------------" << endl;
    }
}

void TicTacToe ::Update(int iNo, char cValue)
{
    switch (iNo)
    {
    case 1:
        Arr[0][0] = cValue;
        break;
    case 2:
        Arr[0][1] = cValue;
        break;
    case 3:
        Arr[0][2] = cValue;
        break;
    case 4:
        Arr[1][0] = cValue;
        break;
    case 5:
        Arr[1][1] = cValue;
        break;
    case 6:
        Arr[1][2] = cValue;
        break;
    case 7:
        Arr[2][0] = cValue;
        break;
    case 8:
        Arr[2][1] = cValue;
        break;
    case 9:
        Arr[2][2] = cValue;
        break;
    }
    iCounter++;
}

bool TicTacToe ::CheckWin(string Player1, string Player2)
{
    if ((Arr[0][0] == 'O' && Arr[0][1] == 'O' && Arr[0][2] == 'O') || (Arr[1][0] == 'O' && Arr[1][1] == 'O' && Arr[1][2] == 'O') || (Arr[2][0] == 'O' && Arr[2][1] == 'O' && Arr[2][2] == 'O') || (Arr[0][0] == 'O' && Arr[1][0] == 'O' && Arr[2][0] == 'O') || (Arr[0][1] == 'O' && Arr[1][1] == 'O' && Arr[2][1] == 'O') || (Arr[0][2] == 'O' && Arr[1][2] == 'O' && Arr[2][2] == 'O') || (Arr[0][0] == 'O' && Arr[1][1] == 'O' && Arr[2][2] == 'O') || (Arr[0][2] == 'O' && Arr[1][1] == 'O' && Arr[2][0] == 'O'))
    {
        cout << Player1 << " Won The Game\n\n\n";
        cout << "End of Game\n\n";
        return true;
    }
    else if ((Arr[0][0] == 'X' && Arr[0][1] == 'X' && Arr[0][2] == 'X') || (Arr[1][0] == 'X' && Arr[1][1] == 'X' && Arr[1][2] == 'X') || (Arr[2][0] == 'X' && Arr[2][1] == 'X' && Arr[2][2] == 'X') || (Arr[0][0] == 'X' && Arr[1][0] == 'X' && Arr[2][0] == 'X') || (Arr[0][1] == 'X' && Arr[1][1] == 'X' && Arr[2][1] == 'X') || (Arr[0][2] == 'X' && Arr[1][2] == 'X' && Arr[2][2] == 'X') || (Arr[0][0] == 'X' && Arr[1][1] == 'X' && Arr[2][2] == 'X') || (Arr[0][2] == 'X' && Arr[1][1] == 'X' && Arr[2][0] == 'X'))
    {
        cout << Player2 << " Won The Game\n\n\n";
        cout << "End of Game\n\n";
        return true;
    }
    return false;
}

bool TicTacToe :: Counter()
{
    if(iCounter > 9)
    {
        return true;

    }
    else
    {
        return false;
    }
}

int main()
{

    char cValue = '\0';
    int iNo = 0;
    int iCounter = 1;
    bool bRet = false;

    TicTacToe obj;
    obj.Display();

    string Player1;
    string Player2;
    cout << "Enter the Name of Player 1 : " << endl;
    cin >> Player1;
    cout << "Enter the Name of Player 2: " << endl;
    cin >> Player2;

    while (iCounter <= 5)
    {
        // cout<<iCounter<<endl;
        cout << Player1 << " turn : " << endl;
        cout << "Enter the location where you have to add 'O' :" << endl;
        cin >> iNo;

        if (iNo > 9 && iNo == 0)
        {
            cout << " Incorrect Value \n\n";
        }
        else
        {
            obj.Update(iNo, 'O');
            obj.Display();
            bRet = obj.CheckWin(Player1, Player2);

            if (bRet == true)
            {
                break;
            }

            bRet = obj.Counter();
            if(bRet == true)
            {
                break;
            }
        }

        cout << Player2 << " now your turn : " << endl;
        cout << "Enter the location where you have to add 'X' :" << endl;
        cin >> iNo;

        if (iNo > 9 && iNo == 0)
        {
            cout << " Incorrect Value \n\n";
        }
        else
        {
            obj.Update(iNo, 'X');
            obj.Display();
            bRet = obj.CheckWin(Player1, Player2);

            if (bRet == true)
            {
                break;
            }
            bRet = obj.Counter();
            if(bRet == true)
            {
                break;
            }
        }

        iCounter += 1;
    }
    cout << "Thank You For Playing.....\nVisit Again.....\n\n";

    return 0;
}