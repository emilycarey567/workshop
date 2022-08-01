#include <iostream>
extern void baseconversion(int number_10);
int main()
{
int userNum;
std::cout << "\nEnter number in base 10 : "<<std::endl; //read the number from user
std::cin >> userNum;
baseconversion(userNum); //convert number to binary
}