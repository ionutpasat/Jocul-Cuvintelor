#include "json.hpp"
#include <iostream>

using namespace std;
using json = nlohmann::json;

int main(void) {

  json four_letter_words;
  four_letter_words["chec"]["definitie"] =
      "Sort de prăjitură de origine englezească, preparată din aluat cu "
      "grăsime, stafide, rahat etcetera și coaptă în forme.";
  four_letter_words["chec"]["hint1"] = "Seamana cu cozonacul.";
  four_letter_words["chec"]["hint2"] = "De obicei e servit cu lapte.";

  return 0;
}
