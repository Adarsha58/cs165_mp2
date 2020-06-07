struct state
{
        char **board;
};

class gobang
{
private:
    state currentState;
    int boardSize;
    char AIPiece;
    char HumanPiece;
    int depth;
    void HumanTurn();
    int horizantal(state*);
    int vertical(state*);
    int diagonal(state*);
    int countPattern(std::string, std::string);
    
public:
    gobang(int boardSize, char AIPiece);
    bool isTie(state*);
    int evalFunc(state*, int, bool);
    int minmax(state*, int, bool);
    std::string AIOptimalMove(state*);
    void startGame();
    bool gameEnds(state*);
    void printBoard();
};