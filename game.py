import game_functions
import os

os.system("cls")
welcome_message = "Welcome to the Tic Tac Toe game. We hope you are going to have fun!"
for i in range(len(welcome_message)):
    print("-", end="")
print()
print(welcome_message)
for i in range(len(welcome_message)):
    print("-", end="")
print()

print("--> In order to play the game you have to choose a position, and this can be done by selecting the number\n"
      "that indicates to the position you want to choose. As you can see below")
intro_list = ['#', 1, 2, 3, 4, 5, 6, 7, 8, 9]
for i in range(1, len(intro_list)):
    print(intro_list[i], end=' ')
    if i % 3 == 0:
        print()
for i in range(len(welcome_message)):
    print("-", end="")
print()

while True:
    input_ = input("Are you ready to start? (y/n): ")
    if input_ == 'y' or input_ == 'Y' or input_ == 'n' or input_ == 'N':
        if input_ == 'y' or input_ == 'Y':
            os.system("cls")
            break
        elif input_ == 'n' or input_ == 'N':
            print("Thanks for checking the game, Goodbye!")
            exit()
    else:
        print("Please check your entry!")
        continue

name1, name2 = game_functions.config_players()
name1_sign, name2_sign, n1, n2 = game_functions.first_to_start(name1, name2)

# Let the first user enter the first position
while game_functions.check_board():
    game_functions.taking_entry(name1, name2, n1, n2, name1_sign, name2_sign)
