#include <cstring>
#include <iostream>
#include <string>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");
    string control;
    int starterPositionOne = 19;
    int starterPositionTwo = 6;

    while (true) {
        cout << "Марсоход находится на позиции " << starterPositionTwo << ","
            << starterPositionOne << " введите команду : ";
        cin >> control;

        if (control == "w" || "s") {
            if (control == "w" && starterPositionOne < 20) {
                starterPositionOne++;
            }
            else if (control == "s" && starterPositionOne > 0) {
                starterPositionOne--;
            }
        } 

            if (control == "a" || "d") {
                if (control == "a" && starterPositionTwo < 15) {
                    starterPositionTwo++;
                }
                else if (control == "d" && starterPositionTwo > 0) {
                    starterPositionTwo--;
                }
            }

        if (control != "w" && control != "a" && control != "s" && control != "d") {
            cout << "Неверный ввод!\n";
        }
    }
}