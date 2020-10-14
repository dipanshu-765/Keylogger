#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    MSG Msg;
    while(GetMessage(&Msg, NULL, 0, 0))             //GetMessage checks if there are any messages to be processed
    {
        TranslateMessage(&Msg);                     //Translates Messages to character messages
        DispatchMessage(&Msg);                      //Dispatch Message takes the message and performs the task for the window it was supposed to be
    }
    return 0;
}

