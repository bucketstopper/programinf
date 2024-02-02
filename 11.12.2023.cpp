 #include <iostream>
 
int main() {
    const int maxInputLength = 100; // Maksymalna długość wprowadzonego tekstu
    char nameSurname[maxInputLength];
 
    std::cout << "Podaj imie i nazwisko: ";
    std::cin.getline(nameSurname, maxInputLength);
 
    int spacePosition = -1;
    int nullTerminatorPosition = -1;
 
    // Znajdź pozycję spacji i znaku '\0'
    for (int i = 0; i < maxInputLength; ++i) {
        if (nameSurname[i] == ' ') {
            spacePosition = i;
        }
        else if (nameSurname[i] == '\0') {
            nullTerminatorPosition = i;
            break;
        }
    }
 
    std::cout << "Twoje dane osobowe: " << nameSurname << std::endl;
    std::cout << "Pozycja spacji: " << spacePosition << std::endl;
    std::cout << "Pozycja konca: " << nullTerminatorPosition << std::endl;
 
    return 0;
}
  
  	