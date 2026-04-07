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

    cout << endl;
    cout << "<출력>" << endl << "이름 : " << input << endl << "학번 : " << input2 << endl;
    return 0;
}