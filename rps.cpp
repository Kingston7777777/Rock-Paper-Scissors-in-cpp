//ROCK PAPER SCISSORS GAME WRITTEN BY KINGSLEY
#include <iostream>
#include <string>
#include <ctime>

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);

using std::cout;
using std::cin;
using std::string;

int main(){
    char player;
    char computer;
    player = getUserChoice();
    cout << "You choice: ";
    showChoice(player);

    computer = getComputerChoice();
    cout << "Computer's choice: ";
    showChoice(computer);

    chooseWinner(player, computer);
    return 0;
}

char getUserChoice(){//FUNCTION TO GET PLAYER CHOICE
    char player;
    cout << "Rock-Paper-Scissors-Game\n";
    do{
    cout << "Choose one of the following\n";
    cout << "*************************\n";
    cout << "r for rock\n";
    cout << "p for paper\n";
    cout << "s for scissors\n";
    cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}
char getComputerChoice(){//FUNCTION TO GET COMPUTER CHOICE
    srand(time(0));
    int num = rand() % 3 + 1;
    switch(num){
        case 1: return 'r';
        case 2: return 'p';
        case 3: return 's';
    }
    return 0;
}
void showChoice(char choice){//FUNCTION THAT WILL SHOW CHOICES OF BOTH THE PLAYER AND THE COMPUTER
    switch(choice){
        case 'r': cout << "Rock\n";
        break;
        case 'p': cout << "Paper\n";
        break;
        case 's': cout << "Scissors\n";
        break;
    }
}
void chooseWinner(char player, char computer){//FUNCTION TO CHOOSE WINNER
    switch(player){
        case 'r': if(computer == 'r'){
            cout << "It's a tie\n";
            }
            else if(computer == 'p'){
                cout << "You lose\n";
            }
            else{
                cout << "You win\n";
            }
            break;
        case 'p': if(computer == 'r'){
            cout << "You win\n";
            }
            else if(computer == 'p'){
                cout << "It's a tie\n";
            }
            else{
                cout << "You lose\n";
            }
            break;
            case 's': if(computer == 'r'){
            cout << "You lose\n";
            }
            else if(computer == 'p'){
                cout << "You win\n";
            }
            else{
                cout << "It's a tie\n";
            }
            break;
    }
}

