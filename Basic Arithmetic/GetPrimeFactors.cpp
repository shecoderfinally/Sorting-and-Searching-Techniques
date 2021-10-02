/*This code uses two functions to output the prime factors of a number. The number will
be an unsigned long command line argument and the resulting facotrs will be saved in a text file.
*/ 


#include <iostream>
#include <string>
#include <stdlib.h>  
#include <stdio.h> 
#include <fstream> 
#include <iterator>
#include <math.h> 
#include <sstream>
#include <vector>
using namespace std;

/*
This function will determine if the number has any prime factors then calculate all the prime factors and output them
in a text file. Its input will be the initial string output, unsigned long input number.
*/
bool GetPrimeFactors (const unsigned long ulInputNumber, string &strOutput)
{
	vector<int> factors; // stores the factors of input in an integer array
	unsigned long number = ulInputNumber;
	// 1 and 0 have no prime factors
	if (number==0 or number==1){
		ofstream ofs ("output1.txt", ofstream::out);
		ofs << strOutput + "No prime factors\"" << endl;
		ofs.close();
		return false;
	} 
    // keep dividing number by 2 since 2 is smallest prime factor
	while (number%2 == 0) 
    { 
        factors.push_back(2); 
        number = number/2; 
    } 
    // now check rest of prime numbers as possible factors until sqrt of the number
    for (int i = 3; i <= sqrt(number); i = i+2) 
    { 
        while (number%i == 0) 
        { 
            factors.push_back(i);
            number = number/i; 
        } 
    } 
    // remaining number is also a factor
    if (number > 2) factors.push_back(number);

    // We convert the vector of integer factors into a string separated by commas
    std::ostringstream out;
	if (!factors.empty())
	{
	    std::copy(factors.begin(), factors.end() - 1, std::ostream_iterator<int>(out, ","));
	    out << factors.back();
	}
	std::string result( out.str() );
	ofstream ofs ("output1.txt", ofstream::out);
	ofs << strOutput + result + "\""<< endl;
	ofs.close();
	return true;
}

/*
This function returns true only if the number is a positive number.
*/
bool isNumber(char number[])
{

    //checking for negative numbers
    if (number[0] == '-'){
    	return false;
    }
    // check that each digit of number is numerical
    for (int i = 0; number[i] != 0; i++)
    {
        if (!isdigit(number[i]))
            return false;
    }
    return true;
}

/*
This main function will parse the command line argument and call the function that gets the prime factors for this number.
*/
int main(int argc, char* argv[])
{

    // There must be a single command line input
    if(argc !=2){
    	ofstream ofs ("output1.txt", ofstream::out);
		ofs << "Invalid Input"<< endl;
		ofs.close();
    	return 0;
    }
    // Input must be a positive number
    if (isNumber(argv[1]) == false){
    	ofstream ofs ("output1.txt", ofstream::out);
		ofs << "Invalid Input"<< endl;
		ofs.close();    	
    	return 0;
    }
    unsigned long ulInputNumber = strtoul(argv[1], NULL, 0);
    bool isvalid = false;
    string initialOutput = "\"";
    isvalid = GetPrimeFactors(ulInputNumber, initialOutput);
    return 0;
}
