#ifndef SUDUKO.H
#define SUDUKO.H
#include <vector>

class Suduko
{
    std::vector<std::vector<char>> board_state;
    int board_size;
public:
    Suduko(int size = 3);
    void generateRandomBoard(int values);
    bool isSolvable();
    void solveBoard();
}
#endif
