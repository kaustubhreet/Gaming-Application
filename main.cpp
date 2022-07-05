#include <iostream>
 // Needed to use random numbers
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <time.h>

#include "casino.h"
#include "quiz.h"
#include "shooter.h"
#include "brickbreaker.h"
#include "Detective.h"
using namespace std;

class starting : public casino, public BrickBreaker, public student, public Shooter, public Agent
{
private:
    int con;

public:
    casino c;
    BrickBreaker b;
    student st;
    Shooter sh;
    Agent dec;
    starting();
    void logged()
    {
        system("cls");
        int end = 0;
        while (end != 5)
        {
            cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
            cout << "$$$                                                $$$\n";
            cout << "$$$\t Welcome to Our Gaming World               $$$\n";
            cout << "$$$                                                $$$\n";
            cout << "$$$\t  Select Your Game                         $$$\n";
            cout << "$$$\t 1. Casino Game                            $$$\n";
            cout << "$$$\t 2. Puzzle game                            $$$\n";
            cout << "$$$\t 3. Space shooter                          $$$\n";
            cout << "$$$\t 4. Secret game                            $$$\n";
            cout << "$$$\t 5. BrickBreaker                           $$$\n";
            cout << "$$$\t Press any key to exit                     $$$\n";
            cout << "$$$                                                $$$\n";
            cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\n";
            cin >> con;
            switch (con)
            {
            case 1:
                c.condition();
                break;

            case 2:
                st.input();
                break;

            case 3:
                sh.Begin();
                break;

            case 4:
                dec.clearScreen();
                break;

            case 5:
                b.condition();
                cout << endl
                     << endl;
                break;
            default:
                cout << "\n You Have Chosen Wrong Input\n";
                break;
            }
            end++;
            system("cls");
        }
    }

};

starting::starting()
{

    int e = 0;
    char Username[15];
    char Password[15];
    char original_Username[25] = "kaustubh";
    char original_Password[15] = "kartikay228";
    cout<<"\n\n\t\t\t\t\tWELCOME TO THE GAMING WORLD";
    cout<<"\n\t\t\t\t<..........................................>";
    cout<<"\n\n\n\t\t\t\t\t  Please Login to Continue";
    do
    {
        cout<<"\n\t\t\t\t    __________________________________";
        printf("\n\t\t\t\t    Enter your Username and Password :)");
        printf("\n\n\t\t\t\t    USERNAME:");
        scanf("%s", &Username);
        printf("\n\t\t\t\t    PASSWORD:");
        scanf("%s", &Password);
        if (strcmp(Username, original_Username) == 0 && strcmp(Password, original_Password) == 0)
        {
            printf("\n\t\t\t\t    Login Successfull:)");
            getch();
            //logged(); //after login then base class will be implemented
            break;
        }
        else
        {
            printf("\n\t\t\t\t    Password in incorrect:(Try Again!)");
            e++;
            getch();
        }
    } while (e <= 2);
    if (e > 2)
    {
        printf("\n\n\n\t\t\t\t    Tries attempts exceeded. You cannot login. :( :(");
        getch();
        exit(0);
    }
    system("cls");
}

int main()
{
    system("cls");
    starting st;
    st.logged();
    return 0;
}
