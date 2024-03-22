/*
Simple script for beauty launching Camellia Hello(BPM) songs
(C) Zhukov Max, 2024
*/

#include <iostream>
#include <sstream>
#include <cstdlib>
#include <windows.h>

// функция запускает один из треков Camellia серии Hello (BPM) !
void Hello(short int BPM) {
    switch (BPM) {
    case 2024:
        system("start https://youtu.be/7113wbJD3sw?si=NUHSRNI7poIZj4OZ");
        break;
    case 2023:
        system("start https://youtu.be/pDUQ-FuGv80?si=Qu2RMfJ4zlS_MJUV");
        break;
    case 2022:
        system("start https://youtu.be/1KqkteEIVhQ?si=J5hz30JbJR-BCac1");
        break;
    case 2021:
        system("start https://youtu.be/FXPhdUMezSs?si=QlZIcoU3Of4WOGMb");
        break;
    default: printf("You chosened uncorrect BPM!\n");
    }
}

int main() {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    std::ostringstream oss;
    std::string output;
    
    short int BPM;

    // Setting console color to green
    SetConsoleTextAttribute(handle, FOREGROUND_GREEN);

    std::string greetings = "Hello!\nChoose a BPM among those listed:\n- 2024\n- 2023\n- 2022\n- 2021\n> ";
    for (unsigned short int i = 0; i < greetings.length(); i++) {
        std::cout << greetings[i];
        Sleep(50);
    }

    std::cin >> BPM;

    // Switching console color to red
    SetConsoleTextAttribute(handle, FOREGROUND_RED);

    oss << "\n... Hello (" << +BPM << ");\n";
    output = oss.str();

    // Epic function name output
    for (unsigned short int i = 0; i < output.length(); i++) {
        std::cout << output[i];
        Sleep(100);
    }

    Hello(BPM);

    SetConsoleTextAttribute(handle, FOREGROUND_GREEN);
    printf("\nThanks for using my soft <3\n\n");

    system("pause");

    return 0;
}
