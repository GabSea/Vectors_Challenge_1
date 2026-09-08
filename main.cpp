/*
    Gabriel Lazar - 9/8/26
    Number to day/month program
*/

#include <iostream>

int displayMenu();
void runMenu();
std::string getDay(int number);
std::string getMonth(int number);

int main() {
    runMenu();
    return 0;
}

int displayMenu() {
    int choice;

    std::cout << "Menu:\n---------------------\n"
                 "1. Get day name by number (1-7)\n"
                 "2. Get month name by number (1-12)\n"
                 "3. Quit\n\n"
                 "Enter your choice: ";
    std::cin >> choice;

    return choice;
}

void runMenu() {
    int choice;
    do {
        choice = displayMenu();
        int input;
        std::string output;

        switch (choice) {
            case 1:
                std::cout << "Enter number (1-7) ";
                std::cin >> input;
                output = getDay(input);

                if (output != "INVALID") {
                    std::cout << output << "\n" << std::endl;
                } else {
                    std::cout << "Invalid input" << std::endl;
                }
                break;
            case 2:
                std::cout << "Enter number (1-12) ";
                std::cin >> input;
                output = getMonth(input);

                if (output != "INVALID") {
                    std::cout << output << "\n"  << std::endl;
                } else {
                    std::cout << "Invalid input" << std::endl;
                }
                break;
            case 0:
                std::cout << "bu-bye!" << std::endl;
                break;
            default:
                std::cout << "What.????" << std::endl;
                break;
        }
    } while (choice != 0);
}

std::string getDay(int number) {
    std::string day;

    switch (number) {
        case 1:
            day = "Monday";
            break;
        case 2:
            day = "Tuesday";
            break;
        case 3:
            day = "Wednesday";
            break;
        case 4:
            day = "Thursday";
            break;
        case 5:
            day = "Friday";
            break;
        case 6:
            day = "Saturday";
            break;
        case 7:
            day = "Sunday";
            break;
        default:
            day = "INVALID";
            break;
    }

    return day;
}

std::string getMonth(int number) {
    std::string month;

    switch (number) {
        case 1:
            month = "January";
            break;
        case 2:
            month = "February";
            break;
        case 3:
            month = "March";
            break;
        case 4:
            month = "April";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "June";
            break;
        case 7:
            month = "July";
            break;
        case 8:
            month = "August";
            break;
        case 9:
            month = "September";
            break;
        case 10:
            month = "October";
            break;
        case 11:
            month = "November";
            break;
        case 12:
            month = "December";
            break;
        default:
            month = "INVALID";
            break;
    }

    return month;
}