#include <iostream>
#include <stdlib.h>
#include <chrono>
#include <thread>
#ifdef _WIN32
#define OS_Windows
#endif
#ifdef __APPLE__
#define OS_X
#endif
#ifdef linux
#define OS_Linux
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
            this_thread::sleep_for(chrono::milliseconds(2000));
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
            cout << "No problem! 😊" << endl;
        }
        if (damnarg == "what") // damn what
        {
            cout << "Usage: damn it | you | computer | right | straight | thanks | what | fourth" << endl;
        }
        if (damnarg == "fourth") // damn fourth (i.e. "damn fourth chaos emerald")
        {
            #ifdef OS_Windows
            system("start https://www.youtube.com/watch?v=xrXKFWj8gdw");
            #endif
            #ifdef OS_Apple
            system("open https://www.youtube.com/watch?v=xrXKFWj8gdw");
            #endif
            #ifdef OS_Linux
            system("xdg-open https://www.youtube.com/watch?v=xrXKFWj8gdw");
            #endif
        }
        else
        {
            cout << "I can't understand that. Type \"damn what\" for help." << endl;
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