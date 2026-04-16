//W.A.P to check whether character is Upper case, Lower case, Digit, None of the above
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    switch (ch)
    {
        case 'A'...'Z':
          printf("Uppercase\n");
          break;
        
        case 'a'...'z':
          printf("Lowercase\n");
          break;

        case '0'...'9':
          printf("Digit\n");
          break;

        default:
          printf("Special character\n");

    }
    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);

    switch (1)
    {
        case 1:
          if (ch>='A' && ch<='Z')
            printf("Uppercase\n");
          
          else if (ch>='a' && ch<='z')
            printf("Lowercase\n");

          else if (ch>='0' && ch<='9')
            printf("Digit\n");

          else
            printf("Special character\n");   
    }
    return 0;
}
*/

//W.A.P for simple calculator
/*
#include<stdio.h>
int main()
{
    char ch;
    int a,b;
    printf("Enter expression: ");
    scanf("%d%c%d", &a, &ch, &b);

    switch (ch)
    {
        case '+': printf("%d\n", a+b); break;
        case '-': printf("%d\n", a-b); break;
        case '*': printf("%d\n", a*b); break;
        case '/':
          if (b!=0)
            printf("%.1f\n", (float)a/b);
            
          else
            printf("Division by zero is not allowed. Please enter b as non zero value\n");
            scanf("%d", &b);
            printf("%d\n", a/b);
            break;
        
        default:
          printf("Invalid operator\n");

    }
    return 0;
}
*/

//Sample code
/*
#include<stdio.h>
int main()
{
    int option;
    printf("Enter option: ");
    scanf("%d", &option);
    
    switch (option)
    {
        case 0:
        printf("Hello\n");
        break;

        case 1:
        printf("World\n");
        break;

        case 2:
        printf("Hi\n");
        break;
        
        default:
        printf("Invalid\n");
    }
}
*/
/*
#include<stdio.h>
int main()
{
    char option;
    printf("Enter option: ");
    scanf("%c", &option);
    
    switch (option)
    {
        case 'a':
        printf("Hello\n");
        break;

        case 'b':
        printf("World\n");
        break;

        case 'c':
        printf("Hi\n");
        break;
        
        default:
        printf("Invalid\n");
    }
}
*/

//Massage
/*
#include<stdio.h>
int main()
{
    int option;
    printf("1. Head massage\n2. Leg massage\n3. Neck massage\n4. Thigh massage\n5. Exit\n");
    printf("Enter option b/w 1 to 4 or 5 to exit: ");
    scanf("%d", &option);

    switch (option)
    {
        case 1: printf("Head massage: 1000\n"); break;
        case 2: printf("Leg massage: 2000\n"); break;
        case 3: printf("Neck massage: 3000\n"); break;
        case 4: printf("Thigh massage: 4000\n"); break;
        case 5: printf("Tuk tuk massage: 5000\n"); break;
        default: printf("Better luck next time\n");
    }
}
*/

//Forum mall
/*
#include<stdio.h>
int main()
{
    int floor;
    int store_num; //First floor shops number
    int n; //Number of clothes
    int c_price=100; //For every clothes, price is 100 (c_pqrice->cloth price)
    int screen_no; //Theatre
    int ticket; //Movie ticket
    int mt_price=200; //Movie ticket price
    int variety_no; //Third floor food variety number
    int dish_no; //Food dish number
    int fd_price=200; //Food dish price
    int variety1_no; //Fourth floor game variety number
    int no_of_players; // Number of players who want to play the game
    int g_price=300; //Game price

    printf("1. First floor\n2. Second floor\n3. Third floor\n4. Fourth floor\n5. Exit\n");
    printf("Enter floor number: ");
    scanf("%d", &floor);

    switch (floor)
    {
        case 1: 
          printf("First floor\n"); 
          printf("1. Zudio\n2. Max\n3. Trends\n4. H & M\n");
          printf("Enter store number from 1 to 4\n");     
          scanf("%d", &store_num);
          switch (store_num)
          {
            case 1:
              printf("Zudio\n");                         
              printf("Enter how many cloths you want to buy\n");
              scanf("%d", &n);
              printf("Total price: %d\n", c_price*n);
              break; 
            case 2: 
              printf("Max\n");                         
              printf("Enter how many cloths you want to buy\n");
              scanf("%d", &n);
              printf("Total price: %d\n", c_price*n);
              break; 
            case 3: 
              printf("Trends\n");                           
              printf("Enter how many cloths you want to buy\n");
              scanf("%d", &n);
              printf("Total price: %d\n", c_price*n);
              break; 
            case 4: 
              printf("H & M\n");              
              printf("Enter how many cloths you want to buy\n");
              scanf("%d", &n);
              printf("Total price: %d\n", c_price*n); 
              break;
            default:
              printf("There are only 1 to 4 shops, please re-enter store number\n");
              scanf("%d", &store_num);
              break;
          }
        case 2:
          printf("Second floor\n"); 
          printf("PVR Theatre\n");
          printf("There are 4 screens,\n1. KGF1\n2. KGF2\n3. Toxic\n4. Googly\n");
          printf("Enter which screen you want from 1 to 4\n");     
          scanf("%d", &screen_no);
          switch (screen_no)
          {
            case 1:
              printf("KGF1 Movie\n");
              printf("Enter the number of tickets you want to buy\n");
              scanf("%d", &ticket);
              printf("Total price: %d\n", ticket*mt_price);
              break;
            case 2:
              printf("KGF2 Movie\n");
              printf("Enter the number of tickets you want to buy\n");
              scanf("%d", &ticket);
              printf("Total price: %d\n", ticket*mt_price);
              break;
            case 3:
              printf("Toxic Movie\n");
              printf("Enter the number of tickets you want to buy\n");
              scanf("%d", &ticket);
              printf("Total price: %d\n", ticket*mt_price);
              break;
            case 4:
              printf("Googly Movie\n");
              printf("Enter the number of tickets you want to buy\n");
              scanf("%d", &ticket);
              printf("Total price: %d\n", ticket*mt_price);
              break;
            default:
              printf("There are only 1 to 4 screens, please re-enter screen number\n");
              scanf("%d", &screen_no);
              break;
          }
        case 3:
          printf("Third floor\n"); 
          printf("Food Court\n");
          printf("There are 3 varieties,\n1. North\n2. South\n3. Chinese\n");
          printf("Enter which variety you want from 1 to 3\n");     
          scanf("%d", &variety_no);
          switch (variety_no)
          {
            case 1:
              printf("North type\n");
              printf("Enter number of dishes you want to buy: \n");
              scanf("%d", &dish_no);
              printf("Total price: %d\n", dish_no*fd_price);
              break;
            case 2:
              printf("South type\n");
              printf("Enter number of dishes you want to buy: \n");
              scanf("%d", &dish_no);
              printf("Total price: %d\n", dish_no*fd_price);
              break;
            case 3:
              printf("Chinese type\n");
              printf("Enter number of dishes you want to buy: \n");
              scanf("%d", &dish_no);
              printf("Total price: %d\n", dish_no*fd_price);
              break;
            default:
              printf("There are only three varieties of food\n");
          }
        case 4:
          printf("Fourth floor\n"); 
          printf("Game zone\n");
          printf("There are 3 varieties of games,\n1. Bowling\n2. Cricket\n3. Kids section\n");
          printf("Enter which variety of game you want to play from 1 to 3\n");     
          scanf("%d", &variety1_no);
          switch (variety1_no)
          {
            case 1:
              printf("Bowling\n");
              printf("Enter number of players you want to play: \n");
              scanf("%d", &no_of_players);
              printf("Total price: %d\n", no_of_players*g_price);
              break;
            case 2:
              printf("Cricket\n");
              printf("Enter number of players you want to play: \n");
              scanf("%d", &no_of_players);
              printf("Total price: %d\n", no_of_players*g_price);
              break;
            case 3:
              printf("Kids section\n");
              printf("Enter number of players you want to play: \n");
              scanf("%d", &no_of_players);
              printf("Total price: %d\n", no_of_players*g_price);
              break;
            default:
              printf("There are only three varieties of games to play here\n");
              
          }       
    }
}
*/

//Movie booking system
/*
#include<stdio.h>
#include<string.h>
int main()
{
  int language;
  int kannada_movie;
  int telugu_movie;
  int tamil_movie;
  int hindi_movie;
  int no_of_tickets;
  int seat_sel_type;
  int seat_sel_price;
  int total;
  char y_n;
  printf("_____INOX_____\n");
  printf("There are movies of 4 languages:\n1. Kannada\n2. Telugu\n3. Tamil\n4. Hindi\n");
  printf("Enter your choice of movie language: \n");
  scanf("%d", &language);

  switch (language)
  {
    case 1:
      printf("Kannada language\nThere are 3 movies of kannada language\n1. KGF\n2. Kantara\n3. Lucia\n");
      printf("Enter your movie choice of kannada language: ");     
      scanf("%d", &kannada_movie);

      switch(kannada_movie)
      {
        case 1:
          printf("KGF\n");          
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");         
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: KGF\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);         
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;
        
        case 2:
          printf("Kantara\n");         
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Kantara\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;
        
        case 3:
          printf("Lucia\n");  
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Lucia\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);  
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;

        default:
          printf("Error\n");
           
      }
      break;

    case 2:
      printf("Telugu language\nThere are 3 movies of telugu language\n1. Bahubali 1\n2. Bahubali 2\n3. Eega\n");
      printf("Enter your movie choice of telugu language: ");     
      scanf("%d", &telugu_movie);

      switch(telugu_movie)
      {
        case 1:
          printf("Bahubali 1\n");         
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");          
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Bahubali 1\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;
        
        case 2:
          printf("Bahubali 2\n");         
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");         
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Bahubali 2\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;
        
        case 3:
          printf("Eega\n");          
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");         
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Eega\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;

        default:
          printf("Error\n");
      
      }
      break;
    
    case 3:
      printf("Tamil language\nThere are 3 movies of tamil language\n1. Master \n2. Leo \n3. Dude\n");
      printf("Enter your movie choice of tamil language: ");     
      scanf("%d", &tamil_movie);

      switch(tamil_movie)
      {
        case 1:
          printf("Master\n");         
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");          
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Master\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;
        
        case 2:
          printf("Leo\n");         
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");         
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Leo\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;
        
        case 3:
          printf("Dude\n");          
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");         
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Dude\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;

        default:
          printf("Error\n");
      
      }
      break;

    case 4:
      printf("Hindi language\nThere are 3 movies of Hindi language\n1. Dhurandar 1\n2. Animal\n3. 3 Idiots\n");
      printf("Enter your movie choice of hindi language: ");     
      scanf("%d", &hindi_movie);

      switch(hindi_movie)
      {
        case 1:
          printf("Dhurandar 1\n");         
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");          
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Dhurandar 1\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;
        
        case 2:
          printf("Animal\n");         
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");         
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: Animal\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;
        
        case 3:
          printf("3 Idiots\n");          
          printf("Enter the number of tickets you want: ");
          scanf("%d", &no_of_tickets);
          if(no_of_tickets == 0)
          {
            printf("Invalid number of tickets. Exiting..\n");
            break;
          }
          printf("There are 2 types of seat selection:\n1. Regular: Rs. 180\n2. Premium: Rs. 300\n");         
          printf("Enter the type of seat selection you want: ");
          scanf("%d", &seat_sel_type);
          if (seat_sel_type == 1)
          {
            seat_sel_price=180;
            printf("Regular: Rs. 180\n");
          }
          else if (seat_sel_type == 2)
          {
            seat_sel_price=300;
            printf("Premium: Rs. 300\n");
          }
          else
          {
            printf("Invalid seat type\n");
            break;
          }
          total = no_of_tickets*seat_sel_price;
          printf("Booking summary:\nSelected movie: 3 Idiots\nSeat type: %d\nNumber of tickets: %d\nTotal amount: %d\n", seat_sel_type, no_of_tickets, total);          
          printf("Confirm booking (y/n): ");
          scanf(" %c", &y_n);
          if (y_n == 'y' || y_n == 'Y')
          {
            printf("Pay total amount of Rs. %d\n", total);
            printf("Booking Confirmed! Enjoy your movie\n");
          }
          else
          {
            printf("Booking Cancelled\n");
          }
          break;

        default:
          printf("Error\n");
      
      }
    break;
    default:
      printf("Error\n");

  }
}
*/

//Interview shortlisting system
/*
#include<stdio.h>
int main()
{
  int qualification;
  int experience;
  int score;
  int age;
  int certification;
  int internship;
  char gender;

  printf("Qualification: \n1. Graduate\n2. Postgraduate\n3. PhD\n");
  printf("Enter your qualification (1-3): ");
  scanf("%d", &qualification);
  printf("Enter work experience if you have in years: ");
  scanf("%d", &experience);
  printf("Enter your aptitude test score out of 100: ");
  scanf("%d", &score);
  printf("Enter your age in years: ");
  scanf("%d", &age);
  printf("Enter whether you have certification or not (1 or 0): ");
  scanf("%d", &certification);
  printf("Enter whether you have internship work experience or not (1 or 0): ");
  scanf("%d", &internship);
  printf("Enter your gender (M for male and F for female): ");
  scanf(" %c", &gender);

  if (qualification == 3)
  {
    if (experience >= 2 && score >= 60 && age <= 45)
    {
      if (certification == 1)
      {
        printf("Directly Shortlisted\n");
      }
      else if (certification == 0 && internship == 1)
      {
        printf("Shortlisted with condition\n");
      }
      else
      {
        printf("Not shortlisted\n");
      }  
    }
    else
    {
      printf("Not shortlisted\n");
    }

  }  
  else if (qualification == 2)
  {
    if (experience >= 4 && score >= 70)
    {
      if (certification == 1  && age <= 35)
      {
        printf("Priority shortlisted\n");
      }
      else if (certification == 1  && age > 35)
      {
        printf("Normal shortlisted\n");
      }
      else if (certification == 0 && internship == 1)
      {
        printf("Waitlisted\n");
      }
      else
      {
        printf("Not shortlisted\n");
      }
    } 
  }
  else if (qualification == 1)
  {
    if (experience >= 6 && score >= 75)
    {
      if (certification == 1)
      {
        printf("Shortlisted (Extra Skills)\n");
      }
      else if (certification == 0 && internship ==1)
      {
        printf("Waitlisted\n");
      }
      else
      {
        printf("Not shortlisted\n");
      }
    }
    else if (experience >= 3 && score >= 85)
    {
      if (gender = 'M' || 'm')
      {
        printf("Waitlisted\n");
      }
      else
      {
        printf("Waitlisted with preference\n");
      }
    }
    else if (experience < 3)
    {
      if (certification == 1 && score >= 90)
      {
        printf("Special Case Waitlisted\n");
      }
      else
      {
        printf("Not waitlisted\n");
      }
    }
    else
    {
      printf("Not shortlisted\n");
    }
  }
  else
  {
    printf("Candidate is not eligible\n");
  }
}
*/

//WAP to find which day of the year

#include<stdio.h>
int main()
{
  int n, first_day, day;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  
  if (n>=1 && n<=365)
  {
    printf("Choose first day:\n1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
    printf("Enter the option to set first day: ");
    scanf("%d", &first_day);
    if (first_day>=1 && first_day<=7)
    {
        day=((n+first_day)-1)%7;
        switch (day)
        {
            case 1:
            printf("The day is Sunday\n");
            break;
            case 2:
            printf("The day is Monday\n");
            break;
            case 3:
            printf("The day is Tuesday\n");
            break;
            case 4:
            printf("The day is Wednesday\n");
            break;
            case 5:
            printf("The day is Thursday\n");
            break;
            case 6:
            printf("The day is Friday\n");
            break;
            case 0:
            printf("The day is Saturday\n");
            break;
            default:
            printf("Invalid input, first day should be > 0 and <= 7\n");
        }
    }
    else
    {
        printf("Invalid input, first day should be > 0 and <= 7\n");
    }
  }
  else
  {
    printf(" Invalid Input, n value should be >=1 and <= 365\n");
  }
}






