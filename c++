#include <string>
#include <Windows.h>
#include <iostream>
#include <fstream>
#include <limits>
#include <vector>
using namespace std;
void settextcolor(int color) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, color);
}
// 0 черн, 1 син, 2 зел, 3 голу, 4 красн, 5 фиол, 6 желт, 7 бел, 8 сер ,9 свет син, 10 свет зел, 11 свет голу, 12 свет красн, 13 свет фиол, 14 свет желт, 15 ярк бел
void nakazanie(int a) {
    settextcolor(4);
    cout << "restart program" << endl;
    for (int i = 0; i < 199999; i++) {
        cout << i << " RESTART PROGRAM " << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << i << endl;
    }
}
void delete_last_note() {
    ifstream in("notes.txt");
    vector<string>lines;
    string line;
    while (getline(in, line)) {
        if (!line.empty()) {
            lines.push_back(line);
        }
    }
    in.close();
    if (line.empty()) {
        cout << "ERROR" << endl;
    }
    ofstream out("notes.txt");
    for (int i = 0;i < line.size() - 1;i++) {
        out << lines[i] << endl;
    }
    out.close();
    cout << "last writhg deleted" << endl;

}




void menu(int c) {
    cout << "############################################################################################################################################################" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#     W       W       W  EEEEEE  L        CCCCCC  OOOOOO      M   M      EEEEEE        TTTTTTTTT  OOOOOO                                                   #" << endl;
    cout << "#      W     W W     W   E       L        C       O    O     M M M M     E                 T      O    O                                                   #" << endl;
    cout << "#       W   W   W   W    EEEEEE  L        C       O    O    M   M   M    EEEEEE            T      O    O                                                   #" << endl;
    cout << "#        W W     W W     E       L        C       O    O   M         M   E                 T      O    O                                                   #" << endl;
    cout << "#         W       W      EEEEEE  LLLLLLL  CCCCCC  OOOOOO  M           M  EEEEEE            T      OOOOOO                                                   #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                NN    N  OOOOOO     L       OOOOOO  NN    N  EEEEEE     OOOOOO  SSSSSS                                                    #" << endl;
    cout << "#                                N N   N  O    O     L       O    O  N N   N  E          O    O  S                                                         #" << endl;
    cout << "#                                N  N  N  O    O     L       O    O  N  N  N  EEEEEE     O    O  SSSSSS                                                    #" << endl;
    cout << "#                                N   N N  O    O     L       O    O  N   N N  E          O    O       S                                                    #" << endl;
    cout << "#                                N    NN  OOOOOO  *  LLLLLL  OOOOOO  N    NN  EEEEEE  *  OOOOOO  SSSSSS  *  BETA                                           #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#   PLEASE ENTER KEY |                                                                                                                                     #" << endl;
    cout << "#                    |                                                                                                                                     #" << endl;
    cout << "#                    V                                                                                                                                     #" << endl;
    cout << "############################################################################################################################################################" << endl;
    //KEY IS 1234

    
}
void selectmenu(int a) {
    cout << "############################################################################################################################################################" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#    1 КАЛЬКУЛЯТОР                                                                                 200 НАСТРОЙКИ                                           #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#    2 ЗАМЕТКИ                                                                                     300 СОЗДАТЕЛИ                                           #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                  400 МЕНЮ ОШИБОК                                         #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                  500 ВЫХОД                                               #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "############################################################################################################################################################" << endl;
}

void dead_screen(int error_num) {
    cout << "############################################################################################################################################################" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                  ##                                                                                                                                      #" << endl;
    cout << "#       #####     #                                                                                                                                        #" << endl;
    cout << "#                #                 CCCCCC  RRRRRR  III  TTTTTTT  III  TTTTTTT  CCCCCC  AAAAAA  L                                                           #" << endl;
    cout << "#                #                 C       R    R   I      T      I      T     C       A    A  L                                                           #" << endl;
    cout << "#                #                 C       RRRRRR   I      T      I      T     C       AAAAAA  L                                                           #" << endl;
    cout << "#                #                 C       RRR      I      T      I      T     C       A    A  L                                                           #" << endl;
    cout << "#       #####     #                CCCCCC  R  RRR  III     T     III     T     CCCCCC  A    A  LLLLLL                                                      #" << endl;
    cout << "#                  ##                                                                                                                                      #" << endl;
    cout << "#                                  EEEEEE  RRRRRR  RRRRRR  OOOOOO  RRRRRR  @ @ @                                                                           #" << endl;
    cout << "#                                  E       R    R  R    R  O    O  R    R  @ @ @                                                                           #" << endl;
    cout << "#                                  EEEEEE  RRRRRR  RRRRRR  O    O  RRRRRR  @ @ @                                                                           #" << endl;
    cout << "#                                  E       RRR     RRR     O    O  RRR                                                                                     #" << endl;
    cout << "#                                  EEEEEE  R  RRR  R  RRR  OOOOOO  R  RRR  @ @ @                                                                           #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                  номер ошибки  " << error_num << " ПРОВЕРЬТЕ МЕНЮ ОШИБОК                                                                 #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "#                                                                                                                                                          #" << endl;
    cout << "############################################################################################################################################################" << endl;
}
//120simvol na 30 strok
int main()
{
    setlocale(LC_ALL, "RU");
    string note_text;
    int select = 0;
    int a = 0;
    float num1 = 0;
    float num2 = 0;
    float res = 0;
    char op = 0;
    int cal_select = 0;
    bool cal = false;
    bool contin_cal = false;
    int menu_select = 0;
    int seting_select = 0;
    bool note = false;
    bool note_contin = false;
    int note_select = 0;
    settextcolor(3);
    menu(a);
    cin >> select;
    if (select == 1234) {
        while (true)
        {
            menu_select = 0;
            selectmenu(a);
            cin >> menu_select;
            cal = true;
            contin_cal = true;
            note_contin = true;
            note = true;
            if (menu_select == 1) {
                //CALCULATOR
                cout << "0000000000000000000000000000000000000000000//CALCULATOR//000000000000000000000000000000000000000000000000000000000000000" << endl;
                while (cal) {
                    while (contin_cal) {
                        cout << "enter example (equation example 2+2 , 452/4)" << endl;
                        cin >> num1;
                        cin >> op;
                        cin >> num2;
                        if (op == '+') {
                            res = num1 + num2;
                        }
                        else if (op == '-') {
                            res = num1 - num2;
                        }
                        else if (op == '*') {
                            res = num1 * num2;
                        }
                        else if (op == '/') {
                            if (num2 == 0) {
                                settextcolor(4);
                                dead_screen(3);
                                break;
                            }
                            else {
                                res = num1 / num2;
                            }
                        }
                        cal_select = 0;
                        cout << "result: " << res << endl;
                        cout << "exit? 1yes 2no" << endl;
                        cin >> cal_select;
                        if (cal_select == 1) {
                            cal = false;
                            contin_cal = false;
                        }
                        else if (cal_select == 2) {
                            cout << "continue" << endl;
                        }
                        else {
                            dead_screen(1);
                            break;
                        }

                    }
                }
            }
            else if (menu_select == 2)
            { //NOTE
                while (note) {


                    note_text = '0';
                    cout << "welcome to notes" << endl;
                    while (note_contin) {
                        ofstream out_file("notes.txt", ios::app);
                        if (!out_file.is_open()) {
                            dead_screen(4);
                            return 1;
                        }
                        cout << "you can start writing" << endl;
                        getline(cin, note_text);
                        getline(cin, note_text);
                        out_file << " | " << note_text << " | " << endl;
                        out_file.close();
                        cout << "closed" << endl;



                        note_select = 0;
                        cout << "read all entries" << endl;
                        cout << "1 yes     2 no  " << endl;
                        cin >> note_select;
                        if (note_select == 1) {
                            ifstream in_file("notes.txt");

                            if (!in_file.is_open()) {
                                dead_screen(4);
                                return 1;
                            }



                            string line;
                            while (getline(in_file, line)) {
                                cout << line << endl;
                            }


                            in_file.close();
                        }
                        cout << "   exit?   " << endl;
                        cout << "1 yes  2 no" << endl;
                        cin >> note_select;
                        if (note_select == 1) {
                            note = false;
                            note_contin = false;
                        }
                        if (note_select == 2) {

                        }
                        
                    }


                    
                }

            }
            else if (menu_select == 200) {
                //SETINGS   
                cout << "00000000000000000000000000000000000000000000000000//SETINGS//00000000000000000000000000000000000000000000000000000000000" << endl;
                cout << "" << endl;
                cin >> seting_select;
            }
            else if (menu_select == 300) {
                cout << "CREDITS |" << endl;
                cout << "        V " << endl;
                cout << "all make 123eto123" << endl;
            }
            else if (menu_select == 400) {
                cout << "spravka for dead screen" << endl;
                cout << "1 неправильный ввод" << endl;
                cout << "2 неправельный пароль" << endl;
                cout << "3 деление на ноль" << endl;
                cout << "4 файл не отрылся" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;
                cout << "" << endl;

            }
            else if (menu_select == 500) {
                break;
            }
            else {
                dead_screen(1);
                break;
            }
           

        }


    }
else {
    settextcolor(4);
    dead_screen(2);
    }


}
