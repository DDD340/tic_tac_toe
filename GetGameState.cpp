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
