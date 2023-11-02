// Adam Secrest
// adam.secrest@csu.fullerton.edu
// @Secrest2904
// Partners: @jubiadas004

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() <= 1) {
    std::cout << "Error: you must supply at least one number."
              << ".\n";
    return 1;
  }

  double sum = 0.0;

  for (const std::string& argument : arguments) {
    if (argument == arguments[0]) {
      continue;
    }
    double number = std::stof(argument);
    sum += number;
  }

  double average = sum / static_cast<double>(arguments.size() - 1);
  std::cout << "average = " << average << "\n";

  return 0;
}
