from random import randint

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
        print(f"{name_1} you are going to start first,", end=' ')
        name_1_sign = input("choose you sign (X or O): ")
        if name_1_sign == "X" or name_1_sign == "x":
            name_2_sign = "O"
        elif name_1_sign == "O" or name_1_sign == "o":
            name_2_sign = "X"

    elif first == 2:
        print(f"{name_2} you are going to start first,", end=' ')
        name_2_sign = input("choose you sign (X or O): ")
        if name_2_sign == "X" or name_2_sign == "x":
            name_1_sign = "O"
        elif name_2_sign == "O" or name_2_sign == "o":
            name_1_sign = "X"
    print(f"Great! so {name_1} has the sign \"{name_1_sign}\" and {name_2} has \"{name_2_sign}\"")
    return name_1_sign, name_2_sign