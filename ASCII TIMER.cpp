/**
*
* Solution to course project # 10
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2020/2021
*
* @author Alex Georgiev
* @idnumber 62604
* @compiler VC
*
* 
*
*/

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void printNum(char **p,int row)
{
    if (p[0][0] == '1') {         
        cout<<"         "<<p[row][0];
    }
    else {
        for (int i = 0; i < 10; i++)cout << p[row][i];
    }
}
int main()
{
    /*******************************************- POSITIONNING THE CONSOLE WINDOW -****************************************************/

    //Finding the user's screen resolution
    int Width = GetSystemMetrics(SM_CXSCREEN);
    int Height = GetSystemMetrics(SM_CYSCREEN);

    int NewWidth = Width/2-300;	//--- Used as a parameter to center the console window horizontally (MoveWindows int x)
    int NewHeight = Height/2-200;	//--- Used as a parameter to center the console window vertically (MoveWindows int y)
    int WindowWidth = 675;	//--- Used as a parameter to specify the width of the console window (MoveWindows int nWidth)
    int WindowHeight = 440;	//--- Used as a parameter to specify the height of the console window (MoveWindows int nHeight)

    HWND hWnd = GetConsoleWindow();
    MoveWindow(hWnd, NewWidth, NewHeight, WindowWidth, WindowHeight, TRUE);

    char** one;
    one = new char*[11];
    char** two;
    two = new char* [11];
    char** three;
    three = new char* [11];
    char** four;
    four = new char* [11];
    char** five;
    five = new char* [11];
    char** six;
    six = new char* [11];
    char** seven;
    seven = new char* [11];
    char** eight;
    eight = new char* [11];
    char** nine;
    nine = new char* [11];
    char** zero;
    zero = new char* [11];
    for (int i = 0; i < 11; i++) {
        one[i] = new char[1];
        one[i][0] = '1';
        two[i] = new char[10];
        three[i] = new char[10];
        four[i] = new char[10];
        five[i] = new char[10];
        six[i] = new char[10];
        seven[i] = new char[10];
        eight[i] = new char[10];
        nine[i] = new char[10];
        zero[i] = new char[10];
        for (int k = 0; k < 10; k++) {
            two[i][k] = ' ';
            three[i][k] = ' ';
            four[i][k] = ' ';
            five[i][k] = ' ';
            six[i][k] = ' ';
            seven[i][k] = ' ';
            eight[i][k] = ' ';
            nine[i][k] = ' ';
            zero[i][k] = ' ';
        }
       
        if (i == 0 || i == 5 || i == 10) {
            for (int j = 0; j < 10; j++) {
                two[i][j] = '2';
                three[i][j] = '3';
                five[i][j] = '5';
                six[i][j] = '6';
                eight[i][j] = '8';
                nine[i][j] = '9';
            }
        }
        if (i == 5) {
            for (int j = 0; j < 10; j++) four[i][j] = '4';
        }

        if (i < 5) {
            two[i][9] = '2';
            three[i][9] = '3';
            four[i][0] = '4';
            four[i][9] = '4';
            five[i][0] = '5';
            six[i][0] = '6';
            eight[i][0] = '8';
            eight[i][9] = '8';
            nine[i][0] = '9';
            nine[i][9] = '9';
        }
        else {
            two[i][0] = '2';
            three[i][9] = '3';
            four[i][9] = '4';
            five[i][9] = '5';
            six[i][0] = '6';
            six[i][9] = '6';
            eight[i][0] = '8';
            eight[i][9] = '8';
            nine[i][9] = '9';
        }

        if (i == 0) {
            for (int j = 0; j < 10; j++) seven[i][j] = '7';
        }
        else seven[i][9] = '7';

        if (i == 0 || i == 10) {        
            for (int j = 0; j < 10; j++) {
                zero[i][j] = '0';
            }           
        }
        else {
            zero[i][0] = '0';
            zero[i][9] = '0';
        }        
    }
    int input,minutes,seconds;
    bool correct_input=false;
    while (!correct_input) {
        cin >> input;
        while (cin.fail()) {
            cout << "Enter correct type of data" << endl;
            cin.clear();
            cin.ignore(INT_MAX,'\n');
            cin >> input;
        }
        if (input >= 1000 && input <= 9999) correct_input = true;
        else cout << "Enter correct number" << endl;
    }
    minutes = input / 60;
    seconds = input-minutes*60;
    char** displays1 = zero;
    char** displays2 = zero;
    char** displaym1 = zero;
    char** displaym2 = zero;
    char** displaym3 = zero;
 
    system("CLS");
    while (minutes >= 0 && seconds >= 0) {      
        int s1 = seconds / 10;
        int s2 = seconds % 10;
        int m1 = minutes / 100;
        int m2 = (minutes % 100) / 10;
        int m3 = minutes % 10;
        switch (s1) {
            case 0:displays1 = zero; break;
            case 1:displays1 = one; break;
            case 2:displays1 = two; break;
            case 3:displays1 = three; break;
            case 4:displays1 = four; break;
            case 5:displays1 = five; break;
            case 6:displays1 = six; break;
            case 7:displays1 = seven; break;
            case 8:displays1 = eight; break;
            case 9:displays1 = nine; break;
        };
        switch (s2) {
            case 0:displays2 = zero; break;
            case 1:displays2 = one; break;
            case 2:displays2 = two; break;
            case 3:displays2 = three; break;
            case 4:displays2 = four; break;
            case 5:displays2 = five; break;
            case 6:displays2 = six; break;
            case 7:displays2 = seven; break;
            case 8:displays2 = eight; break;
            case 9:displays2 = nine; break;
        };
        switch (m1) {
            case 0:displaym1 = zero; break;
            case 1:displaym1 = one; break;
            case 2:displaym1 = two; break;
            case 3:displaym1 = three; break;
            case 4:displaym1 = four; break;
            case 5:displaym1 = five; break;
            case 6:displaym1 = six; break;
            case 7:displaym1 = seven; break;
            case 8:displaym1 = eight; break;
            case 9:displaym1 = nine; break;
        };
        switch (m2) {
            case 0:displaym2 = zero; break;
            case 1:displaym2 = one; break;
            case 2:displaym2 = two; break;
            case 3:displaym2 = three; break;
            case 4:displaym2 = four; break;
            case 5:displaym2 = five; break;
            case 6:displaym2 = six; break;
            case 7:displaym2 = seven; break;
            case 8:displaym2 = eight; break;
            case 9:displaym2 = nine; break;
        };
        switch (m3) {
            case 0:displaym3 = zero; break;
            case 1:displaym3 = one; break;
            case 2:displaym3 = two; break;
            case 3:displaym3 = three; break;
            case 4:displaym3 = four; break;
            case 5:displaym3 = five; break;
            case 6:displaym3 = six; break;
            case 7:displaym3 = seven; break;
            case 8:displaym3 = eight; break;
            case 9:displaym3 = nine; break;
        };
       
        for (int i = 0; i < 11; i++) {
            if(i==0) cout << endl << endl << endl << endl << endl << endl << endl;
            if (m1 == 1) {
                cout << "      ";
                printNum(displaym1, i);
                cout << " " << " ";
            }
            else {
                if (m2 == 1) cout << "           ";
                else cout << "               ";
            }
            printNum(displaym2, i);
            cout << " " << " ";
            printNum(displaym3, i);
            cout << " ";
            if (i == 4  || i == 6) {
                cout << "||";
            }
            else  cout << " " << " ";
            cout << " ";
            printNum(displays1, i);
            cout << " " << " ";
            printNum(displays2, i);
            cout << '\n';
        }
        cout << '\n';
        Sleep(1000);
        seconds--;
        if (minutes == 0 && seconds == -1)break;
        if (seconds == -1) {
            minutes--;
            seconds = 59;
        }
        system("CLS");
    }
    cout << '\a';  //The program make sound when timer has finished
    for (int i = 0; i < 10; i++) {
        delete[] one[i];
        delete[] two[i];
        delete[] three[i];
        delete[] four[i];
        delete[] five[i];
        delete[] six[i];
        delete[] seven[i];
        delete[] eight[i];
        delete[] nine[i];
        delete[] zero[i];
    }
    delete[] one;
    delete[] two;
    delete[] three;
    delete[] four;
    delete[] five;
    delete[] six;
    delete[] seven;
    delete[] eight;
    delete[] nine;
    delete[] zero;
    return 0;
}
