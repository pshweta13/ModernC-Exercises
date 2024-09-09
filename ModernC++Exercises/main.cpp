//
//  main.cpp
//  ModernC++Exercises
//
//  Created by Shweta Patel on 08/09/24.
//
//  Exercises from the course Modern C++ for beginners (Udemy)

#include <iostream>
#include <string>

int main() {
    
    int input;
    std::cout << "Please enter a number\n";
    
    std::cin >> input;
    
    std::cout << "You entered the number " << input << "\n";
    
    std::string inputString;
    
    std::cout << "Please enter a word\n";
    
    std::cin >> inputString;
    
    std::cout << "You entered the word " << inputString << "\n";
    
    
    
    std::string first_name, last_name;
    
    std::cout << "Enter yout first name & last name\n";
    
    std::cin >> first_name >> last_name;
    
    std::cout << "Hello, " << first_name << " " << last_name << "\n";
    std::cout << "Ah, Dr " << last_name << ", I've been expecting you...\n";
    std::cout << "Hello, " << first_name << ", how old are you?" << "\n";
    
    int age;
    
    std::cin >> age;
    
    std:: cout << "You are " << age << " years old!\n";
    
    return 0;
}
