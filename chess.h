// Chess Class Header File

#include <vector>

enum GamePieces {
    king = 0, 
    queen = 1,
    rook = 2,
    knight = 3,
    bishop = 4,
    pawn = 5
};

// chess board
class Chess {
    public:

        Chess(); // constructor
        void drawBoard(); // draw the board

    private:

        // unique data struct (piece <x, y>)
        std::vector<std::pair<GamePieces, std::pair<int , int>>> whitePieces; // locations
        std::vector<std::pair<GamePieces, std::pair<int , int>>> blackPieces; // locations

        void drawAllPossiblePositions(ChessPiece piece); 
};

// chess piece ~ rational?
class ChessPiece {
    
};