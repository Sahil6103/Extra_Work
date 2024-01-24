// Rock, Paper, Scissor Game

#include <iostream>
#include <cstdlib>
using namespace std;

class RPS_game
{
public:
     string name;
     int rounds;
     void heading_name()
     {
          cout << "*--*--*--*--*--*--*--*--*--*--*--*--*--*";
          cout << endl
               << endl
               << "\t\tN A M E";
          cout << endl
               << endl
               << "*--*--*--*--*--*--*--*--*--*--*--*--*--*";
          cout << endl
               << endl
               << "Enter Your Name : ";
          cin >> name;
     }

     void heading_rounds()
     {
          cout << endl
               << "*--*--*--*--*--*--*--*--*--*--*--*--*--*";
          cout << endl
               << endl
               << "\t\tR O U N D S";
          cout << endl
               << endl
               << "*--*--*--*--*--*--*--*--*--*--*--*--*--*";
          cout << endl
               << endl
               << name << " How Many Rounds ou wnat to play? : ";
          cin >> rounds;
     }
};

class Game : public RPS_game
{
public:
     int i, user_score = 0, computer_score = 0, choice;
     int heading_game()
     {
          cout << endl
               << "*--*--*--*--*--*--*--*--*--*--*--*--*--*";
          cout << endl
               << endl
               << "\t\tG A M E";
          cout << endl
               << endl
               << "*--*--*--*--*--*--*--*--*--*--*--*--*--*";
     }

     int main_game()
     {
          for (i = 1; i <= rounds; i++)
          {
               cout << endl
                    << endl
                    << "Round No : " << i << "/" << rounds;
               cout << endl
                    << endl
                    << "-* " << name << "'s Score = " << user_score;
               cout << endl
                    << endl
                    << "-* Computer's Score = " << computer_score;

               cout << endl
                    << endl
                    << "1) ROCK" << endl
                    << endl
                    << "2) PAPER" << endl
                    << endl
                    << "3) SCISSOR" << endl
                    << endl
                    << "-> Select Your Choice : ";
               cin >> choice;

               int random = 1 + (rand() % 3);

               cout << endl
                    << "-> Computer Choice : " << random;

               if (choice == random) // draw condition
               {
                    cout << endl
                         << endl
                         << "Draw";
               }
               else if (choice == 1 && random == 2 || choice == 1 && random == 3) // user winning condition
               {
                    cout << endl
                         << endl
                         << name << " Wins the Round";
                    user_score++;
               }
               else if (choice == 3 && random == 2)
               {
                    cout << endl
                         << endl
                         << name << " Wins the Round";
                    user_score++;
               }
               else if (random == 1 && choice == 2 || random == 1 && choice == 3)
               {
                    cout << endl
                         << endl
                         << "Computer Wins the Round";
                    computer_score++;
               }
               else if (random == 3 && choice == 2)
               {
                    cout << endl
                         << endl
                         << "Computer wins the Round";
                    computer_score++;
               }
               else if (random == 2 && choice == 1 || random == 2 && choice == 3)
               {
                    cout << endl
                         << endl
                         << name << " Wins the Round";
                    user_score++;
               }

               if (i >= rounds)
               {
                    if (user_score > computer_score)
                    {
                         cout << endl
                              << endl
                              << name << " Score : " << user_score;
                         cout << endl
                              << endl
                              << "computer Score : " << computer_score;
                         cout << endl
                              << endl
                              << name << " Wins the Game!";
                    }
                    else if (user_score == computer_score)
                    {
                         cout << endl
                              << endl
                              << name << " Score : " << user_score;
                         cout << endl
                              << endl
                              << "computer Score : " << computer_score;
                         cout << endl
                              << endl
                              << "Game is Draw!";
                    }
                    else
                    {
                         cout << endl
                              << endl
                              << name << " Score : " << user_score;
                         cout << endl
                              << endl
                              << "computer Score : " << computer_score;
                         cout << endl
                              << endl
                              << "Computer Wins the Game!";
                    }
               }
               else
               {
                    cout << endl
                         << endl
                         << "Press Enter to Continue...";
                    cin.ignore();
                    cin.get();
               }
          }
     }
};

int main()
{
     Game rps;
     rps.heading_name();
     rps.heading_rounds();
     rps.heading_game();
     rps.main_game();
}