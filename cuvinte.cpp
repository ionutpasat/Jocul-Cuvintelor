#include <bits/stdc++.h>
#include <iostream>
#include <random>

using namespace std;

int choose_random(string cuvant, vector<int> guessed) {
  if ((int)guessed.size() == (int)cuvant.size())
    return -1;
  vector<int> pos;
  for (int i = 0; i < (int)cuvant.size(); ++i)
    if (find(guessed.begin(), guessed.end(), i) == guessed.end()) {
      pos.push_back(i);
    }
  srand(time(NULL));
  int rnd = rand() % ((int)pos.size());
  if ((int)pos.size() != 0)
    return pos[rnd];
  else
    return -1;
}

int main(void) {
  string cuvant = "perpetuum";
  vector<int> guessed;
  string alegere;
  cout << "Cuvant din " << (int)cuvant.size() << " litere! \n" << endl;
  cout << "Definitie: Merge incontinuu, la infinit.\n" << endl;

  for (int i = 0; i < (int)cuvant.size(); ++i)
    cout << "_ ";
  cout << endl << endl;

  while (true) {
    cin >> alegere;
    if (strncmp(alegere.c_str(), "litera", 6) == 0) {
      int pos = choose_random(cuvant, guessed);
      guessed.push_back(pos);
      if (pos == -1)
        break;
      for (int i = 0; i < (int)cuvant.size(); ++i) {
        if (find(guessed.begin(), guessed.end(), i) == guessed.end())
          cout << "_ ";
        else
          cout << cuvant[i] << " ";
      }
      cout << endl << endl;
      continue;
    } else if (strcmp(alegere.c_str(), cuvant.c_str()) == 0) {
      for_each(alegere.begin(), alegere.end(),
               [](char &c) { c = ::toupper(c); });
      cout << alegere << "! Pustoaico tu pleci cu banii...!\n";
      break;
    }
    cout << "\nMai incearca..\n\n";
  }
  return 0;
}
