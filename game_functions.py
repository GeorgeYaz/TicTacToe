from random import randint

board = ['#', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ']


def config_players():
    while True:
        try:
            name_1, name_2 = input("Enter the names of the two players and separate them with a space: ").split()
        except ValueError:
            print("*** not enough values entered (expected 2, we got 1) ***")
            print("*** Are you sure you entered the names right? please try again ***")
            continue
        else:
            print(f"{name_1} and {name_2} you are welcome, let's start by choosing the sign for each one of you.")
            break
    return name_1, name_2


def first_to_start(name_1, name_2):
    first = randint(1, 2)
    print()
    if first == 1:
        n1 = True
        n2 = False
        print(f"{name_1} you are going to start first,", end=' ')
        name_1_sign = input("choose you sign (X or O): ")
        name_1_sign = name_1_sign.upper()
        if name_1_sign == "X" or name_1_sign == "x":
            name_2_sign = "O"
        elif name_1_sign == "O" or name_1_sign == "o":
            name_2_sign = "X"

    elif first == 2:
        n1 = False
        n2 = True
        print(f"{name_2} you are going to start first,", end=' ')
        name_2_sign = input("choose you sign (X or O): ")
        name_2_sign = name_2_sign.upper()
        if name_2_sign == "X":
            name_1_sign = "O"
        elif name_2_sign == "O":
            name_1_sign = "X"
    print(f"Great! so {name_1} has the sign \"{name_1_sign}\" and {name_2} has \"{name_2_sign}\"")
    return name_1_sign, name_2_sign, n1, n2


def board_update(user_input, sign):
    global board
    board[user_input] = sign
    return board


def taking_entry(name_1, name_2, n1, n2, name_1_sign, name_2_sign):
    global board
    if n1:
        if check_board():
            user_input = input(f"{name_1} enter your position (1->9): ")
            user_input = int(user_input)
            board = board_update(user_input, name_1_sign)
            print_board()
            if check_winner():
                return
            if check_board():
                user_input = input(f"{name_2} enter your position (1->9): ")
                user_input = int(user_input)
                board = board_update(user_input, name_2_sign)
                print_board()
                if check_winner():
                    return
    elif n2:
        if check_board():
            user_input = input(f"{name_2} enter your position (1->9): ")
            user_input = int(user_input)
            board = board_update(user_input, name_2_sign)
            print_board()
            if check_winner():
                return
            if check_board():
                user_input = input(f"{name_1} enter your position (1->9): ")
                user_input = int(user_input)
                board = board_update(user_input, name_1_sign)
                print_board()
                if check_winner():
                    return


def print_board():
    global board
    for i in range(1, len(board)):
        print(board[i], end=' ')
        if i % 3 == 0:
            print()


def check_board():
    global board
    if ' ' not in board:
        return False
    else:
        return True


def check_winner():
    global board
    win_x = ['X', 'X', 'X']
    win_o = ['O', 'O', 'O']
    if board[1:4] == win_x or board[1:4] == win_o:
        return True
    elif board[4:7] == win_x or board[4:7] == win_o:
        return True
    elif board[7:10] == win_x or board[7:10] == win_o:
        return True
    elif board[1:8:3] == win_x or board[1:8:3] == win_o:
        return True
    elif board[2:9:3] == win_x or board[2:9:3] == win_o:
        return True
    elif board[3:10:3] == win_x or board[3:10:3] == win_o:
        return True
    else:
        return False
