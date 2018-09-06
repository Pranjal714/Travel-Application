#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<string.h>

using namespace std;
class Cities
{
public:
    int p;
    string name;
    string memb;
    char addr[100];
    int pinc,mobn;
    int city;
	int c;
    string naam;
    int age;
    char entr;
    int browse;

public:
    void first(){
    cout<<"               TTTTTTT RRRRRR    AA   VV       VV EEEEEE LLL   "<<endl;
    cout<<"               TTTTTTT RR  RR  AA  AA  VV     VV  EE     LLL  "<<endl;
    cout<<"                 TTT   RRRRRR  AAAAAA   VV   VV   EEEEEE LLL  "<<endl;
    cout<<"                 TTT   RR R    AA  AA    VV VV    EE     LLL  "<<endl;
    cout<<"                 TTT   RR  RR  AA  AA      VV     EEEEEE LLLLLLLL  "<<endl;

   cout<<"================================================================================"<<endl;
   cout<<"================================================================================"<<endl;


    cout<<endl<<"                     Welcome to Travel'O'City!"<<endl<<"                    --------------------------"<<endl;

    cout<<endl<<" ++ Planning for a trip with family or friends ? ,  We are here to help you. ++"<<endl;
      cout<<endl<<" We at Travel'O'City provides a wide range of travel destinations in India \n Including hotels of different range according to your comfort.\n You can also compare the travel prices according to the need of your comfort."<<endl;
  cout<<endl<<"To Proceed press (1 for Yes / 2 for No):";
   cin>>c;
if(c==1)
   {
    details();

   }
   else if(c==2)
   {
       cout<<endl<<"                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl<<endl;
   			cout<<"                         Thank you for visiting !"<<endl<<endl;
        cout<<"                 @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@"<<endl;



        cout<<endl<<endl<<"   \t\t\t\t\t\t   -----------------------"<<endl<<"\t\t\t\t\t\t   -----------------------"<<endl<<" \t\t\t\t\t\t © Programmed by : Pranjal";
   	exit(0);

   }

}
        void details(){
             cout<<endl<<"Enter Username :"; cin>>naam;
             cout<<endl<<"Enter age:"; cin>>age;
             cout<<endl<<"Press Enter to continue"<<endl<<endl;
              getch();

                 }

  void second(){
   cout<<"Select the City you want to travel:"<<endl<<"1.Hyderabad"<<endl<<"2.Itanagar"<<endl<<"3.Dispur"<<endl;
   cout<<"4.Goa"<<endl<<"5.Shimla"<<endl<<"6.Bangalore"<<endl<<"7.Thiruvananthapuram"<<endl;
    cout<<"8.Mumbai"<<endl<<"9.Agartala"<<endl<<"10.Kohima"<<endl<<"11.Port Blair"<<endl;

    cin>>city;

    }     //List of cities that user wants to choose
};
class tour_Places : public Cities{
    public:

    void swtch()
    {

        switch(city)
        {

        a:case 1:

                cout<<"==== Welcome to Hydrabad ===="<<endl<<endl;
              cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"        \n a.Tourist Attractions\n b.Best Hotels \n c.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
                {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Charminar \n 2.Golconda \n 3.Ramoji Film City \n 4.Salar Jung Museum \n 5.Birla Science Museum"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto a;

                  break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Park Hyatt Hydrabad    ( INR 8,585 per day)\n b.Taj Falaknuma Palace  (INR 28,800 per day)\n c.Radisson Blu Plaza     (INR 5613 per day)\n d.Hydrabad Marriott      (INR 6139 per day)"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                  if(p==1)
                     goto a;
                  break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
                cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
                cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                  if(p==1)
                     goto a;
                     else if(p==2)
                     {

                  ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Hydrabad as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();

                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                break;
            }


            break;
       b: case 2:

                cout<<"==== Welcome to Itanagar ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"        \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Ita Fort \n 2.Indira Gandhi Park \n 3.State Museum \n 4.Science Centre "<<endl;
                cout<<endl<<"Want to go backto last page? press 1 "; cin>>p;
                 if(p==1)
                goto b;
                break;


               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Hotel Pybss    ( INR 3690 per day)\n b.Hotel Blue Pine     (INR 2610 per day)\n c.Hotel Arun Subansiri     (INR 2340 per day)\n "<<endl;
               cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto b;
                break;

               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
                cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
                cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto b;
                  else if(p==2)
                     {

                    ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Itanagar as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();


                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                break;
            }

            break;
      c:case 3:

                cout<<"==== Welcome to Dispur ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Ganesh Mandir\n 2.Silpota\n 3.Frozen Planet \n 4.Hanuman Mandir Ganeshguri\n 5.Ecoloical Museum"<<endl;
                   cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto c;
                  break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Hotel Riviera    ( INR 2,324 per day)\n b.The Residency Tourist Resort    (INR 28,80 per day)\n c.Novotal Guwahati GS Road    (INR 5675 per day)\n d.Hotel The Kalyaniz    (INR 2,806 per day)"<<endl;
                    cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto c;
                   break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
              cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
             cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto c;
                  else if(p==2)
                     {

                    ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Dispur as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();


                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                  break;
            }

            break;
    d: case 4:

                cout<<"==== Welcome to GOA ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Fort Aguada \n 2.Archaeological Museum Of Goa \n 3.Church of St Cajetan \n 4.Basilica of Bom Jesus \n 5.Cabo de Rama"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto d;
                   break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Jasminn by Mango Hotels    ( INR 2,273 per day)\n b.Cuba Premium Bungalows    (INR 1153 per day)\n c.Treebo XEC Residency   (INR 1570 per day)\n d.Nanutel    (INR 2764 per day)"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto d;
                   break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
               cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
              cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto d;
                  else if(p==2)
                     {

                   ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected GOA as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();

                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                break;
            }

            break;
  e:  case 5:

               cout<<"==== Welcome to Shimla ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                 cout<<" 1.Kalka–Shimla railway \n 2.Himachal State Museum\n 3.Shimla Heritage Museum\n 4.Christ Church\n 5.Sankat Mochan Temple"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto e;
                  break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.The Oberoi Cecil Shimla      ( INR 17,897 per day)\n b.Clarkes Hotel   (INR 6732 per day)\n c.Snow Valley Resorts    (INR 4754 per day)\n d.Wildflower Hall    (INR 28,764 per day)"<<endl;
                cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto e;
                break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
                 cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
              cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto e;
                  else if(p==2)
                     {
   ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Shimla as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();


                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                break;
            }

            break;
   f: case 6:

                 cout<<"==== Welcome to Bangalore ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Lal Bagh\n 2.Cubbon Park \n 3.Vidhana Soudha\n 4.Bangalore Palace \n 5.ISKCON Temple Bangalore"<<endl;
                   cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto f;
                    break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Empire Suites    ( INR 2,064 per day)\n b.ITC Windsor, a Luxury Collection Hotel, Bengaluru    (INR 11,827 per day)\n c.The Oberoi Bengaluru    (INR 14,525per day)\n d.The Leela Palace Bengaluru    (INR 15,980 per day)"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto f;
                  break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
              cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
              cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto f;
                  else if(p==2)
                     {
   ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Bangalore as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();


                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                 break;
            }

            break;
   g:case 7:

                  cout<<"==== Welcome to Thiruvananthapuram ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Thiruvananthapuram Zoo \n 2.Veli Lake and Tourist Village \n 3.Sreevaraham Temple Pond\n 4.Kovalam Sea View \n 5.Padmanabhaswamy Temple"<<endl;
                cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto g;
                break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Hycinth by Sparsa    ( INR 3,111 per day)\n b.Vivanta By Taj - Trivandrum, Kerala    (INR 7,206 per day)\n c.Hilton Garden Inn Trivandrum    (INR 4428 per day)\n d.Keys Select Hotels    (INR 5521 per day)"<<endl;
            cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto g;
               break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
                cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
                cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto g;
                  else if(p==2)
                     {

                 ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Thiruvananthapuram as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();
                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                break;
            }

            break;
  h: case 8:

                 cout<<"==== Welcome to Mumbai ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Gateway of India \n 2.Elephanta Caves\n 3.Mahalakshmi Temple, Mumbai\n 4.Red Carpet Wax Museum \n 5.Flora Fountain"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto h;
                    break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Oberoi Trident Towers    ( INR 16,300 per day)\n b.Four Seasons Hotel Mumbai    (INR 12,080 per day)\n c.Novotel Mumbai Juhu Beach    (INR 9552 per day)\n d.Taj Santacruz    (INR 12,495 per day)"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto h;
                  break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
                 cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
                cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto h;
                  else if(p==2)
                     {
   ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Mumbai as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();

                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                 break;
            }

            break;
  i: case 9:

                cout<<"==== Welcome to Agartala ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Fourteen Gods' Temple \n 2.Sipahijola Wildlife Sanctuary\n 3.Shibnagar Lake-beauty Of Agartala \n 4.Rudrasagar Boatyard\n 5.Neermahal "<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto i;
                   break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Hotel Sonar Tori    ( INR 2,207 per day)\n b.Hotel Woodland Park    (INR 1,150 per day)\n c.Royal Guest House (Hotel)    (INR 6982 per day)\n d.Hotel Palace Inn    (INR 1755 per day)"<<endl;
             cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto i;
                break;
                case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
               cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
                    cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto i;
                  else if(p==2)
                     {

                    ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Agartala as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();

                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                    break;
            }

            break;
  j: case 10:

                cout<<"==== Welcome to Kohima ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Battle of Kohima \n 2.Naga Heritage Village\n 3.Dzülekema \n 4.Tourist Village Tuophema \n 5.Dzuko Mou"<<endl;
                 cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto j;
                   break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.de Oriental Grand Hotel Kohima    ( INR 5280 per day)\n b.Hotel Vivor    (INR 4,522 per day)\n c.The Orchid    (INR 1000 per day)\n d.Niraamaya Retreats Aradura, Kohima    (INR 4110 per day)"<<endl;
                     cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto j;
                    break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
 cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
                     cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto j;
                  else if(p==2)
                     {

                    ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Kohima as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();
                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                     break;
            }

            break;
  k: case 11:

                 cout<<"==== Welcome to Port Blair ===="<<endl<<endl;
               cout<<"What Do You Want To Browse ?"<<endl;
               cout<<"       \n 1.Tourist Attractions\n 2.Best Hotels \n 3.Tickets prices "<<endl;
               cin>>browse;
                 switch(browse)
            {

               case 1:
                 cout<<"Tourist Attractions :"<<endl<<"--------------------------"<<endl;
                cout<<" 1.Cellular Jail \n 2.Rajiv Gandhi Water Sports Complex\n 3.Samudrika Naval Marine Museum\n 4.Murugan Temple \n 5.Mount Harriet National Park"<<endl;
                  cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto k;
                     break;
               case 2:
                cout<<"Best Hotels :"<<endl<<"------------------"<<endl;
                cout<<" a.Fortune Resort Bay Island    ( INR 8,755 per day)\n b.Sinclairs Bayview Port Blair    (INR 6768 per day)\n c.SeaShell Port Blair    (INR 6940 per day)\n d.TSG Emerald View    (INR 5067 per day)"<<endl;
                   cout<<endl<<"Want to go back to last page? press 1 "; cin>>p;
                 if(p==1)
                goto k;
                     break;
               case 3:
                cout<<"Ticket prices:"<<endl<<"---------------"<<endl;
                 cout<<" Railways : It will cost you in between 600rs. to 4000rs.\n          depending on from which class you are travelling"<<endl;
                cout<<" Roadways : It will cost you around 300rs. to 2000rs.\n           acccording to your comfort level"<<endl;
                cout<<" Airways  : It will cost you in between 6000rs. to 40,000rs.\n           depending on from which class you are travelling"<<endl;
                   cout<<endl<<"Want to go back to last page? press 1 OR Press 2 to Confirm Booking "; cin>>p;
                 if(p==1)
                goto k;
                  else if(p==2)
                     {

                     ofstream f1("file1.cpp");
                   cout<<endl<<"                           =============="<<endl<<"                            For booking:"<<endl;
                   f1<<endl<<"You have selected Port Blair as your Travel Destination"<<endl;
                 cout<<"\n\nEnter The Name Of Customer   :  ";
                 cin>>name;
                 f1<<endl<<"Name Of The Customer :"<<name;
                 cout<<"\nEnter Total Members             : ";
                 cin>>memb;
                 f1<<endl<<"Total Members :"<<memb;
                 cout<<"\nEnter Your Residential Address     : ";
                 cin>>addr;
                 f1<<endl<<"Residintial Address :"<<addr;

                 cout<<"\nEnter your Area Pin Code          :  ";
                 cin>>pinc;
                 f1<<endl<<"Area Pin Code :"<<pinc;
                 cout<<"\nEnter Your Contact No.      :  ";
                 cin>>mobn;
                 f1<<endl<<"Customer's Contact No.:"<<mobn;
                 f1.close();

                     }
                     else{
                            cout<<endl<<endl<<"       ----------Thank You For Visiting!----------"<<endl;
                        exit(0);
                     }
                   break;
            }

            break;


        }
    }
    /*void fileh()
    {

                  ofstream f1("file1.cpp");
                    cout<<"For booking:"<<endl;
                 cout<<"\n\nENTER THE NAME OF CUSTOMER   ==  ";
                 cin>>name;
                 f1<<name;
                 cout<<"\nENTER YOUR FULL ADDRESS      ==  ";
                 gets(addr);
                 f1<<addr;

                 cout<<"\nENTER YOUR PIN CODE          ==  ";
                 cin>>pinc;
                 f1<<pinc;
                 cout<<"\nENTER YOUR MOBILE NO.        ==  ";
                 cin>>mobn;
                 f1<<mobn;
                 f1.close();

    }*/
};

int main()
{
    tour_Places obj;
    obj.first();
   // obj.details();
    obj.second();
    obj.swtch();
//    obj.fileh();
 cout<<endl<<endl<<"   \t\t\t\t\t\t   -----------------------"<<endl<<"\t\t\t\t\t\t   -----------------------"<<endl<<" \t\t\t\t\t\t © Programmed by : Pranjal";
    return 0;
}
