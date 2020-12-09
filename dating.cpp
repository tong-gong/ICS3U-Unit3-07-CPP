// Copyright (c) 2020 Tong Gong All rights reserved
//
// Created by Tong Gong
// Created on November 2020
// This is a dating program.
// cpplint ./helloWorld.cpp 是style check 的指令


#include <iostream>
#include <string>

int main() {
  // This is the function to play dating program.

  int userInput;
  std::string userInputAsString;

  // input
  std::cout << "Enter your age" << std::endl;
  std::cin >> userInputAsString;
  std::cout << "" << std::endl;

  // process + output
  try {
     userInput = std::stoi(userInputAsString);
     if (25 <= userInput && userInput <= 40) {
      std::cout << "You can date my grandchild" << std::ends;
     } else {
      std::cout << "You can not date my grandchild!!!" << std::ends;
     }
  } catch (std::invalid_argument) {
    std::cout << "You are not type in an integer!" << std::ends;
  }
}

