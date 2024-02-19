#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main() {
    cout<< "\n\t\t--------welcome to the number guessing game--------\n"<< endl;
    cout<< "\n\t\t----you have to guess a number between 1 to 100";
    cout<< "\n\t\t----lets start playing and best of luck"<<endl;

    srand(time(0));
    int randomnumber = ( rand() %100) + 1;

    cout<< "\n^^**you will have total five chance to guess the correct number.**^^\n";
    int chanceleft = 6;
    int playerinput;

    for (int i = 1; i <= 6; i++)
    {
        cout << "\n----enter the number: ";
        cin >> playerinput;

        if(playerinput == randomnumber)
        {
            cout<< "\ncongrates!!. you have guessed the right number\n";
            cout<< "\nthanks for playing. having a nice day";
            break;
        
        }
        else
        {
            if (playerinput > randomnumber)
            {
                cout<< "\n"" insert a smaller number . try again"""<<endl;
            
            }
            else
            {
                cout<<"\n""[ insert a larger number . try again ]"""<<endl;
            }
        }
        chanceleft--;
        cout<< "\n( chances left to guess the random number: " << chanceleft <<")"<<endl;

        if ( chanceleft ==0)
        {
            cout<< "\n sorry your chance has been finished to guess the random number\n"<<endl;
            cout<< "the random number was : " << randomnumber <<endl;
            cout<< " thanks for playing .";
        }
        }
    cout<< "\n ";
    return 0;
}