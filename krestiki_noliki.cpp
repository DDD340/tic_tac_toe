#include <iostream>


int get_game_state(field) {
    if ((field[0][0] == field[0][1] and field[0][1] == field[0][2]) or
        (field[1][0] == field[1][1] and field[1][1] == field[1][2]) or
        (field[2][0] == field[2][1] and field[2][1] == field[2][2]) or
        (field[0][0] == field[1][0] and field[1][0] == field[2][0]) or
        (field[0][1] == field[1][1] and field[1][1] == field[2][1]) or
        (field[0][2] == field[1][2] and field[1][2] == field[2][2]) or
        (field[0][0] == field[1][1] and field[1][1] == field[2][2]) or
        (field[0][2] == field[1][1] and field[1][1] == field[2][0])) {
        return 1;
    }
    return 0;
}


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
