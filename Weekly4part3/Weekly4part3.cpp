#include <iostream>
#include <string>
#include <vector>



 struct phoneNr {
        std::string name;
        long number=0;
    };

 std::vector <phoneNr> list (10);

 void print(phoneNr number) {
     std::cout << "Name: " << number.name << std::endl;
     std::cout << "Phone number: " << number.number << std::endl;

     

 }

 phoneNr get(int position) {
   
             std::cout << "Please insert the name\n";
             std::cin >> list.at(position).name;
             std::cout << "Please insert the phone number\n";
             std::cin >> list.at(position).number;
             return(list.at(position));

 }


 void run() {

     int select;
     int position;



     
 select:
     std::cout << "Please press 1 to save a new number or 2 to view the numbers previously saved\n";
     std::cin >> select;

     if (std::cin.fail()) {
         
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     }

     if (select != 1 && select != 2) {
         std::cout << "Invalid input\n";
         goto select;
     }

     else if (select == 1) {
     position:
         std::cout << "Please select a memory position (1-10)\n";
         std::cin >> position;

         if (std::cin.fail()) {
             
             std::cin.clear();
             std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
         } 

         if (position > 0 && position < 11) {
             position = (position - 1);
             get(position);

         }
         else {
             std::cout << "Invalid imput!\n";

             goto position;
         }

     }

     else {

         for (int i = 0; i < 10; i++) {
             std::cout << "Position " << (i + 1) << std::endl;
             print(list.at(i));
         }
     }





 }

 int main()
 {
     int loop = 0;

     std::cout << "Welcome to the address book\n";

 while (loop == 0) {
     run();
     std::cout << "Do you want to exit? (Type 0 for no or 1 for yes)\n";
     std::cin >> loop;

     if (std::cin.fail()) {
         std::cout << "\nInvalid imput\n";
         std::cin.clear();
         std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     }

     if (loop != 0 && loop != 1) {
         std::cout << "Invalid input!";
         loop = 0;
     }
     else if (loop == 1) {
         exit(0);
     }
     else {}
 }

     return 0;
}




