//Make first part of program print to file with letters placed vertically
/*To show that the file must print to next line when being placed 
 back horizontally write string bruh to tell to go to next line
 */
/*Example:
   A  B   C
  A A B   C bruh (translates to next line)
*/
#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
using namespace std;

void A();
void B();
void C();
void D();
void E();
void F();
void G();
void H();
void I();
void J();
void K();
void L();
void M();
void N();
void O();
void P();
void Q();
void R();
void S();
void T();
void U();
void V();
void W();
void X();
void Y();
void Z();
void Space();

ofstream m;
int main () {
  cout << "Before you make your epic post...\n";
  cout << "What will the filename of this post be?\n";
  string FileName;
  getline(cin,FileName);
  FileName=FileName+".txt";
  m.open (FileName);
  string Input;
  cout << "Enter a string ";
  getline(cin,Input);
  cout << Input << endl;
  char Stroke[Input.size()+1];
  strcpy(Stroke, Input.c_str());
  for(int cunny=0; cunny<(Input.size()+1); cunny++)
  {
      if(Stroke[cunny]=='a' || Stroke[cunny]=='A')
      {
          A();
      }
      if(Stroke[cunny]=='b' || Stroke[cunny]=='B')
      {
          B();
      }
      if(Stroke[cunny]=='c' || Stroke[cunny]=='C')
      {
          C();
      }
      if(Stroke[cunny]=='d' || Stroke[cunny]=='D')
      {
          D();
      }
      if(Stroke[cunny]=='e' || Stroke[cunny]=='E')
      {
          E();
      }
      if(Stroke[cunny]=='f' || Stroke[cunny]=='F')
      {
          F();
      }
      if(Stroke[cunny]=='g' || Stroke[cunny]=='G')
      {
          G();
      }
      if(Stroke[cunny]=='h' || Stroke[cunny]=='H')
      {
          H();
      }
      if(Stroke[cunny]=='i' || Stroke[cunny]=='I')
      {
          I();
      }
      if(Stroke[cunny]=='j' || Stroke[cunny]=='J')
      {
          J();
      }
      if(Stroke[cunny]=='k' || Stroke[cunny]=='K')
      {
          K();
      }
      if(Stroke[cunny]=='l' || Stroke[cunny]=='L')
      {
          L();
      }
      if(Stroke[cunny]=='m' || Stroke[cunny]=='M')
      {
          M();
      }
      if(Stroke[cunny]=='n' || Stroke[cunny]=='N')
      {
          N();
      }
      if(Stroke[cunny]=='o' || Stroke[cunny]=='O')
      {
          O();
      }
      if(Stroke[cunny]=='p' || Stroke[cunny]=='P')
      {
          P();
      }
      if(Stroke[cunny]=='q' || Stroke[cunny]=='Q')
      {
          Q();
      }
      if(Stroke[cunny]=='r' || Stroke[cunny]=='R')
      {
          R();
      }
      if(Stroke[cunny]=='s' || Stroke[cunny]=='S')
      {
          S();
      }
      if(Stroke[cunny]=='t' || Stroke[cunny]=='T')
      {
          T();
      }
      if(Stroke[cunny]=='u' || Stroke[cunny]=='U')
      {
          U();
      }
      if(Stroke[cunny]=='v' || Stroke[cunny]=='V')
      {
          V();
      }
      if(Stroke[cunny]=='w' || Stroke[cunny]=='W')
      {
          W();
      }
      if(Stroke[cunny]=='x' || Stroke[cunny]=='X')
      {
          X();
      }
      if(Stroke[cunny]=='y' || Stroke[cunny]=='Y')
      {
          Y();
      }
      if(Stroke[cunny]=='z' || Stroke[cunny]=='Z')
      {
          Z();
      }
      if(Stroke[cunny]==' ' || Stroke[cunny]==' ')
      {
          Space();
      }
  }
  m.close();
  return 0;
}

void A() {
    m << "       " << endl;
    m << "   A   " << endl;
    m << "  A A  " << endl;
    m << " A   A " << endl;
    m << "A     A" << endl;
    m << "A     A" << endl;
    m << "AAAAAAA" << endl;
    m << "A     A" << endl;
    m << "A     A" << endl;
    m << "A     A" << endl;
    m << "       " << endl;
}
void B() {
    m << "       " << endl;
    m << " BB    " << endl;
    m << " B BB  " << endl;
    m << " B B   " << endl;
    m << " BB    " << endl;
    m << " BB    " << endl;
    m << " B B   " << endl;
    m << " B  B  " << endl;
    m << " B B   " << endl;
    m << " BB    " << endl;
    m << "       " << endl;
}
void C() {
    m << "       " << endl;
    m << "      C" << endl;
    m << "    CC " << endl;
    m << "  CCC  " << endl;
    m << " CC    " << endl;
    m << "CC     " << endl;
    m << "CC     " << endl;
    m << " CC    " << endl;
    m << "  CC   " << endl;
    m << "   CCCC" << endl;
    m << "       " << endl;
}
void D() {
    m << "       " << endl;
    m << "D      " << endl;
    m << "DD     " << endl;
    m << "D D    " << endl;
    m << "D  D   " << endl;
    m << "D  DD  " << endl;
    m << "D   DD " << endl;
    m << "D   D  " << endl;
    m << "D  D   " << endl;
    m << "DDD    " << endl;
    m << "       " << endl;
}

void E() {
    m << "       " << endl;
    m << "EEEEEEE" << endl;
    m << "E      " << endl;
    m << "E      " << endl;
    m << "E      " << endl;
    m << "EEEEEEE" << endl;
    m << "E      " << endl;
    m << "E      " << endl;
    m << "E      " << endl;
    m << "EEEEEEE" << endl;
    m << "       " << endl;
}

void F() {
    m << "       " << endl;
    m << "FFFFFFF" << endl;
    m << "F      " << endl;
    m << "F      " << endl;
    m << "FFFFF  " << endl;
    m << "F      " << endl;
    m << "F      " << endl;
    m << "F      " << endl;
    m << "F      " << endl;
    m << "F      " << endl;
    m << "       " << endl;
}

void G() {
    m << "       " << endl;
    m << "GGGGGGG" << endl;
    m << "G      " << endl;
    m << "G      " << endl;
    m << "G      " << endl;
    m << "G  GGGG" << endl;
    m << "G     G" << endl;
    m << "G     G" << endl;
    m << "G     G" << endl;
    m << "GGGGGGG" << endl;
    m << "       " << endl;
}

void H() {
    m << "       " << endl;
    m << "H     H" << endl;
    m << "H     H" << endl;
    m << "H     H" << endl;
    m << "H     H" << endl;
    m << "HHHHHHH" << endl;
    m << "H     H" << endl;
    m << "H     H" << endl;
    m << "H     H" << endl;
    m << "H     H" << endl;
    m << "       " << endl;
}

void I() {
    m << "       " << endl;
    m << "IIIIIII" << endl;
    m << "   I   " << endl;
    m << "   I   " << endl;
    m << "   I   " << endl;
    m << "   I   " << endl;
    m << "   I   " << endl;
    m << "   I   " << endl;
    m << "   I   " << endl;
    m << "IIIIIII" << endl;
    m << "       " << endl;
}

void J() {
    m << "       " << endl;
    m << "JJJJJJJ" << endl;
    m << "   J   " << endl;
    m << "   J   " << endl;
    m << "   J   " << endl;
    m << "   J   " << endl;
    m << "J  J   " << endl;
    m << "J  J   " << endl;
    m << "J  J   " << endl;
    m << "JJJJ   " << endl;
    m << "       " << endl;
}

void K() {
    m << "       " << endl;
    m << "K     K" << endl;
    m << "K    K " << endl;
    m << "K   K  " << endl;
    m << "K  K   " << endl;
    m << "KK     " << endl;
    m << "K K    " << endl;
    m << "K  K   " << endl;
    m << "K   K  " << endl;
    m << "K    K " << endl;
    m << "       " << endl;
}
void L() {
    m << "       " << endl;
    m << "L      " << endl;
    m << "L      " << endl;
    m << "L      " << endl;
    m << "L      " << endl;
    m << "L      " << endl;
    m << "L      " << endl;
    m << "L      " << endl;
    m << "L      " << endl;
    m << "LLLLLLL" << endl;
    m << "       " << endl;
}

void M() {
    m << "       " << endl;
    m << "M     M" << endl;
    m << "MM   MM" << endl;
    m << "M M M M" << endl;
    m << "M  M  M" << endl;
    m << "M     M" << endl;
    m << "M     M" << endl;
    m << "M     M" << endl;
    m << "M     M" << endl;
    m << "M     M" << endl;
    m << "       " << endl;
}

void N() {
    m << "       " << endl;
    m << "N     N" << endl;
    m << "NN    N" << endl;
    m << "NNN   N" << endl;
    m << "N NN  N" << endl;
    m << "N  N  N" << endl;
    m << "N  NN N" << endl;
    m << "N   N N" << endl;
    m << "N   NNN" << endl;
    m << "N    NN" << endl;
    m << "       " << endl;
}

void O(){
    m << "       " << endl;
    m << "  OO   " << endl;
    m << " O  O  " << endl;
    m << "O    O " << endl;
    m << "O    O " << endl;
    m << "O    O " << endl;
    m << "O    O " << endl;
    m << "O    O " << endl;
    m << " O  O  " << endl;
    m << "  OO   " << endl;
    m << "       " << endl;
}

void P(){
    m << "       " << endl;
    m << "PPPPP  " << endl;
    m << "P    P " << endl;
    m << "P     P" << endl;
    m << "P    P " << endl;
    m << "P   P  " << endl;
    m << "PPPP   " << endl;
    m << "P      " << endl;
    m << "P      " << endl;
    m << "P      " << endl;
    m << "       " << endl;
}

void Q(){
    m << "       " << endl;
    m << "  QQ   " << endl;
    m << " Q  Q  " << endl;
    m << "Q    Q " << endl;
    m << "Q    Q " << endl;
    m << "Q    Q " << endl;
    m << "Q Q  Q " << endl;
    m << "Q  Q Q " << endl;
    m << "Q   QQ " << endl;
    m << " Q  QQQ" << endl;
    m << "  QQ  Q" << endl;
    m << "       " << endl;
}
void R() {
    m << "       " << endl;
    m << "RRRRRRR" << endl;
    m << "R     R" << endl;
    m << "R     R" << endl;
    m << "RRRRRRR" << endl;
    m << "R R    " << endl;
    m << "R  R   " << endl;
    m << "R   R  " << endl;
    m << "R    R " << endl;
    m << "R     R" << endl;
    m << "       " << endl;
}

void S() {
    m << "       " << endl;
    m << "   SSSS" << endl;
    m << "  S    " << endl;
    m << " S     " << endl;
    m << "S      " << endl;
    m << " SS    " << endl;
    m << "   S   " << endl;
    m << "    S  " << endl;
    m << "  SSS  " << endl;
    m << "SSS    " << endl;
    m << "       " << endl;
}

void T() {
    m << "       " << endl;
    m << "TTTTTTT" << endl;
    m << "   T   " << endl;
    m << "   T   " << endl;
    m << "   T   " << endl;
    m << "   T   " << endl;
    m << "   T   " << endl;
    m << "   T   " << endl;
    m << "   T   " << endl;
    m << "   T   " << endl;
    m << "       " << endl;
}

void U() {
    m << "       " << endl;
    m << "U     U" << endl;
    m << "U     U" << endl;
    m << "U     U" << endl;
    m << "U     U" << endl;
    m << "U     U" << endl;
    m << "U     U" << endl;
    m << "U     U" << endl;
    m << "U     U" << endl;
    m << "UUUUUUU" << endl;
    m << "       " << endl;
}

void V() {
    m << "       " << endl;
    m << "V     V" << endl;
    m << "VV   VV" << endl;
    m << " V   V " << endl;
    m << " V   V " << endl;
    m << " V   V " << endl;
    m << "  V V  " << endl;
    m << "  V V  " << endl;
    m << "   V   " << endl;
    m << "   V   " << endl;
    m << "       " << endl;
}

void W() {
    m << "       " << endl;
    m << "W     W" << endl;
    m << "W     W" << endl;
    m << "W     W" << endl;
    m << "W  W  W" << endl;
    m << "W  W  W" << endl;
    m << "W W W W" << endl;
    m << "WW   WW" << endl;
    m << "WW   WW" << endl;
    m << "W     W" << endl;
    m << "       " << endl;
}

void X() {
    m << "       " << endl;
    m << "X     X" << endl;
    m << " X   X " << endl;
    m << " X   X " << endl;
    m << "  X X  " << endl;
    m << "   X   " << endl;
    m << "  X X  " << endl;
    m << " X   X " << endl;
    m << " X   X " << endl;
    m << "X     X" << endl;
    m << "       " << endl;
}

void Y() {
    m << "       " << endl;
    m << "Y     Y" << endl;
    m << "Y     Y" << endl;
    m << " Y   Y " << endl;
    m << " Y   Y " << endl;
    m << "  YYY  " << endl;
    m << "   Y   " << endl;
    m << "   Y   " << endl;
    m << "   Y   " << endl;
    m << "   Y   " << endl;
    m << "       " << endl;
}

void Z() {
    m << "       " << endl;
    m << "ZZZZZZZ" << endl;
    m << "     Z " << endl;
    m << "    ZZ " << endl;
    m << "    Z  " << endl;
    m << "   ZZ  " << endl;
    m << "   Z   " << endl;
    m << "  ZZ   " << endl;
    m << " Z    " << endl;
    m << "ZZZZZZZ" << endl;
    m << "       " << endl;
}

void Space() {
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
    m << "       " << endl;
}

