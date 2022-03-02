/*
  Screw it I'm making squiggy line c++ version >:( and you can't stop me.
*/

#include <iostream>
#include <chrono>
#include <thread>
#include <Windows.h>

// Settings
const bool INF = true;
const int TIME /* in milliseconds */ = 25;
const int ROWS = 5;
const int LENGTH = 5;





void squiggle() {

  std::string x = "";

  for (int t = LENGTH; t > 0; t--) {
    x += "#";
  }

  std::string s = " ";

  // Forwards
  for (int i = ROWS; i > 0; i--) {



    for (int x = i; x > 0; x--) {
      s += " ";
    }

    std::cout << s;
    std::cout << x << "\n";


    s = " ";


    // Sleep for an amount of time
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::milliseconds(TIME));
  }

  // Backwards
  for (int i = 0; i < ROWS; i++) {



    for (int x = i; x > 0; x--) {
      s += " ";
    }

    std::cout << s;
    std::cout << x << "\n";

    s = " ";

    // Sleep for an amount of time
    std::this_thread::sleep_until(std::chrono::system_clock::now() + std::chrono::milliseconds(TIME));

  }

}


// Initialize main
int main() {

  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);

  if (INF) {
    while (INF) {
      // Run infinitley

      squiggle();

    }
  }

  else if (!INF) {
    // Repeat once

    squiggle();

  }

  return 0;
}