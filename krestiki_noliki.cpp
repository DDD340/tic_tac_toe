#include <iostream>

void Print_Game_Field(int gameField[3][3]){
    std::cout << " 0  1  2" << std::endl;
    std::cout << "  _______" << std::endl;
    for (int y = 0; y < 3; y++){
        std::cout << y << " |";
        for (int x = 0; x < 3; x++){
            if (gameField[x][y] == 0){
                std::cout << " " << "|";
            }
            if (gameField[x][y] == 1){
                std::cout << "X" << "|";
            }
            if (gameField[x][y] == 2){
                std::cout << "O" << "|";
            }
        }
        std::cout << std::endl << "  _______" << std::endl;
    }
}


int main(){
    int gameField[3][3] = {
    {0, 0, 0},
    {0, 1, 0},
    {0, 0, 0}};
    Print_Game_Field(gameField);
}
