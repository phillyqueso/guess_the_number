#include <stdio.h>
#include <iostream>
#include <ctime>

// fetched random number between low and high
int fetch_random_between(int low, int high) {
  srand (time(NULL));

  return rand() % ( high - low + 1 ) + low;
}

int main() {
  int answer = fetch_random_between(1, 100);
  std::cout<<"random answer set to "<<answer<<"\n";
  int x = 0;
  int guesses = 1;
  while (x != answer) {
    std::cout<<"Pick a number between 1 and 100\n";
    std::cin>>x;
    if (x == answer) {
      std::cout<<"You won! it took you "<<guesses<<" guesses \n";
    } else {
      guesses++;
      if (x > answer) {
        std::cout<<"try again (lower)\n";
      } else {
        std::cout<<"try again (higher)\n";
      }
    } 
  }
  return 0;
}
