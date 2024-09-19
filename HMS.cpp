#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <string.h>
#include <iomanip>
#include <windows.h>
#include <limits>
#pragma comment(lib, "winmm.lib")
using namespace std;
class HMS
{
public:
    int mm_int, fm_int, ff_veg_int, cfs_int, tbl_int, flag, R_No, Room_CT;
    char time[15], date[15], chk, Tbl_time[15];
    void Wel_Banner1();
    void Wel_Banner2();
    void Main_Menu();
    void Cafe_serv();
    void F_menu(int flag);
    void F_menu_NVeg();
    void FH_sum(string itn, int pri, int qty, int flag);
    void Book_serv_FH(string itn, int pri);
    void R_order();
    void F_menu_Pharmacy();
    void Room_Total_Bill();
    void F_menu_Veg();
    void F_menu_cult();
    void music();
    void Player();
    void Job_vac();
    void sel_songs();
    void printMainMenu();
    void clearInputBuffer();
    void Bev_Menu();
    void Bev_Menu_Soft();
    void Bev_Menu_Hard();
    void Room_service();
    void Booking();
    void Travellers();
    void Business();
    void Onighty();
    void Any_OI();
    void Caf_Total_Bill();
    void Date_Time();
    void fun_speak(int x);
    void Tasker()
    {
        Main_Menu();
        // fun_speak(2);
    }
};

int main()
{
    HMS obj;
    // obj.Wel_Banner1();
    obj.Tasker();
    return 0;
}
void HMS::fun_speak(int x)
{
    switch (x)
    {
    case 1:
        // Welcome
        PlaySoundW(L"Voices\\Wel.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 2:
        // Select from Below
        PlaySoundW(L"Voices\\sel_B.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 3:
        // Travellers
        PlaySoundW(L"Voices\\THS.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 4:
        // Order placed message
        PlaySoundW(L"Voices\\ops.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 5:
        // Business
        PlaySoundW(L"Voices\\BM.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 6:
        // Tonight
        PlaySoundW(L"Voices\\BP.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 7:
        // Room booked by someone
        PlaySoundW(L"Voices\\RNN.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 8:
        // Thanks
        PlaySoundW(L"Voices\\TY.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    default:
        break;
    }
}
void HMS::Date_Time()
{
    strcpy(date, __DATE__);
    strcpy(time, __TIME__);
}
void HMS::Main_Menu()
{
    system("color F");

    cout << "m     m mmmmmm m        mmm   mmmm  m    m mmmmmm       mmmmmmm  mmmm        \n";
    Sleep(200);
    cout << "#  #  # #      #      m\"   \" m\"  \"m ##  ## #               #    m\"  \"m       \n";
    Sleep(500);
    cout << "\" #\"# # #mmmmm #      #      #    # # ## # #mmmmm          #    #    #       \n";
    Sleep(100);
    cout << " ## ##\" #      #      #      #    # # \"\" # #               #    #    #       \n";
    Sleep(100);
    cout << " #   #  #mmmmm #mmmmm  \"mmm\"  #mm#  #    # #mmmmm          #     #mm#        \n";
    Sleep(500);
    cout << "                                                                              \n";
    Sleep(100);
    cout << "                                                                              \n";
    Sleep(100);
    cout << " m    m  mmmm mmmmmmm mmmmmm m            m     m  mmmm   mmmm m     m  mmmm \n";
    Sleep(500);
    cout << " #    # m\"  \"m   #    #      #             \"m m\"  m\"  \"m m\"  \"m \"m m\"  m\"  \"m\n";
    Sleep(100);
    cout << " #mmmm# #    #   #    #mmmmm #              \"#\"   #    # #    #  \"#\"   #    #\n";
    Sleep(100);
    cout << " #    # #    #   #    #      #               #    #    # #    #   #    #    #\n";
    Sleep(600);
    cout << " #    #  #mm#    #    #mmmmm #mmmmm          #     #mm#   #mm#    #     #mm# \n";
    Sleep(100);
    cout << "                                                                              \n";
    Sleep(100);
    fun_speak(1);

    Sleep(500);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(600);
    cout << "|------------------------Welcome To Hotel YOOYO-----------------------|" << endl;
    Sleep(550);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(500);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(450);
    fun_speak(2);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(350);
    cout << "|                                                                     |" << endl;
    Sleep(300);
    cout << "|  1.Room Service                                                     |" << endl;
    Sleep(200);
    cout << "|  2.Cafe Service                                                     |" << endl;
    Sleep(250);
    cout << "|  99.Job Vacancy For Hotel                                           |" << endl;
    Sleep(200);
    cout << "|                                                                     |" << endl;
    Sleep(150);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|>>";

    cin >> mm_int;

    switch (mm_int)
    {
    case 1:
        Room_service();
        break;

    case 2:
        Cafe_serv();
        break;

    case 99:
        Job_vac();
        break;
    }
}
void HMS::Job_vac()
{
    system("cls");
    system("color fc");
    cout << " **Job Vacancies at Hotel YOOYO** \n\n";

    cout << " **Waiter Position:**\n";
    cout << "   - Are you a people person with a flair for customer service?\n";
    cout << "   - Do you have a passion for creating memorable dining experiences?\n";
    cout << "   - Join our team as a Waiter and be a key player in delivering unparalleled hospitality.\n\n";

    cout << " **Computer Technician Position:**\n";
    cout << "   - Are you tech-savvy and love solving computer-related challenges?\n";
    cout << "   - Do you have a knack for troubleshooting and ensuring smooth operations?\n";
    cout << "   - Become our Computer Technician and be at the forefront of maintaining our tech infrastructure.\n\n";

    cout << "**How to Apply:**\n";
    cout << "   - If you're ready to embark on an exciting journey with Hotel YOOYO, send your resume to huntdown404@gmail.com.\n";
    cout << "   - Mention the position you're applying for in the subject line.\n\n";

    cout << "Join us in creating moments that matter!\n\n";
    cout << "Cheers,Hotel YOOYO\n";

    cout << "Press Enter To Get Back To Menu: ";
    cin.ignore();
    char any_key = cin.get();
    if (any_key == '\n')
    {
        system("cls");
        Main_Menu();
    }
    else
    {
        system("exit");
    }
    system("color 0f");
}
void HMS::Cafe_serv()
{
    system("cls");
    system("color F");
    cout << "Enter Table Number: ";
    cin >> tbl_int;
    system("cls");
    system("color F");
    cout << "   mmm    mm   mmmmmm mmmmmm         mmmm  mmmmmm mmmmm  m    m mmmmm    mmm  mmmmmm" << endl;
    Sleep(500);
    cout << " #\"   \"   ##   #      #             #\"   \" #      #   \"# \"m  m\"   #    m\"  \"  #" << endl;
    Sleep(300);
    cout << "#        #  #  #mmmmm #mmmmm        \"#mmm  #mmmmm #mmmm\"  #  #    #    #      #mmmmm" << endl;
    Sleep(200);
    cout << "#        #mm#  #      #                 \"# #      #   \"m  \"mm\"    #    #      # " << endl;
    Sleep(100);
    cout << " \"mmm\"   #   # #      #mmmmm        \"mmm#\" #mmmmm #    \"   ##   mm#mm   \"mmm\" #mmmmm \n"
         << endl;
    Sleep(50);

    Date_Time();
    strcpy(Tbl_time, time);
    Sleep(200);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(600);
    cout << "|----------------------------Table No." << tbl_int << "-------------------------------|" << endl;
    Sleep(550);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(500);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(450);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(350);
    cout << "|                                                                     |" << endl;
    Sleep(300);
    cout << "|  1.Order                                                            |" << endl;
    Sleep(200);
    cout << "|  2.Total Bill                                                       |" << endl;
    Sleep(250);
    cout << "|  3.Music                                                            |" << endl;
    Sleep(200);
    cout << "|                                                                     |" << endl;
    Sleep(150);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|>>";
    cin >> cfs_int;

    switch (cfs_int)
    {
    case 1:
        flag = 2;
        F_menu(flag);
        break;
    case 2:
        Caf_Total_Bill();
        break;
    case 3:
        music();
        break;
    case 4:
        break;
    }
}
void HMS::Caf_Total_Bill()
{
    system("cls");
    ifstream caf_bill("Table No " + to_string(tbl_int) + ".txt");

    if (!caf_bill.is_open())
    {
        cout << "You Haven't Ordered Anything Till\n";
    }
    else
    {
        system("color F");
        cout << "mmmmmmm  mmmm mmmmmmm   mm   m             mmmmm  mmmmm  m      m     \n";
        Sleep(500);
        cout << "   #    m\"  \"m   #      ##   #             #    #   #    #      #     \n";
        Sleep(400);
        cout << "   #    #    #   #     #  #  #             #mmmm\"   #    #      #     \n";
        Sleep(350);
        cout << "   #    #    #   #     #mm#  #             #    #   #    #      #     \n";
        Sleep(250);
        cout << "   #     #mm#    #    #    # #mmmmm        #mmmm\" mm#mm  #mmmmm #mmmmm\n";
        Sleep(100);
        cout << "\n\n\n\t\t\t\t\tTable No: " << tbl_int << "\n\n";
        cout << "|---------------------------------------------------------------------------------------|" << endl;
        Sleep(100);
        cout << "| Item Name                     | Quantity         | Rate            | Price            |" << endl;
        Sleep(50);
        cout << "|---------------------------------------------------------------------------------------|" << endl;
        Sleep(100);

        string Item_Name, quantity, rate, price;

        int line = 1;
        int total = 0;
        while (caf_bill >> Item_Name >> quantity >> rate >> price)
        {
            if (line > 2)
            {
                int it_price = stoi(price);
                total += it_price;
                cout << "| " << setw(30) << left << Item_Name << " | " << setw(15) << left << quantity << " | " << setw(15) << left << rate << " | " << setw(15) << left << price << "  |" << endl;
                Sleep(85);
                line++;
            }
            else
            {
                line++;
            }
        }
        cout << "|---------------------------------------------------------------------------------------|" << endl;
        Sleep(50);
        cout << "|                                                          -----------------------------|" << endl;
        Sleep(50);
        cout << "|--------------------------------------------------------->Total Price: Rs  ";
        Sleep(2000);
        cout << setw(10) << left << total << "  |" << endl;
        Sleep(70);
        cout << "|---------------------------------------------------------------------------------------|" << endl;
        Sleep(50);

        caf_bill.close();
    }
    cin.ignore();
    cout << "Press Enter To Get Back To Main Menu: ";
    char any_key = cin.get();
    if (any_key == '\n')
    {
        Main_Menu();
    }
    else
    {
    }
}
void HMS::clearInputBuffer()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

void HMS::printMainMenu()
{

    system("cls");
    system("color f");
    cout << "|---------------------------------------------------------------------|" << endl;
    cout << "|-----------------------------Music Controller------------------------|" << endl;
    cout << "|---------------------------------------------------------------------|" << endl;
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    cout << "|---------------------------------------------------------------------|" << endl;
    cout << "|                                                                     |" << endl;
    cout << "|  N- Choose New Music                                                |" << endl;
    cout << "|  S- Stop                                                            |" << endl;
    cout << "|  P- Pause                                                           |" << endl;
    cout << "|  M- Main Menu                                                       |" << endl;
    cout << "|  E- Exit                                                            |" << endl;

    cout << "|---------------------------------------------------------------------|" << endl;
    cout << "|>>";
}

void HMS::sel_songs()
{

    system("cls");
    system("color f");
    cout << "|---------------------------------------------------------------------|" << endl;
    cout << "|-----------------------------Song List-------------------------------|" << endl;
    cout << "|---------------------------------------------------------------------|" << endl;
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    cout << "|---------------------------------------------------------------------|" << endl;
    cout << "|                                                                     |" << endl;
    cout << "|  1.Aur Official                                                     |" << endl;
    cout << "|  2.Khawo Piwo Mitro (Punjabi)                                       |" << endl;
    cout << "|  3.Downers At Dusk                                                  |" << endl;
    cout << "|  4.Bolo Ta Ra Ra (Punjabi)                                          |" << endl;
    cout << "|  5.Desikalakar  (YoYo!!)                                            |" << endl;
    cout << "|  6.Blue Eyes   (YoYo!!)                                             |" << endl;
    cout << "|  7.Timi Nacha Nw💃 (WB)                                             | " << endl;
    cout << "|---------------------------------------------------------------------|" << endl;
    cout << "|>>";

    int s_choice;
    cin >> s_choice;
    switch (s_choice)
    {
    case 1:
        PlaySoundW(L"WAV\\Aur.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 2:
        PlaySoundW(L"WAV\\kpa.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 3:
        PlaySoundW(L"WAV\\DAD.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 4:
        PlaySoundW(L"WAV\\btt.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 5:
        PlaySoundW(L"WAV\\dk.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 6:
        PlaySoundW(L"WAV\\Be.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    case 7:
        PlaySoundW(L"WAV\\tnw.wav", NULL, SND_FILENAME | SND_ASYNC);
        break;
    default:
        cout << "Invalid choice. Try again." << endl;
    }
}
void HMS::Player()
{
    sel_songs();
    bool playing = true;
    bool paused = false;
    char choice;
    printMainMenu();
    while (playing)
    {
        cin >> choice;

        clearInputBuffer();

        switch (choice)
        {
        case 's':
            if (!paused)
            {
                PlaySound(NULL, NULL, SND_ASYNC);
                paused = true;
                cout << "Paused." << endl;
            }
            else
            {
                cout << "Already paused." << endl;
            }
            break;
        case 'p':

            if (paused)
            {
                PlaySound(NULL, NULL, SND_ASYNC);
                paused = false;
                cout << "Resumed." << endl;
            }
            else
            {
                PlaySound(NULL, NULL, SND_ASYNC);
                paused = true;
                cout << "Paused." << endl;
            }
            break;
        case 'e':
            PlaySound(NULL, NULL, 0);
            cout << "Exiting." << endl;
            playing = false;
            Cafe_serv();
            break;
        case 'm':
            system("cls");
            Cafe_serv();
            break;
        case 'n':
            system("cls");
            Player();
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
        }
    }
}
void HMS::music()
{
    Player();
}
void HMS::F_menu(int flag)
{
    system("cls");
    system("color F");
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|------------------------------Food Menu------------------------------|" << endl;
    Sleep(50);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(50);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|                                                                     |" << endl;
    Sleep(50);
    cout << "|  1.Veg                                                              |" << endl;
    Sleep(100);
    cout << "|  2.Non-Veg                                                          |" << endl;
    Sleep(50);
    cout << "|  3.Cultural (Mix)                                                   |" << endl;
    Sleep(100);
    cout << "|  4.Beverage                                                         |" << endl;
    Sleep(50);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(50);
    cout << "|>>";
    cin >> fm_int;

    switch (fm_int)
    {
    case 1:
        F_menu_Veg();
        break;
    case 2:
        F_menu_NVeg();
        break;
    case 3:
        F_menu_cult();
        break;
    case 4:
        Bev_Menu();
        break;
    }
}

void HMS::F_menu_Veg()
{
    system("cls");
    system("color F");
    string veg_it[] = {
        "French_Fries",
        "Cheese_Balls",
        "Clear_Soup",
        "Mushroom_Soup",
        "Mo_Mo",
        "Chowmein",
        "Curry",
        "Fried Rice",
        "Pokada",
        "Aloo_Paratha_With_Curd",
        "Poori_Bhaji",
        "Paneer_65"};
    int veg_pri[] = {220, 200, 100, 120, 200, 100, 220, 150, 50, 250, 150, 180};
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|------------------------------Food Menu------------------------------|" << endl;
    Sleep(50);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|------------------------------Veg Items------------------------------|" << endl;
    Sleep(50);
    cout << "|  Items                                                       Price  |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(50);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|   1.French Fries                                              220|- |" << endl;
    Sleep(50);
    cout << "|   2.Cheese Balls                                              200|- |" << endl;
    Sleep(100);
    cout << "|   3.Clear Soup                                                100|- |" << endl;
    Sleep(50);
    cout << "|   4.Mushroom Soup                                             120|- |" << endl;
    Sleep(100);
    cout << "|   5.Mo:Mo                                                     200|- |" << endl;
    Sleep(50);
    cout << "|   6.Chowmein                                                  100|- |" << endl;
    Sleep(100);
    cout << "|   7.Curry                                                     220|- |" << endl;
    Sleep(50);
    cout << "|   8.Fried Rice                                                150|- |" << endl;
    Sleep(100);
    cout << "|   9.Pokada                                                     50|- |" << endl;
    Sleep(50);
    cout << "|   10.Aloo Paratha With Curd                                   250|- |" << endl;
    Sleep(100);
    cout << "|   11.Poori Bhaji                                              150|- |" << endl;
    Sleep(50);
    cout << "|   12.Paneer 65                                                180|- |" << endl;
    Sleep(100);
    cout << "|                                                                     |" << endl;
    Sleep(50);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|>>";
    cin >> ff_veg_int;
    if (ff_veg_int > 12 || ff_veg_int < 1)
    {
        system("color 4");
        cout << "Choose Valid Option !!";
        Sleep(1000);
        F_menu_Veg();
    }
    cout << "Enter Quantity: ";
    int def_qty = 1;
    cin >> def_qty;
    string it_name = veg_it[ff_veg_int - 1];
    int pric = veg_pri[ff_veg_int - 1];

    FH_sum(it_name, pric, def_qty, flag);
}

void HMS::FH_sum(string itn, int pri, int qty, int flag)
{
    int total_sum = (pri * qty);
    // system("mkdir Bill");
    if (flag == 1)
    {

        // For Room Order Service
        string filename = "Room No " + to_string(R_No) + ".txt";
        ifstream chk(filename);
        if (!chk.is_open())
        {
            system("cls");
            system("color 4");
            char yn;
            cout << "Please Book Room First" << endl;
            Sleep(500);
            cout << "Do You Wants to Book Room (y/n): ";
            cin >> yn;
            if (yn == 'y' || yn == 'Y')
            {

                Booking();
            }
            else
            {
                Room_service();
            }
        }
        else
        {
            fstream file(filename, ios::app);
            if (!file.is_open())
            {
                system("cls");
                system("color 4");
                cout << "Something Went Wrong !!\n"
                        "Please Contact With Staffs\n"
                        "\tOR\n"
                        "Contact: 9769841113\n";
            }
            else
            {
                file << " " << itn << "\t\t" << qty << "\t" << pri << "\t" << total_sum << endl;
                file.close();
                system("cls");
                system("color 4");
                cout << "Order Placed Successfully!!\n";
            }
            char ack;
            cout << "Do you Wants to Order More Items(y/n): ";
            fun_speak(4);
            cin >> ack;
            if (ack == 'Y' || ack == 'y')
            {
                F_menu(flag);
            }
            else
            {
                Room_service();
            }
        }
    }
    else if (flag == 2)
    {
        // For Cafe Service

        string filename = "Table No " + to_string(tbl_int) + ".txt";
        ifstream chk(filename);
        if (!chk.is_open())
        {
            ofstream file0(filename);
            if (!file0.is_open())
            {
                cout << "Something Went Wrong !!\n"
                        "Please Contact With Staffs\n"
                        "\tOR\n"
                        "Contact: 9769841113\n";
            }
            else
            {
                file0 << "\t\t\t\t\tTable No: " << tbl_int << "\n\n"
                      << " Item Name           "
                      << "\t"
                      << "Quantity"
                      << "\t"
                      << "Rate"
                      << "\t"
                      << "Price" << endl;
                file0.close();
            }
        }
        fstream file(filename, ios::app);
        if (!file.is_open())
        {
            system("color 4");
            cout << "Something Went Wrong !!\n"
                    "Please Contact With Staffs\n"
                    "\tOR\n"
                    "Contact: 9769841113\n";
        }
        else
        {
            file << " " << itn << "\t" << qty << "\t" << pri << "\t" << total_sum << endl;
            file.close();
        }
        system("cls");
        system("color 4");
        cout << "Order Placed Successfully!!\n";
        char ack;
        cout << "Do you Wants to Order More Items(y/n): ";
        fun_speak(4);
        cin >> ack;
        if (ack == 'Y' || ack == 'y')
        {
            F_menu(flag);
        }
        else
        {
            Cafe_serv();
        }
    }
}

void HMS::F_menu_NVeg()
{
    system("cls");
    system("color F");
    string non_veg_it[] = {
        "Chicken_Tandoori",
        "Cheese_Balls",
        "Clear_Soup",
        "Mushroom_Soup",
        "Fish_Curry",
        "Chicken_Chowmein",
        "Mutton_Curry",
        "Chicken_Fried_Rice",
        "Pokada",
        "Chicken_65",
        "Mutton_Mo:Mo",
        "Chicken_Mo:Mo"};
    system("color F");
    int non_veg_pri[] = {220, 150, 100, 120, 250, 150, 280, 150, 80, 165, 160, 130};
    int ff_non_veg_int;
    cout << "|----------------------------Non-Veg Items----------------------------|" << endl;
    Sleep(100);
    cout << "|  Items                                                       Price  |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|  1.Chicken Tandoori                                           220|- |" << endl;
    Sleep(100);
    cout << "|  2.Cheese Balls                                               150|- |" << endl;
    Sleep(100);
    cout << "|  3.Clear Soup                                                 100|- |" << endl;
    Sleep(100);
    cout << "|  4.Mushroom Soup                                              120|- |" << endl;
    Sleep(100);
    cout << "|  5.Fish Curry                                                 250|- |" << endl;
    Sleep(100);
    cout << "|  6.Chicken Chowmein                                           150|- |" << endl;
    Sleep(100);
    cout << "|  7.Motton Curry                                               280|- |" << endl;
    Sleep(100);
    cout << "|  8.Chicken Fried Rice                                         150|- |" << endl;
    Sleep(100);
    cout << "|  9.Pokada                                                      80|- |" << endl;
    Sleep(100);
    cout << "|  10.Chicken 65                                                165|- |" << endl;
    Sleep(100);
    cout << "|  11.Mutton Mo:Mo                                              160|- |" << endl;
    Sleep(100);
    cout << "|  12.Chicken Mo:Mo                                             130|- |" << endl;
    Sleep(100);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|>> ";
    cin >> ff_non_veg_int;
    if (ff_non_veg_int > 12 || ff_non_veg_int < 1)
    {
        system("color 4");
        cout << "Choose Valid Option !!";
        F_menu_NVeg();
    }
    cout << "Enter Quantity: ";
    int def_qty = 1;
    cin >> def_qty;
    string it_name = non_veg_it[ff_non_veg_int - 1];
    int pric = non_veg_pri[ff_non_veg_int - 1];

    FH_sum(it_name, pric, def_qty, flag);
}

void HMS::F_menu_cult()
{
    system("cls");
    system("color F");
    string cult_it[] = {
        "Dhikri",
        "Ghogi",
        "Gangta",
        "Sidhara",
        "Khurma",
        "Jaar(250 ML)",
        "Pangra_Fry",
        "Pangra_Chilly",
        "Chiken_Chatramaari",
        "Choila",
        "Sukuti",
        "Bhuttan",
        "Khima_Chiura"};

    int cult_pri[] = {150, 120, 180, 150, 110, 70, 150, 120, 180, 180, 150, 200, 120};
    int cult_int;
    cout << "+-----------------------(^_^)----------------(^_^)--------------------+" << endl;
    Sleep(100);
    cout << "| Cultural Items                                                      |" << endl;
    Sleep(40);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|                      Tharu Special Items                            |" << endl;
    Sleep(40);
    cout << "|  Items                                                       Price  |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(40);
    cout << "|                                                                     |" << endl;
    Sleep(40);
    cout << "|   1.Dhikri                                                    150|- |" << endl;
    Sleep(100);
    cout << "|   2.Ghogi                                                     120|- |" << endl;
    Sleep(40);
    cout << "|   3.Gangta                                                    180|- |" << endl;
    Sleep(100);
    cout << "|   4.Sidhara                                                   150|- |" << endl;
    Sleep(40);
    cout << "|   5.Khurma                                                    110|- |" << endl;
    Sleep(100);
    cout << "|   6.Jaar(250 ML)                                               70|- |" << endl;
    Sleep(40);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(40);
    cout << "|                      Newari Special Items                           |" << endl;
    Sleep(100);
    cout << "|                                                                     |" << endl;
    Sleep(40);
    cout << "|   7.Pangra Fry                                                150|- |" << endl;
    Sleep(100);
    cout << "|   8.Pangra Chilly                                             120|- |" << endl;
    Sleep(40);
    cout << "|   9.Chiken Chatramaari                                        180|- |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(40);
    cout << "|  Buff Items                                                         |" << endl;
    Sleep(100);
    cout << "|   10.Choila                                                   180|- |" << endl;
    Sleep(40);
    cout << "|   11.Sukuti                                                   150|- |" << endl;
    Sleep(100);
    cout << "|   12.Bhuttan                                                  200|- |" << endl;
    Sleep(40);
    cout << "|   13.Khima Chiura                                             120|- |" << endl;
    Sleep(100);
    cout << "|                                                                     |" << endl;
    Sleep(40);
    cout << "+---------------------------------------------------------------------+" << endl;
    Sleep(100);
    cout << "|>> ";
    cin >> cult_int;
    if (cult_int > 13 || cult_int < 1)
    {
        system("color 4");
        cout << "Choose Valid Option !!";
        F_menu_NVeg();
    }
    cout << "Enter Quantity: ";
    int def_qty = 1;
    cin >> def_qty;
    string it_name = cult_it[cult_int - 1];
    int pric = cult_pri[cult_int - 1];

    FH_sum(it_name, pric, def_qty, flag);
}

void HMS::Bev_Menu()
{
    system("cls");
    system("color F");
    int Bev_menu_int;
    cout << "|--------------------------------Beverage-----------------------------|" << endl;
    Sleep(100);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(40);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|                                                                     |" << endl;
    Sleep(40);
    cout << "|  1.Soft Drinks                                                      |" << endl;
    Sleep(100);
    cout << "|  2.Hard Drinks                                                      |" << endl;
    Sleep(40);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(40);
    cout << "|>>";
    cin >> Bev_menu_int;
    switch (Bev_menu_int)
    {
    case 1:
        Bev_Menu_Soft();
        break;
    case 2:
        Bev_Menu_Hard();
        break;
    case 3:
        Bev_Menu();
        break;

    default:
        break;
    }
}

void HMS::Bev_Menu_Soft()
{
    system("cls");
    string Bev_soft_it[] = {
        "Water_Bottle_(Hot)",
        "Water_Bottle_(Cold)",
        "Cold_Coffee",
        "Lassi",
        "Green_Tea",
        "Fresh_Lime Water",
        "Sugarcan_Juice",
        "Orange_Juice",
        "Apple_Juice",
        "Mix_Fruit_Juice",
        "R-M_Tea",
        "Apple_Cider"
        "Cocacola"
        "Marinda"
        "Mountain_Dew"
        "Sprite"};
    system("color F");
    int Bev_soft_pri[] = {20, 25, 150, 120, 120, 100, 80, 120, 110, 150, 200, 110, 70, 60, 50, 55};
    int Bev_soft_int;
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(120);
    cout << "|--------------------------------Beverage-----------------------------|" << endl;
    Sleep(50);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(120);
    cout << "|--------------------------------Soft Drinks--------------------------|" << endl;
    Sleep(50);
    cout << "|  Items                                                       Price  |" << endl;
    Sleep(120);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(50);
    cout << "|                                                                     |" << endl;
    Sleep(120);
    cout << "|  1.Water Bottle (Hot)                                          20|- |" << endl;
    Sleep(50);
    cout << "|  2.Water Bottle (Cold)                                         25|- |" << endl;
    Sleep(120);
    cout << "|  3.Cold Coffee                                                150|- |" << endl;
    Sleep(50);
    cout << "|  4.Lassi                                                      120|- |" << endl;
    Sleep(120);
    cout << "|  5.Green Tea                                                  120|- |" << endl;
    Sleep(50);
    cout << "|  6.Fresh Lime Water                                           100|- |" << endl;
    Sleep(120);
    cout << "|  7.Sugarcan Juice                                              80|- |" << endl;
    Sleep(50);
    cout << "|  8.Orange Juice                                               120|- |" << endl;
    Sleep(120);
    cout << "|  9.Apple Juice                                                110|- |" << endl;
    Sleep(50);
    cout << "|  10.Mix Fruit Juice                                           150|- |" << endl;
    Sleep(120);
    cout << "|  11.R-M Tea                                                   200|- |" << endl;
    Sleep(50);
    cout << "|  12.Apple Cider                                               110|- |" << endl;
    Sleep(120);
    cout << "|  13.Cocacola                                                   70|- |" << endl;
    Sleep(50);
    cout << "|  14.Marinda                                                    60|- |" << endl;
    Sleep(120);
    cout << "|  15.Mountain Dew                                               50|- |" << endl;
    Sleep(50);
    cout << "|  16.Sprite                                                     55|- |" << endl;
    Sleep(120);
    cout << "|                                                                     |" << endl;
    Sleep(50);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(120);
    cout << "|>>";
    cin >> Bev_soft_int;
    if (Bev_soft_int > 16 || Bev_soft_int < 1)
    {
        system("cls");
        system("color 4");
        cout << "Choose Valid Option !!";
        Sleep(1000);
        Bev_Menu_Soft();
    }

    cout << "Enter Quantity: ";
    int def_qty = 1;
    cin >> def_qty;
    string it_name = Bev_soft_it[Bev_soft_int - 1];
    int pric = Bev_soft_pri[Bev_soft_int - 1];

    FH_sum(it_name, pric, def_qty, flag);
}

void HMS::Bev_Menu_Hard()
{
    system("cls");
    string Bev_hard_it[] = {
        "Water_Bottle_(Hot)",
        "Water_Bottle_(Cold)",
        "8848_Vodka",
        "J98_Whiskey",
        "Khukuri_Rum",
        "Ruslan_Vodka",
        "Mustang_Whiskey",
        "Apple_Brandy",
        "Mc._Dowels",
        "Signature",
        "Royal_Stag",
        "Old_Durbar"};
    system("color F");
    int Bev_hard_pri[] = {20, 25, 280, 360, 270, 260, 195, 290, 275, 290, 270, 355};
    int Bev_hard_int;

    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|--------------------------------Beverage-----------------------------|" << endl;
    Sleep(40);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|-------------------------------Hard Drinks---------------------------|" << endl;
    Sleep(40);
    cout << "|  Items                                                 Price(60 ML) |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(40);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|  1.Water Bottle (Hot)                                          20|- |" << endl;
    Sleep(40);
    cout << "|  2.Water Bottle (Cold)                                         25|- |" << endl;
    Sleep(100);
    cout << "|  3.8848 Vodka                                                 280|- |" << endl;
    Sleep(40);
    cout << "|  4.J98 Whiskey                                                360|- |" << endl;
    Sleep(100);
    cout << "|  5.Khukuri Rum                                                270|- |" << endl;
    Sleep(40);
    cout << "|  6.Ruslan Vodka                                               260|- |" << endl;
    Sleep(100);
    cout << "|  7.Mustang Whiskey                                            195|- |" << endl;
    Sleep(40);
    cout << "|  8.Apple Brandy                                               290|- |" << endl;
    Sleep(100);
    cout << "|  9.Mc. Dowels                                                 275|- |" << endl;
    Sleep(40);
    cout << "|  10.Signature                                                 290|- |" << endl;
    Sleep(100);
    cout << "|  11.Royal Stag                                                270|- |" << endl;
    Sleep(40);
    cout << "|  12.Old Durbar                                                355|- |" << endl;
    Sleep(100);
    cout << "|                                                                     |" << endl;
    Sleep(40);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(40);
    cout << "|>>";
    cin >> Bev_hard_int;
    if (Bev_hard_int > 12 || Bev_hard_int < 1)
    {
        system("color 4");
        cout << "Choose Valid Option !!";
        Sleep(1000);
        Bev_Menu_Hard();
    }

    int def_qty = 1;
    cout << "Enter Quantity: ";
    cin >> def_qty;
    string it_name = Bev_hard_it[Bev_hard_int - 1];
    int pric = Bev_hard_pri[Bev_hard_int - 1];

    FH_sum(it_name, pric, def_qty, flag);
}

void HMS::Room_service()
{
    system("cls");
    system("color F");
    int Room_serv_int;
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(80);
    cout << "|---------------------------Room Service------------------------------|" << endl;
    Sleep(30);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(80);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(30);
    cout << "|                                                                     |" << endl;
    Sleep(80);
    cout << "|  1.Booking                                                          |" << endl;
    Sleep(30);
    cout << "|  2.Make an Order                                                    |" << endl;
    Sleep(80);
    cout << "|  3.Total Bill                                                       |" << endl;
    Sleep(30);
    cout << "|  4.Any other Issue                                                  |" << endl;
    Sleep(80);
    cout << "|                                                                     |" << endl;
    Sleep(30);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(80);
    cout << "|>>";
    cin >> Room_serv_int;
    switch (Room_serv_int)
    {
    case 1:
        Booking();
        break;
    case 2:
        R_order();
        break;
    case 3:
        Room_Total_Bill();
        break;
    case 4:
        Any_OI();
        break;
    default:
        break;
    }
}
void HMS::Any_OI()
{
    system("cls");
    system("color 04");
    cout << "We would like to Sorry For the Issue that you are Facing!!!\n";
    cout << "If The Issue Is Legit And Problematic For Our Costumer \n We Will Provide You A Bounty!!\n";
    cout << "Please Contact us:\n";
    cout << "huntdown404@gmail.com\n";
    cout << "Thanks!!\n";
    cout << "Hotel YOOYO\n";
    cout << "Press Enter To Get Back To Menu: ";
    cin.ignore();
    char any_key = cin.get();
    if (any_key == '\n')
    {
        Room_service();
    }
    else
    {
        system("exit");
    }
    system("color 0f");
}
void HMS::R_order()
{
    int choice;

    // Clear the screen and set color
    system("cls");
    system("color F");

    // Display room order heading
    cout << "| Enter Room No: ";
    cin >> R_No;
    system("cls"); 
    cout << "=====================================================================" << endl;
    cout << "=====================================================================" << endl;
    cout << "|                          Room Service Order                       |" << endl;
    cout << "=====================================================================" << endl;
    Sleep(500);


    // Display the menu options
    cout << "| What would you like to order?                                      |" << endl;
    Sleep(100);
    cout << "|  1. Food Menu                                                      |" << endl;
    Sleep(100);
    cout << "|  2. Pharmacy Menu                                                  |" << endl;
    Sleep(100);
    cout << "=====================================================================" << endl;
    cout << "| Enter your choice (1/2): ";
    cin >> choice;
    Sleep(500);

    // Handle user choice
    if (choice == 1)
    {
        flag = 1;
        system("cls"); 
        F_menu(flag); 
    }
    else if (choice == 2)
    {
        system("cls"); 
        F_menu_Pharmacy(); 
    }
    else
    {
        system("color 4"); 
        cout << "| Invalid choice! Please select either 1 or 2." << endl;
        Sleep(1000);
        system("color F"); 
        R_order();  
    }
}

void HMS::F_menu_Pharmacy()
{
    system("cls");
    system("color F");

    // Slogan
     cout << "========================================================================" << endl;
    cout << "|       Doctors and Medicines are Available 24/7 for Your Health       |" << endl;
    cout << "|                                                        -9769841113   |" << endl;
    cout << "========================================================================" << endl;
    Sleep(500);

    // Pharmacy items and their prices
    string pharmacy_it[] = {
        "ORS_Solution",                        // Food Poisoning (Dehydration treatment)
        "Buscopan",                           // Stomach Pain
        "Paracetamol",                        // Headache Painkiller
        "Durex_Strawberry_Flavor",            // Contraceptive (Strawberry Flavor)
        "Durex_Chocolate_Flavor",             // Contraceptive (Chocolate Flavor)
        "Durex_Banana_Flavor",                // Contraceptive (Banana Flavor)
        "Mifepristone",                       // Unconditional Pregnancy Pill
        "Sildenafil_Citrate (Vigra)"                  // Sex Pill
    };

    int pharmacy_pri[] = {60, 80, 30, 200, 210, 190, 400, 300};
    int ff_pharmacy_int;

    // Display items and prices
    cout << "|----------------------------Pharmacy Items----------------------------|" << endl;
    Sleep(100);
    cout << "|  Items                                                       Price   |" << endl;
    Sleep(100);
    cout << "|----------------------------General Pills-----------------------------|" << endl;
    Sleep(100);
    cout << "|                                                                      |" << endl;
    Sleep(100);
    cout << "|  1.ORS Solution                                                60|-  |" << endl;
    Sleep(100);
    cout << "|  2.Buscopan                                                    80|-  |" << endl;
    Sleep(100);
    cout << "|  3.Paracetamol                                                 30|-  |" << endl;
    Sleep(100);
    cout << "|  4.Durex Strawberry Flavor                                    200|-  |" << endl;
    Sleep(100); 
    cout << "|  5.Durex Chocolate Flavor                                     210|-  |" << endl;
    Sleep(100);
    cout << "|  6.Durex Banana Flavor                                        190|-  |" << endl;
    Sleep(100);
    cout << "|  7.Mifepristone                                               400|-  |" << endl;
    Sleep(100);
    cout << "|  8.Sildenafil Citrate (Vigra)                                 300|-  |" << endl;
    Sleep(100);
    cout << "|                                                                      |" << endl;
    Sleep(100);
    cout << "|----------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|>> ";
    cin >> ff_pharmacy_int;

    // Input validation
    if (ff_pharmacy_int > 8 || ff_pharmacy_int < 1)
    {
        system("color 4");
        cout << "Choose Valid Option !!";
        F_menu_Pharmacy();
    }

    cout << "Enter Quantity: ";
    int def_qty = 1;
    cin >> def_qty;
    
    string it_name = pharmacy_it[ff_pharmacy_int - 1];
    int pric = pharmacy_pri[ff_pharmacy_int - 1];

    FH_sum(it_name, pric, def_qty, 0);
}


void HMS::Room_Total_Bill()
{
    system("cls");
    cout << "Enter Room No: ";
    cin >> R_No;
    ifstream Room_bill("Room No " + to_string(R_No) + ".txt");

    if (!Room_bill.is_open())
    {
        system("color 4");
        char yn;
        cout << "Firstly Book Room Please\n";
        {
            Sleep(1000);
            cout << "Do you Want to Book Room (y/n): ";
            if (yn == 'y' || yn == 'Y')
            {
                Room_service();
            }
            else
            {
                Main_Menu();
            }
        }
    }
    else
    {
        system("color F");
        cout << "mmmmmmm  mmmm mmmmmmm   mm   m             mmmmm  mmmmm  m      m     \n";
        Sleep(500);
        cout << "   #    m\"  \"m   #      ##   #             #    #   #    #      #     \n";
        Sleep(400);
        cout << "   #    #    #   #     #  #  #             #mmmm\"   #    #      #     \n";
        Sleep(350);
        cout << "   #    #    #   #     #mm#  #             #    #   #    #      #     \n";
        Sleep(250);
        cout << "   #     #mm#    #    #    # #mmmmm        #mmmm\" mm#mm  #mmmmm #mmmmm\n";
        Sleep(100);
        cout << "\n\n\n\t\t\t\t\tRoom No: " << R_No << "\n\n";
        cout << "|---------------------------------------------------------------------------------------|" << endl;
        Sleep(120);
        cout << "| Item Name                      | Quantity        | Rate            | Price            |" << endl;
        Sleep(120);
        cout << "|---------------------------------------------------------------------------------------|" << endl;
        Sleep(120);

        int total = 0;
        string Item_Name, Quantity, Rate, Price;
        string room_cat, room_type, room_price;

        for (int i = 1; i < 5; i++)
        {
            string data;
            getline(Room_bill, data);
            if (i == 4)
            {
                room_cat = data;
            }
        }
        Room_bill >> room_type >> room_price;
        int room_price_int = stoi(room_price);
        cout << "| " << setw(30) << left << room_type << " | " << setw(15) << left << "1" << " | " << setw(15) << left << room_price << " | " << setw(15) << left << room_price << "  |" << endl;
        total += room_price_int;
        int line = 6;
        while (Room_bill >> Item_Name >> Quantity >> Rate >> Price)
        {
            if (line > 6)
            {
                cout << "| " << setw(30) << left << Item_Name << " | " << setw(15) << left << Quantity << " | " << setw(15) << left << Rate << " | " << setw(15) << left << Price << "  |" << endl;
                Sleep(150);
                int it_price = stoi(Price);
                total += it_price;
            }
            line++;
        }
        // cout<<room_cat,"\n";
        if (room_cat == "Travellers")
        {
            int pa = total - (0.15 * total);
            cout << "|---------------------------------------------------------------------------------------|" << endl;
            Sleep(70);
            cout << "|                                                          -----------------------------|" << endl;
            Sleep(70);
            cout << "|--------------------------------------------------------->Total Price: Rs  ";
            Sleep(2000);
            cout << setw(10) << left << total << "  |" << endl;
            Sleep(70);
            cout << "|---------------------------------------------------------------> -15% Discount         |" << endl;
            Sleep(70);
            cout << "|--------------------------------------------------------->Payable Amount: Rs  ";
            Sleep(2000);
            cout << setw(7) << left << pa << "  |" << endl;
            Sleep(70);
            cout << "|---------------------------------------------------------------------------------------|" << endl;
            Sleep(70);
            cout << "|---------------------------------------------------------------------------------------|" << endl;
            Sleep(70);

            Room_bill.close();
        }
        else
        {
            cout << "|---------------------------------------------------------------------------------------|" << endl;
            Sleep(70);
            cout << "|                                                          -----------------------------|" << endl;
            Sleep(70);
            cout << "|--------------------------------------------------------->Total Price: Rs  ";
            Sleep(2000);
            cout << setw(10) << left << total << "  |" << endl;
            Sleep(70);
            cout << "|---------------------------------------------------------------------------------------|" << endl;
            Sleep(70);

            Room_bill.close();
        }
    }
    cin.ignore();
    cout << "Press Enter To Get Back To Menu: ";
    char any_key = cin.get();
    if (any_key == '\n')
    {
        Room_service();
    }
    else
    {
        system("exit");
    }
}

void HMS::Booking()
{
    system("cls");
    system("color F");
    int room_book;
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(100);
    cout << "|---------------------------Room Booking------------------------------|" << endl;
    Sleep(40);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(40);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|  1.Travellers                                                       |" << endl;
    Sleep(40);
    cout << "|  2.Business                                                         |" << endl;
    Sleep(100);
    cout << "|  3.1 Night Stand                                                    |" << endl;
    Sleep(40);
    cout << "|                                                                     |" << endl;
    Sleep(100);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(40);
    cout << "|>>";
    cin >> room_book;
    switch (room_book)
    {
    case 1:
        Travellers();
        break;
    case 2:
        Business();
        break;
    case 3:
        Onighty();
        break;

    default:
        break;
    }
}

void HMS::Travellers()
{
    system("cls");
    system("color F");
    string Travel_book_it[] = {
        "Single_Bed_(Non_A/C)",
        "Double_Bed_(Non_A/C)",
        "Single_Bed_(A/C)",
        "Double_Bed_(A/C)"};

    int Travel_book_pri[] = {500, 700, 900, 1200};
    int Travel_book_int;
    cout << "We Serve Travellers with More Hospitality and We serve a 15% discount too!!" << endl;
    fun_speak(3);
    Sleep(120);

    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(30);
    cout << "|-----------------------Travellers Room Booking-----------------------|" << endl;
    Sleep(120);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(30);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(120);
    cout << "|                                                          Price/Day  |" << endl;
    Sleep(30);
    cout << "|  1.Single Bed (Non_A/C)                                    500|-    |" << endl;
    Sleep(120);
    cout << "|  2.Double Bed (Non_A/C)                                    700|-    |" << endl;
    Sleep(30);
    cout << "|  3.Single Bed (A/C)                                        900|-    |" << endl;
    Sleep(120);
    cout << "|  4.Double Bed (A/C)                                       1200|-    |" << endl;
    Sleep(30);
    cout << "|                                                                     |" << endl;
    Sleep(120);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(30);
    cout << "|>>";
    cin >> Travel_book_int;

    if (Travel_book_int > 4 || Travel_book_int < 1)
    {
        system("color 4");
        cout << "Choose Valid Option !!";
        Sleep(1000);
        Travellers();
    }
    string Rt_name = Travel_book_it[Travel_book_int - 1];
    int pric = Travel_book_pri[Travel_book_int - 1];
    Room_CT = 1;
    Book_serv_FH(Rt_name, pric);
}
void HMS::Book_serv_FH(string Rtn, int pri)
{
    system("cls");
    // system("mkdir Bill");
    cout << "Enter Room No: ";
    cin >> R_No;
    cin.ignore();
    string filename = "Room No " + to_string(R_No) + ".txt";
    ifstream chk(filename);
    if (!chk.is_open())
    {
        ofstream file0(filename);
        if (!file0.is_open())
        {
            system("color 4");
            Beep(1000, 1000);
            cout << "Something Went Wrong !!\n"
                    "Please Contact With Staffs\n"
                    "\tOR\n"
                    "Contact: 9769841113\n";
            Sleep(1000);
        }
        else
        {

            string Usr_F_name, Usr_L_name, Usr_address, Ctzn, cont_no, RCT;
            string Room_ClassT[] =
                {"Travellers",
                 "Business",
                 "Onighty"};
            RCT = Room_ClassT[Room_CT - 1];
            system("color F");
            cout << "|---------------------------------------------------------------------|" << endl;
            Sleep(30);
            cout << "|---------------------------Enter Details-----------------------------|" << endl;
            Sleep(150);
            cout << "|---------------------------------------------------------------------|" << endl;
            Sleep(50);
            cout << "| Enter Details:-                             (For Security Concern)  |" << endl;
            Sleep(100);

            cout << "  1. Enter First Name?                                                " << endl;
            Sleep(120);
            cout << "  >>";
            cin >> Usr_F_name;
            cout << "  2. Enter Last Name?                                                " << endl;
            Sleep(120);
            cout << "   >>";
            cin >> Usr_L_name;
            cout << " 3. Enter Address?                                                  " << endl;
            Sleep(120);
            cout << "   >>";
            cin >> Usr_address;
            cout << " 4. Enter Contact Number?                                           " << endl;
            Sleep(120);
            cout << "   >>";
            cin >> cont_no;
            cout << " 5. Enter Citizenship Number?                                       " << endl;
            Sleep(120);
            cout << "   >>";
            cin.ignore();
            getline(cin, Ctzn);

            cout << "|---------------------------------------------------------------------|" << endl;
            Sleep(100);

            file0 << "\t\t\t\t\tRoom No: " << R_No << endl;
            file0 << Usr_F_name << "\t\t" << Usr_L_name << "\t\t" << Usr_address << "\t\t" << cont_no << "\t\t\t" << Ctzn << endl;
            file0 << "Room_Type \t\t\t\t Price" << endl;
            file0 << RCT << endl;
            file0 << Rtn << "\t\t" << pri << endl;
            file0 << "Item_Name \t\t Quantity \t Rate \t Price" << endl;
            file0.close();
            system("cls");
        }
        system("color C");
        cout << "Thanks For Information\n";
        Sleep(500);
        cout << "Press Enter To Get Back To Menu: ";
        char any_key = cin.get();
        if (any_key == '\n')
        {
            Room_service();
        }
        else
        {
            system("exit");
        }
    }
    else
    {
        system("cls");
        system("color C");
        Beep(1000, 1000);
        cout << "This Room Is Booked By Someone Else!!! \n";
        cout << "Please Select another Room Number \n";
        fun_speak(7);
        Sleep(2000);
        system("color 7");
        Book_serv_FH(Rtn, pri);
    }
}
void HMS::Business()
{
    system("cls");
    system("color F");
    string Buss_book_it[] = {
        "Single_Bed_(Non_A/C)",
        "Double_Bed_(Non_A/C)",
        "Single_Bed_(A/C)",
        "Double_Bed_(A/C)",
        "Hall_(A/C)"

    };

    int Buss_book_pri[] = {900, 1100, 1200, 1500, 1400};
    int Buss_book_int;
    cout << "Make your Business with Goodness!!" << endl;
    fun_speak(5);
    Sleep(120);

    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(120);
    cout << "|-----------------------Business Room Booking-------------------------|" << endl;
    Sleep(30);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(120);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(30);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(120);
    cout << "|                                                          Price/Day  |" << endl;
    Sleep(30);
    cout << "|  1.Single Bed (Non_A/C)                                    900|-    |" << endl;
    Sleep(120);
    cout << "|  2.Double Bed (Non_A/C)                                   1100|-    |" << endl;
    Sleep(30);
    cout << "|  3.Single Bed (A/C)                                       1200|-    |" << endl;
    Sleep(120);
    cout << "|  4.Double Bed (A/C)                                       1500|-    |" << endl;
    Sleep(30);
    cout << "|  5.Hall (A/C)                                             1400|-    |" << endl;
    Sleep(120);
    cout << "|                                                                     |" << endl;
    Sleep(30);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(120);
    cout << "|>>";
    cin >> Buss_book_int;

    if (Buss_book_int > 5 || Buss_book_int < 1)
    {
        system("color 4");
        cout << "Choose Valid Option !!";
        Sleep(1000);
        Business();
    }
    string Rt_name = Buss_book_it[Buss_book_int - 1];
    int pric = Buss_book_pri[Buss_book_int - 1];
    Room_CT = 2;
    Book_serv_FH(Rt_name, pric);
}
void HMS::Onighty()
{
    system("cls");
    system("color F");
    string oni_book_it[] = {
        "Double_Bed_(Non_A/C)",
        "Double_Bed_(A/C)",
        "Single_Bed_(Non_A/C)",
        "Single_Bed_(A/C)"};

    int oni_book_pri[] = {1000, 1100, 500, 800};
    int oni_book_int;
    cout << "Bilssful Peace With Affordable Fees!!" << endl;
    fun_speak(6);
    Sleep(130);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(130);
    cout << "|-----------------------One Night Stand Room Booking------------------|" << endl;
    Sleep(30);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(130);
    cout << "|  SELECT FROM BELOW                                                  |" << endl;
    Sleep(30);
    cout << "|                                                           Prices    |" << endl;
    Sleep(130);
    cout << "|  1.Double Bed (Non_A/C)                                   1000|-    |" << endl;
    Sleep(30);
    cout << "|  2.Double Bed (A/C)                                       1100|-    |" << endl;
    Sleep(130);
    cout << "|  4.Single Bed (Non_A/C)                                    500|-    |" << endl;
    Sleep(30);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(130);
    cout << "|  # We Recommends                                                    |" << endl;
    Sleep(30);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(130);
    cout << "|  4.Single Bed (A/C)                                        800|-    |" << endl;
    Sleep(30);
    cout << "|                                                                     |" << endl;
    Sleep(130);
    cout << "|---------------------------------------------------------------------|" << endl;
    Sleep(30);
    cout << "|>>";
    cin >> oni_book_int;

    if (oni_book_int > 4 || oni_book_int < 1)
    {
        system("color 4");
        cout << "Choose Valid Option !!";
        Sleep(1000);
        Travellers();
    }
    string Rt_name = oni_book_it[oni_book_int - 1];
    int pric = oni_book_pri[oni_book_int - 1];
    Room_CT = 3;
    Book_serv_FH(Rt_name, pric);
}

// g++ -o hms HMS.cpp -lwinmm