/*
  TASK

  Create an array of 5 test scores
  Find the average
  
 */

#include <iostream>
#include <cstdlib>

int main(){
  // declare our array
  double scores[5];

  /*
  // hardcoded values
  scores[0] = 95.7;
  scores[1] = 92.8;
  scores[2] = 90;
  scores[3] = 93;
  scores[4] = 86.5;
  // sum = 458
  */

  // generate 5 random numbers

  // set the seed before doing anything
  srand((unsigned) time(NULL));

  int randomScore;
  for(int index = 0; index < 5; index++){
    randomScore = rand() % 101;
    scores[index] = randomScore;
    std::cout << "random score #" << index
	      << " is " << randomScore << "\n";
  }
  
  
  // find the average

  // add them all up
  double totalSum = 0;
  for(int index = 0; index < 5; index++){
    totalSum += scores[index];
  }

  //std::cout << "the size of the array is " << (sizeof(scores) / sizeof(double)) << "\n"; // 
  std::cout << "total is " << totalSum << "\n";
  std::cout << "average is " << totalSum / 5; // should be 91.6
}



