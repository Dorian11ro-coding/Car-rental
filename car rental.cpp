#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;


int main(int argc, char **argv){
    cout << "Which car do you want to rent?\n";
    string car1 = "2018 Kia Carens";
    string car2 = "1999 Volkswagen New Beetle";
    string car3 = "2018 Holden Commodore";
    string car4 = "1999 Mercedes-Benz V-Class";
    string car5 = "2018 Citroën C5 Aircross";
    sleep(2);
    cout << "1: " << car1 << endl;
    cout << "2: " << car2 << endl;
    cout << "3: " << car3 << endl;
    cout << "4: " << car4 << endl;
    cout << "5: " << car5 << endl;
    int carChoice;
    string schoice;
    int bankBalance = 24000;
    int rentTime;
    string rentTimeChoice;
    sleep(3);
    cout << "Choice: ";
    cin >> carChoice;
    if(carChoice == 1){
        cout << "For how much time do you want to rent\n";
        sleep(2);
        cout << "1: 1 hour\n";
        cout << "2: 2 hours\n";
        cout << "3: 3 hours\n";
        cout << "4: 16 hours\n";
        cout << "5: 1 day\n";
        cout << "6: 1 week\n";
        cout << "7: 1 month\n";
        cout << "8: 6 months\n";
        cout << "9: 1 year\n";

        cout << "Choice: ";
        cin >> rentTime;
        // 1 hour = 50$
        // 2 hours = 100$
        // 3 hours = 150$
        // 16 hours = 250$
        // 1 day = 300$
        // 1 week = 350$
        // 1 month = 450$
        // 6 months = 900$
        // 1 year = $1800
        if(rentTime == 1){
            cout << "For 1 hour, this costs 50$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 50){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 50;
                cout << "You have succesfully rented " << car1 << "for 50$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 2){
            cout << "For 2 hour, this costs 100$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 2 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 100){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 100;
                cout << "You have succesfully rented " << car1 << "for 100$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 3){
            cout << "For 3 hour, this costs 150$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 3 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 150){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 150;
                cout << "You have succesfully rented " << car1 << "for 150$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 4){
            cout << "For 16 hour, this costs 250$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 16 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 250){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 250;
                cout << "You have succesfully rented " << car1 << "for 250$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 5){
            cout << "For 1 day, this costs 300$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 day " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 300){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 300;
                cout << "You have succesfully rented " << car1 << "for 300$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 6){
            cout << "For 1 week, this costs 350$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 week " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 350){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 350;
                cout << "You have succesfully rented " << car1 << "for 350$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 7){
            cout << "For 1 month, this costs 450$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 month " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 450){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 450;
                cout << "You have succesfully rented " << car1 << "for 450$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 8){
            cout << "For 6 months, this costs 900$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 6 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 900){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 900;
                cout << "You have succesfully rented " << car1 << "for 900$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 9){
            cout << "For 1 year, this costs 1800$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 year " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 1800){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 1800;
                cout << "You have succesfully rented " << car1 << "for 1800$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else{
            sleep(3);
            cout << "Error!\n";
            sleep(2);
            cout << "Exiting program!\n";
            sleep(1);
            return 1;
        }
    }
    else if(carChoice == 2){
        cout << "For how much time do you want to rent\n";
        sleep(2);
        cout << "1: 1 hour\n";
        cout << "2: 2 hours\n";
        cout << "3: 3 hours\n";
        cout << "4: 16 hours\n";
        cout << "5: 1 day\n";
        cout << "6: 1 week\n";
        cout << "7: 1 month\n";
        cout << "8: 6 months\n";
        cout << "9: 1 year\n";

        cout << "Choice: ";
        cin >> rentTime;
        // 1 hour = 50$
        // 2 hours = 100$
        // 3 hours = 150$
        // 16 hours = 250$
        // 1 day = 300$
        // 1 week = 350$
        // 1 month = 450$
        // 6 months = 900$
        // 1 year = $1800
        if(rentTime == 1){
            cout << "For 1 hour, this costs 50$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 50){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 50;
                cout << "You have succesfully rented " << car1 << "for 50$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 2){
            cout << "For 2 hour, this costs 100$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 2 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 100){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 100;
                cout << "You have succesfully rented " << car1 << "for 100$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 3){
            cout << "For 3 hour, this costs 150$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 3 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 150){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 150;
                cout << "You have succesfully rented " << car1 << "for 150$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 4){
            cout << "For 16 hour, this costs 250$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 16 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 250){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 250;
                cout << "You have succesfully rented " << car1 << "for 250$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 5){
            cout << "For 1 day, this costs 300$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 day " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 300){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 300;
                cout << "You have succesfully rented " << car1 << "for 300$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 6){
            cout << "For 1 week, this costs 350$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 week " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 350){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 350;
                cout << "You have succesfully rented " << car1 << "for 350$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 7){
            cout << "For 1 month, this costs 450$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 month " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 450){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 450;
                cout << "You have succesfully rented " << car1 << "for 450$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 8){
            cout << "For 6 months, this costs 900$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 6 hour " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 900){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 900;
                cout << "You have succesfully rented " << car1 << "for 900$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 9){
            cout << "For 1 year, this costs 1800$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 year " << car1 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 1800){
                cout << "You don't have enough money to rent " << car1 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 1800;
                cout << "You have succesfully rented " << car1 << "for 1800$\n";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else{
            sleep(3);
            cout << "Error!\n";
            sleep(2);
            cout << "Exiting program!\n";
            sleep(1);
            return 1;
        }
    }
    else if(carChoice == 3){
        cout << "For how much time do you want to rent\n";
        sleep(2);
        cout << "1: 1 hour\n";
        cout << "2: 2 hours\n";
        cout << "3: 3 hours\n";
        cout << "4: 16 hours\n";
        cout << "5: 1 day\n";
        cout << "6: 1 week\n";
        cout << "7: 1 month\n";
        cout << "8: 6 months\n";
        cout << "9: 1 year\n";

        cout << "Choice: ";
        cin >> rentTime;
        // 1 hour = 50$
        // 2 hours = 100$
        // 3 hours = 150$
        // 16 hours = 250$
        // 1 day = 300$
        // 1 week = 350$
        // 1 month = 450$
        // 6 months = 900$
        // 1 year = $1800
        if(rentTime == 1){
            cout << "For 1 hour, this costs 50$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 hour " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 50){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 50;
                cout << "You have succesfully rented " << car3 << "for 50$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 2){
            cout << "For 2 hour, this costs 100$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 2 hour " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 100){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 100;
                cout << "You have succesfully rented " << car3 << "for 100$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 3){
            cout << "For 3 hour, this costs 150$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 3 hour " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 150){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 150;
                cout << "You have succesfully rented " << car3 << "for 150$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 4){
            cout << "For 16 hour, this costs 250$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 16 hour " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 250){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 250;
                cout << "You have succesfully rented " << car3 << "for 250$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 5){
            cout << "For 1 day, this costs 300$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 day " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 300){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 300;
                cout << "You have succesfully rented " << car3 << "for 300$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 6){
            cout << "For 1 week, this costs 350$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 week " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 350){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 350;
                cout << "You have succesfully rented " << car3 << "for 350$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 7){
            cout << "For 1 month, this costs 450$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 month " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 450){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 450;
                cout << "You have succesfully rented " << car3 << "for 450$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 8){
            cout << "For 6 months, this costs 900$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 6 hour " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 900){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 900;
                cout << "You have succesfully rented " << car3 << "for 900$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else if(rentTime == 9){
            cout << "For 1 year, this costs 1800$\n";
            sleep(1);
            cout << "Are you sure you want to rent for 1 year " << car3 << "?\n";
            cout << "Choice (y/n): ";
            cin >> rentTimeChoice;
            if(bankBalance <= 1800){
                cout << "You don't have enough money to rent " << car3 << endl;
                sleep(2);
                cout << "Thank you for using Huk's car rental\n";
                return 0;
            }
            else{
                sleep(2);
                bankBalance -= 1800;
                cout << "You have succesfully rented " << car3 << "for 1800$";
                cout << "Enjoy your temporary car!\n";
                return 0;
            }
        }
        else{
            sleep(3);
            cout << "Error!\n";
            sleep(2);
            cout << "Exiting program!\n";
            sleep(1);
            return 1;
        }
    }
    else if(carChoice == 4){
        cout << "For how much time do you want to rent\n";
            sleep(2);
            cout << "1: 1 hour\n";
            cout << "2: 2 hours\n";
            cout << "3: 3 hours\n";
            cout << "4: 16 hours\n";
            cout << "5: 1 day\n";
            cout << "6: 1 week\n";
            cout << "7: 1 month\n";
            cout << "8: 6 months\n";
            cout << "9: 1 year\n";

            cout << "Choice: ";
            cin >> rentTime;
            // 1 hour = 50$
            // 2 hours = 100$
            // 3 hours = 150$
            // 16 hours = 250$
            // 1 day = 300$
            // 1 week = 350$
            // 1 month = 450$
            // 6 months = 900$
            // 1 year = $1800
            if(rentTime == 1){
                cout << "For 1 hour, this costs 50$\n";
                sleep(1);
                cout << "Are you sure you want to rent for 1 hour " << car4 << "?\n";
                cout << "Choice (y/n): ";
                cin >> rentTimeChoice;
                if(bankBalance <= 50){
                    cout << "You don't have enough money to rent " << car4 << endl;
                    sleep(2);
                    cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 50;
                        cout << "You have succesfully rented " << car4 << "for 50$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 2){
                    cout << "For 2 hour, this costs 100$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 2 hour " << car4 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 100){
                        cout << "You don't have enough money to rent " << car4 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 100;
                        cout << "You have succesfully rented " << car4 << "for 100$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 3){
                    cout << "For 3 hour, this costs 150$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 3 hour " << car4 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 150){
                        cout << "You don't have enough money to rent " << car4 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 150;
                        cout << "You have succesfully rented " << car4 << "for 150$";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 4){
                    cout << "For 16 hour, this costs 250$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 16 hour " << car4 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 250){
                        cout << "You don't have enough money to rent " << car4 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 250;
                        cout << "You have succesfully rented " << car4 << "for 250$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 5){
                    cout << "For 1 day, this costs 300$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 day " << car4 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 300){
                        cout << "You don't have enough money to rent " << car4 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 300;
                        cout << "You have succesfully rented " << car4 << "for 300$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 6){
                    cout << "For 1 week, this costs 350$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 week " << car4 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 350){
                        cout << "You don't have enough money to rent " << car4 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 350;
                        cout << "You have succesfully rented " << car4 << "for 350$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 7){
                    cout << "For 1 month, this costs 450$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 month " << car4 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 450){
                        cout << "You don't have enough money to rent " << car4 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 450;
                        cout << "You have succesfully rented " << car4 << "for 450$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 8){
                    cout << "For 6 months, this costs 900$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 6 hour " << car4 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 900){
                        cout << "You don't have enough money to rent " << car4 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 900;
                        cout << "You have succesfully rented " << car4 << "for 900$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 9){
                    cout << "For 1 year, this costs 1800$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 year " << car4 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 1800){
                        cout << "You don't have enough money to rent " << car4 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 1800;
                        cout << "You have succesfully rented " << car4 << "for 1800$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else{
                    sleep(3);
                    cout << "Error!\n";
                    sleep(2);
                    cout << "Exiting program!\n";
                    sleep(1);
                    return 1;
                }
    }
    else if(carChoice == 5){
        cout << "For how much time do you want to rent\n";
                sleep(2);
                cout << "1: 1 hour\n";
                cout << "2: 2 hours\n";
                cout << "3: 3 hours\n";
                cout << "4: 16 hours\n";
                cout << "5: 1 day\n";
                cout << "6: 1 week\n";
                cout << "7: 1 month\n";
                cout << "8: 6 months\n";
                cout << "9: 1 year\n";

                cout << "Choice: ";
                cin >> rentTime;
                // 1 hour = 50$
                // 2 hours = 100$
                // 3 hours = 150$
                // 16 hours = 250$
                // 1 day = 300$
                // 1 week = 350$
                // 1 month = 450$
                // 6 months = 900$
                // 1 year = $1800
                if(rentTime == 1){
                    cout << "For 1 hour, this costs 50$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 hour " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 50){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 50;
                        cout << "You have succesfully rented " << car5 << "for 50$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 2){
                    cout << "For 2 hour, this costs 100$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 2 hour " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 100){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 100;
                        cout << "You have succesfully rented " << car5 << "for 100$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 3){
                    cout << "For 3 hour, this costs 150$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 3 hour " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 150){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 150;
                        cout << "You have succesfully rented " << car5 << "for 150$";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 4){
                    cout << "For 16 hour, this costs 250$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 16 hour " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 250){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 250;
                        cout << "You have succesfully rented " << car5 << "for 250$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 5){
                    cout << "For 1 day, this costs 300$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 day " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 300){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 300;
                        cout << "You have succesfully rented " << car5 << "for 300$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 6){
                    cout << "For 1 week, this costs 350$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 week " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 350){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 350;
                        cout << "You have succesfully rented " << car5 << "for 350$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 7){
                    cout << "For 1 month, this costs 450$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 month " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 450){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 450;
                        cout << "You have succesfully rented " << car5 << "for 450$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 8){
                    cout << "For 6 months, this costs 900$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 6 hour " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 900){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 900;
                        cout << "You have succesfully rented " << car5 << "for 900$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else if(rentTime == 9){
                    cout << "For 1 year, this costs 1800$\n";
                    sleep(1);
                    cout << "Are you sure you want to rent for 1 year " << car5 << "?\n";
                    cout << "Choice (y/n): ";
                    cin >> rentTimeChoice;
                    if(bankBalance <= 1800){
                        cout << "You don't have enough money to rent " << car5 << endl;
                        sleep(2);
                        cout << "Thank you for using Huk's car rental\n";
                        return 0;
                    }
                    else{
                        sleep(2);
                        bankBalance -= 1800;
                        cout << "You have succesfully rented " << car5 << "for 1800$\n";
                        cout << "Enjoy your temporary car!\n";
                        return 0;
                    }
                }
                else{
                    sleep(3);
                    cout << "Error!\n";
                    sleep(2);
                    cout << "Exiting program!\n";
                    sleep(1);
                    return 1;
                }
    }
    return 0;
}

