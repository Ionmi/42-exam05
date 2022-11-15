clang++ -Wall -Wextra -Werror -W -std=c++98 *.cpp -o start
valgrind --leak-check=full ./start
rm start
rm -rf start.dSYM