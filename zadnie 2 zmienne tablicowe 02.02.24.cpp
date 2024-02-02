#include <iostream>
#include <cstring>
 
int main() {
    const int max_length = 200;
    char input_text[max_length];
 
    std::cout << "Podaj tekst o maksymalnej dlugosci " << max_length << " znakow: ";
    std::cin.getline(input_text, max_length);
 
    
    
    for (int i = 0; i < strlen(input_text); ++i) {
        if (input_text[i] == ' ' || input_text[i] == '.') {
            input_text[i] = '-';
        }
    }
 
    std::cout << "Zmodyfikowany wyraz: " << input_text << std::endl;
 
    return 0;
}