/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Riya Singh
 */

//The purpose of this program is to determine whether a number is odd or even.

#include <iostream> //allows program to perform input and output
#include <string> //allows program to work with strings
#include "std_lib_facilities.h" //header file

int main()
{
    
	int num;
	std::cin >> num; //Scan and store input
	std::string str = "The Value ";
	
	int test = num%2; //check for even number
	
	//Decision statements
	if(test == 0)
		std::cout << str << num << " is an even number." << std::endl;
	else
		std::cout << str << num << " is an odd number." << std::endl;
}

