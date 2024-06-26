#ifndef OOPASSIGNMENT3_PYRAMIC_BOARD_H
#define OOPASSIGNMENT3_PYRAMIC_BOARD_H

#include "BoardGame_CLASSES.h"

class Pyramic_Board : public Board {
public:
    Pyramic_Board();

    bool update_board(int x, int y, char mark);

    void display_board();

    bool is_winner();

    bool is_draw();

    bool game_is_over();
};

#endif //OOPASSIGNMENT3_PYRAMIC_BOARD_H
