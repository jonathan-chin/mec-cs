# 02 Functions and Arrays Review

## Purpose

To practice using functions and arrays in C++.

## Task

You just started in small, international business that operates in the US and Japan. You've been making some profit but the sales are in USD and you want to visualize it in yen. You're also curious how it stacks up against your friend's business, which also operates in the US and Japan. So you figure that you can use C++ to help you do that.

1. Create an array of 7 doubles and use a random number generator to fill it with numbers between 0 and 100 (inclusive). These random numbers can be whole numbers (ie integers) but your data type should be doubles for consistency. This represents your company's profit in USD.

2. Write a function that takes a double as an input and returns a double. It should convert from USD to yen, which is roughly 1 USD = 147.78 yen.

3. Create another array of 7 doubles and call the function you wrote in step 2 on each valye in the array in step 1, storing them in this new array. This represents your company's profit in yen.

4. Repeat steps 1 and 3 for your friend's company

5. Find the average profit in yen of both companies.

5. Print out both companies' profits (in both USD and yen), the average profit in yen, and which company is more profitable

## HINT

To generate a random number in C++, you will need the srand() and rand() functions from the `cstdlib` library. You may also need the `time` library to provide a random seed number. You can follow [this tutorial](https://www.digitalocean.com/community/tutorials/random-number-generator-c-plus-plus) on Digital Ocean to see how to do this.

Since the numbers are calculated randomly every time the program runs, your output will not 100% match the expected output. But it should be reasonable.

## Expected Output

Your Company's Profits (USD): 62 35 74 20 86 69 12  
Your Company's Profits (Yen): 9184.36 5179.3 10951.72 2955.6 12746.68 10159.22 1773.36  
Friend's Company's Profits (USD): 49 91 33 4 73 71 87  
Friend's Company's Profits (Yen): 7240.22 13479.18 4888.94 591.12 10791.94 10506.38 12847.26  
Average Profit in Yen (Your Company): 7250.42857  
Average Profit in Yen (Friend's Company): 9240.58571  
Friend's Company is more profitable.

## Submission

Please submit a `.cpp` file on Blackboard
