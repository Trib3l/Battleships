#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

// BATTLESHIPS_PROJECT
int main() {
    int radkyplochy = 6;
    int sloupceplochy = 6;
    int zasahy = 0;
    int tahy = 0;
    int pozice;
    int jazyk;

        bool lodicky [6][6] = {
        { 0, 1, 0, 0, 0, 0 },
        { 0, 1, 0, 0, 1, 0 },
        { 0, 0, 0, 0, 0, 0 },
        { 0, 0, 0, 0, 0, 0 },
        { 0, 0, 1, 1, 0, 0 },
        { 0, 0, 0, 0, 0, 0 },
        };

        string plocha [6][6] = {
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        {" 0 ", " 0 ", " 0 ", " 0 ", " 0 ", " 0 "},
        };

do {
    system("cls");
    cout << "=---==------=======-----==---=" << endl;
    cout << "|         BATTLESHIPS        |" << endl;
    cout << "|         Version 0.1        |" << endl;
    cout << "=---==------=======-----==---=" << endl;

    cout << "\n  1 - English" << endl;
    cout << "  2 - Cestina" << endl;

    cout << "\nZvol si jazyk / Choose your language: ";
    cin >> jazyk;
    Sleep(2000);

        if (jazyk == 1) {
          cout << "\n   Language is setting up to English, please wait...\n" << endl;
          Sleep(2000);
        }
        if (jazyk == 2) {
          cout << "\n   Nastavuje se jazyk Cestina, vyckejte...\n" << endl;
          Sleep(2000);
        }

switch(jazyk) {
 case 1: // Anglictina
   while (zasahy < 5) {
    system("cls");
    int radek;
    int sloupec;

    cout << "=----=----===--===----=----=" << endl;
    cout << "|        BATTLESHIPS       |" << endl;
    cout << "=----=----===--===----=----=\n" << endl;
    cout << "      0  1  2  3  4  5 \n" << endl;

    cout << "  0  " << plocha[0][0] << plocha[0][1] << plocha[0][2] << plocha[0][3] << plocha[0][4] << plocha[0][5] << endl;
    cout << "  1  " << plocha[1][0] << plocha[1][1] << plocha[1][2] << plocha[1][3] << plocha[1][4] << plocha[1][5] << endl;
    cout << "  2  " << plocha[2][0] << plocha[2][1] << plocha[2][2] << plocha[2][3] << plocha[2][4] << plocha[2][5] << endl;
    cout << "  3  " << plocha[3][0] << plocha[3][1] << plocha[3][2] << plocha[3][3] << plocha[3][4] << plocha[3][5] << endl;
    cout << "  4  " << plocha[4][0] << plocha[4][1] << plocha[4][2] << plocha[4][3] << plocha[4][4] << plocha[4][5] << endl;
    cout << "  5  " << plocha[5][0] << plocha[5][1] << plocha[5][2] << plocha[5][3] << plocha[5][4] << plocha[5][5] << endl;

    cout << "\nThere are 3 ships on the map. Sizes: 1, 2 and 2. Destroy them all and win!" << endl;
    Sleep(500);

    cout << "\n\nChoose the row 0-5 you want to shoot: " << endl;
    cin >> radek;
    cout << "\nChoose the column 0-5 in which you want to shoot: " << endl;
    cin >> sloupec;

    if (lodicky[radek][sloupec] == 1 && plocha[radek][sloupec] == " 0 ") {
       plocha[radek][sloupec] = " x ";
       zasahy++;
       cout << "\nYour missile surprised the enemy ship! " << (5-zasahy) << " hits left!\n\n" << endl;
       Sleep(2500);
    } else if (lodicky[radek][sloupec] == 0 && plocha[radek][sloupec] == " 0 ") {
      cout << "\nYour missile drowned in the water!\n\n" << endl;
      plocha [radek][sloupec] = " - ";
      Sleep(2500);
    } else {
     cout << "\nYou have already shot at this location!\n\n" << endl;
     Sleep(2000);
    }
    tahy++;
  }

  system("cls");
  cout << "\n\n   =----===--------=------------==--=-=-=--==------------=--------===----=" << endl;
  cout << "   |    ---?!-   You won! You have destroyed all enemy ships!   -!?---   |" << endl;
  cout << "   |    ---?!-          You shot " << tahy << " times in your game!          -!?---   |" << endl;
  cout << "   =----===--------=------------==--=-=-=--==------------=--------===----=\n" << endl;
  cout << "\n       Author: Adrian Bakalar\n" << endl;

  return 0;


 case 2: // Cestina
   while (zasahy < 5) {
    system("cls");
    int radek;
    int sloupec;

    cout << "=----=----===--===----=----=" << endl;
    cout << "|        BATTLESHIPS       |" << endl;
    cout << "=----=----===--===----=----=\n" << endl;
    cout << "      0  1  2  3  4  5 \n" << endl;

    cout << "  0  " << plocha[0][0] << plocha[0][1] << plocha[0][2] << plocha[0][3] << plocha[0][4] << plocha[0][5] << endl;
    cout << "  1  " << plocha[1][0] << plocha[1][1] << plocha[1][2] << plocha[1][3] << plocha[1][4] << plocha[1][5] << endl;
    cout << "  2  " << plocha[2][0] << plocha[2][1] << plocha[2][2] << plocha[2][3] << plocha[2][4] << plocha[2][5] << endl;
    cout << "  3  " << plocha[3][0] << plocha[3][1] << plocha[3][2] << plocha[3][3] << plocha[3][4] << plocha[3][5] << endl;
    cout << "  4  " << plocha[4][0] << plocha[4][1] << plocha[4][2] << plocha[4][3] << plocha[4][4] << plocha[4][5] << endl;
    cout << "  5  " << plocha[5][0] << plocha[5][1] << plocha[5][2] << plocha[5][3] << plocha[5][4] << plocha[5][5] << endl;

    cout << "\nNa mape se vyskutuji 3 lode. Velikosti: 1, 2 a 2. Znic vsechny a vyhraj!\n" << endl;
    Sleep(500);

    cout << "\nVyber si radek 0-5 do ktereho chces vystrelit: " << endl;
    cin >> radek;
    cout << "\nVyber si sloupec 0-5 do ktereho chces vystrelit: " << endl;
    cin >> sloupec;

    if (lodicky[radek][sloupec] == 1 && plocha[radek][sloupec] == " 0 ") {
       plocha[radek][sloupec] = " x ";
       zasahy++;
       cout << "\nTvoje strela prekvapila nepratelskou lod!"  << " Zbyva " << (5-zasahy) << " zasahu!" << endl;
       Sleep(2500);
    } else if (lodicky[radek][sloupec] == 0 && plocha[radek][sloupec] == " 0 ") {
      cout << "\nTvoje strela se utopila ve vode!\n\n" << endl;
      plocha [radek][sloupec] = " - ";
      Sleep(2500);
    } else if (plocha[radek][sloupec] == " - " || " x ") {
     cout << "\nNa toto misto jsi jiz vystrelil!\n\n" << endl;
     Sleep(2000);
    }
  tahy++;
}



  system("cls");
  cout << "\n\n   =----===--------=------------==--=-=-=--==------------=--------===----=" << endl;
  cout << "   |  ---?!-   Vyhral jsi! Znicil jsi vsechny nepratelske lode!   -!?--- |" << endl;
  cout << "   |  ---?!-          Ve vasi hre jste vystrelil " << tahy << " krat!          -!?--- |" << endl;
  cout << "   =----===--------=------------==--=-=-=--==------------=--------===----=\n" << endl;
  cout << "\n       Autor: Adrian Bakalar\n" << endl;

  return 0;

 /*case SVK:
    while (zasahy < 6)*/

}
    if (jazyk != 1 || 2) {
        cout << "\n\nNeznamy jazyk! / Unknown language!" << endl;
        Sleep (1500);
        }

} while (jazyk = 1 || 2);
}
