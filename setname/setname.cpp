// setname.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>


int main()
{
	int result = 2; 
	for (int i = 0; i <= 4; i++) { 
		result += i; //1+2+3+4+(+2)
	}
	std::cout << result;

    return 0;
}

