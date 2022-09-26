#include <iostream>

using namespace std;

#define RESET       "\033[0m"

#define BLACK       "\033[30m"
#define BLACKBOLD   "\033[1m\033[30m"

#define BLUE        "\033[34m"
#define BLUEBLUE    "\033[1m\033[34m"

#define CYAN        "\033[36m"
#define CYANBOLD    "\033[1m\033[36m"

#define GREEN       "\033[32m"
#define GREENBOLD   "\033[1m\033[32m"

#define MAGENTA     "\033[35m"
#define MAGENTABOLD "\033[1m\033[35m"

#define RED         "\033[31m"
#define REDBOLD     "\033[1m\033[31m"

#define WHITE       "\033[37m"
#define WHITEBOLD   "\033[1m\033[37m"

#define YELLOW      "\033[33m"
#define YELLOWBOLD  "\033[1m\033[33m"

int main() {
    cout << YELLOWBOLD << "Monday, September 26th, 2022." << endl;
    return 0;
}