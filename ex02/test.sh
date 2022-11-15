clang++ -Wall -Wextra -Werror -W -std=c++98 *.cpp -o start
valgrind --leak-check=full ./start
rm -rf start.dSYM
rm start