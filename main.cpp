#include <iostream>
#include <windows.h>

int main() {
    SetConsoleOutputCP(CP_UTF8);
    std::cout << "Введите высот елочки (1-60): ";
    int h;
    std::cin >> h;

    int x;
    int xmax = 1 + (h - 1) * 2;
    int y;
    int ymax = h;

    std::cout << "\n";

    if (h>0 && h<61) {
        for (y = 1; y <= ymax; y++) {
            for (x = 1; x <= xmax; x++) {
                if ((x >= xmax / 2 + 1 - (1 + (y - 1) * 2)/2) && (x <= xmax / 2 + 1 + (1 + (y - 1) * 2)/2)) {
                    std::cout << "#";
                } else {
                    std::cout << " ";
                }

            }
            std::cout << "\n";
        }
    } else if (h<=0) {
        std::cout << "Задана неположительная высота елочки";
    } else {
        std::cout << "Запредельная высота елочки";
    }







}
