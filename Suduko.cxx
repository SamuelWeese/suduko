#include "Suduko.h"
    Suduko::Suduko(int size)
    {
        
    }
    void generateRandomBoard(int values);
    bool isSolvable();
    void solveBoard();
}
#endif


Suduko::Suduko (int size)
{
    this->board_state = { '~' };
}
