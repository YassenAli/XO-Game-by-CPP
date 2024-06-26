# XO Game

Welcome to the XO Game repository! This project includes various versions of the classic Tic Tac Toe game, including Pyramid Tic-Tac-Toe, Four-in-a-row (Connect Four), and 5x5 Tic-Tac-Toe.

This game was developed by me and my team as part of an Object-Oriented Programming (OOP) course project in the Faculty. The Connect Four game was designed by me (Yassin Ali).

## Files

The repository contains the following files:

- `fivebyfiveXOgame.h`
- `main.cpp`
- `Pyramic_Board.cpp`
- `Pyramic_Board.h`
- `BoardGame_CLASSES.cpp`
- `BoardGame_CLASSES.h`
- `ConnectBoard.cpp`
- `ConnectBoard.h`
- `fivebyfiveXOgame.cpp`

## Description of the Games

### Pyramid X-O

1. **Board Initialization**: The board has 3 rows, with the number of columns in each row being `2i + 1` (where `i` is the row index).
2. **Winning Check**:
   - Checks the middle column.
   - Checks the left and right diagonals.
   - Checks the last row, examining subsets of 3 cells.
3. **Main Game Loop**: Similar to the standard Tic Tac Toe, but with a `Pyramic_Board`.

### Four-in-a-row (Connect Four)

1. **Board Initialization**: Initializes a 6x7 grid.
2. **Update Board**: Updates the board with the player's mark, adjusting for 0-based indexing.
3. **Winning Check**:
   - Checks rows (horizontal).
   - Checks columns (vertical).
   - Checks both principal and off diagonals.
4. **Game Over Check**: Returns true if the number of moves is `>= 6 * 7`.
5. **Draw Check**: Returns true if the number of moves is `>= 6 * 7` and no winner.
6. **Display Board**: Displays the current state of the 6x7 board.

### 5x5 X-O

1. **Board Initialization**: Initializes a 5x5 grid.
2. **Update Board**: Checks if the given coordinates are valid, updates the cell, and increments the number of moves.
3. **Winning Check**: Counts the number of sequences for each symbol (X or O) in rows, columns, and diagonals.
4. **Display Board**: Prints the 5x5 board. When the number of moves reaches 24, checks the sequences for each symbol.
5. **Game Over Check**: Returns true if the number of moves is `>= 24`.
6. **Draw Check**: Returns true if the number of moves `>= 24` and the number of X sequences equals the number of O sequences.

## Main.cpp

The `main.cpp` file serves as the entry point for the game. and contain a list to allow to user to choose game to play it.
#### The list is:
1- Tic Tac Toe.
2- Pyramid Tic-Tac-Toe.
3- Four-in-a-row (Connect Four).
4- 5 * 5 Tic-Tac-Toe.

## Contributing
Feel free to contribute to the project by opening issues and submitting pull requests. Ensure you follow the coding style and document your changes appropriately.
