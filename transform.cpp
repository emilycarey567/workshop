#include <iostream>
void baseconversion(int number_10) {
  int binary[50];  
  int i = 0;
  while (number_10 > 0) {  

    binary[i++] = number_10 % 2;  
    number_10 = number_10 / 2;       
  }
  int j;
  std::cout << "in base 2: ";
  for (j = i - 1; j >= 0;
       j--) {  
    std::cout << binary[j] << std::endl;
  }
}
