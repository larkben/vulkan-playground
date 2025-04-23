// Chess Class Header File

#include <vector>
#include <pair> // should look into this

enum GamePieces {
    king = 0, 
    queen = 1,
    rook = 2,
    knight = 3,
    bishop = 4,
    pawn = 5
}

// chess board
class Chess {
    public:

        Chess(); // constructor
        void drawBoard(); // draw the board

    private:

        vector<pair<int, >> whitePieces; // locations
        vector<pair<int, >> blackPieces; // locations

        void drawAllPossiblePositions(ChessPiece piece); 
};

// chess piece ~ rational?
class ChessPiece {
    
}