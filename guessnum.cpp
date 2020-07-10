#include <bits/stdc++.h>

using namespace std;

void space() {
  for (int i = 0; i < 10; i++) {
    cout << endl;
  }
}

void game() {
  srand(time(0));
  int num = (rand() % 100) + 1;
  cout << "Hiding number from 1 to 100...\n";
  int n;
  int count = 0;
  cout << "You number?\n";
  while (true) {
    cin >> n;

    space();
    if (n == num) {
      cout << "You won!\n";
      break;
    } else if (n > num) {
      cout << "Your number is bigger\nTry again:\n";
      count++;
    } else {
      cout << "Your number is smaller\nTry again:\n";
      count++;
    }
  }
  cout << count << " times you was wrong!\n";
}

void again() {
  while (true) {
    cout << "Do you wanna play again?[Y/N]\n";
    string s;
    cin >> s;

    space();
    if (s[0] == 'Y' || s[0] == 'y') {
      game();
    } else {
      cout << "Goodbye!";
      break;
    }
  }
}



int main() {
  cout << "Welcome to guess number game!\n";
  cout << "Enter you name:\n";
  
  string name;
  cin >> name;
  
  space();
  cout << "Let's play a game " << name;
  
  game();
  again();

  return 0;
}
