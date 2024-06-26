// This is a personal academic project. Dear PVS-Studio, please check it.
// PVS-Studio Static Code Analyzer for C, C++, C#, and Java: https://pvs-studio.com

// File: A3_Task2_3_S1S2_20220070-20220381-20220399
// Purpose: Solving Tasks 2 and 3 in assignment 3
// Authors: Anas Adel, Yassin Ali, Youssef Abdulmoneim
// Section: S1, S2
// IDs: 20220070, 20220381, 20220399
// TA: Khaled Ebrahim
// Date: 17 Dec 2023


#include <iostream>
#include <algorithm>
#include "Pyramic_Board.h"
#include "ConnectBoard.h"
#include "fivebyfiveXOgame.h"

using namespace std;

int main() {
    cout << "Hello, Please enter the number that corresponds to the game you want to play : \n"
         << "1- Tic Tac Toe\n"
         << "2- Pyramid Tic-Tac-Toe\n" << "3- Four-in-a-row (Connect Four)\n" << "4- 5 * 5 Tic-Tac-Toe\n ";
    int game_choice;
    cin >> game_choice;
    while (game_choice != 1 and game_choice != 2 and game_choice != 3 and game_choice != 4) {
        cout << "Error, please enter a valid number\n";
        cin >> game_choice;
    }

    int choice;
    Player *players[2];
    players[0] = new Player(1, 'X');

    cout << "Press 1 if you want to play with the computer, or any other number to play with another player: ";
    cin >> choice;

    if (choice != 1)
        players[1] = new Player(2, 'o');

    switch (game_choice) {
        case 1: {
            cout << "Welcome to FCAI X-O Game. :)\n";
            if (choice == 1)
                //Player pointer points to child
                players[1] = new RandomPlayer('o', 3);

            GameManager x_o_game(new X_O_Board(), players);

            x_o_game.run();
            break;
        }
        case 2: {
            cout << "Welcome to FCAI Pyramid X-O Game. :)\n";
            if (choice == 1)
                //Player pointer points to child
                players[1] = new RandomPlayer('o', 3);

            GameManager Pyramic_game(new Pyramic_Board(), players);
            Pyramic_game.run();

            break;
        }
        case 3: {
            cout << "Welcome to FCAI Four in a row X-O Game. :)\n";
            if (choice == 1)
                players[1] = new RandomPlayer('O', 7);

            GameManager x_o_game(new ConnectBoard(), players);
            x_o_game.run();

            break;
        }
        case 4: {
            cout << "Welcome to FCAI Five by Five X-O Game. :)\n";
            if (choice == 1)
                //Player pointer points to child
                players[1] = new RandomPlayer('o', 5);

            GameManager x_o_game(new fivebyfiveXOgame(), players);
            x_o_game.run();

            break;
        }
        default:
            break;
    }
    delete players[0];
    delete players[1];

    return 0;
}