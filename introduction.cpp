#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    string input;
    cout << "이름을 입력하세요 : ";
    cin >> input;

    string input2;
    cout << "학번을 입력하세요 : ";
    cin >> input2;

    string input3;
    cout << "학과를 입력하세요 : ";
    cin >> input3;

    string input4;
    cout << "학교를 입력하세요 : ";
    cin >> input4;
  
    string input5;
    cout << "학년을 입력하세요 : ";
    cin >> input5;
 
    cout << endl;
    cout << "<출력>" << endl << "이름 : " << input << endl << "학번 : " << input2 << endl << "학과 : " << input3 << endl << "학교 : " << input4 << endl << "학년 : " << input5 << endl;

    return 0;
}