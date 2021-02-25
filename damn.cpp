#include <iostream>
#include <stdlib.h>
#ifdef _WIN32
    #include <windows.h>
    #define OS_Windows
    void sleep(unsigned milliseconds)
    {
        Sleep(milliseconds);
    }
#else
    #include <unistd.h>
    void sleep(unsigned milliseconds)
    {
        usleep(milliseconds * 1000); // takes microseconds
    }
#endif

using namespace std;

int main(int argc, char *argv[])
{
    if (argc > 1)
    {
        string damnarg = argv[1];
        // cout << damnarg << endl; // used for debugging
        if (damnarg == "it") // damn it
        {
            cout << "I gotcha." << endl;

        }
        if (damnarg == "you") // damn you
        {
            cout << "I'll just- leave." << endl;
            sleep(2000);
            #ifdef OS_Windows
            system("taskkill /f /im cmd.exe");
            #else
            system("kill $PPID");
            #endif
        }
        if (damnarg == "computer") // damn computer
        {
            cout << "Does this mean I'm getting replaced?" << endl;
        }
        if (damnarg == "right") // damn right
        {
            cout << "If you say so." << endl;
        }
        if (damnarg == "straight") // damn straight
        {
            cout << "You're serious about this, huh?" << endl;
        }
        if (damnarg == "thanks") // damn thanks (i.e. "damn, thanks!")
        {
            cout << "No problem! \U0001F60A" << endl;
        }
        return 0;
    }
    else if (argc > 2)
    {
        return 0;
    }
    else
    {
        cout << "Indeed." << endl;
        return 0;
    }
}