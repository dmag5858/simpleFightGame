#include <iostream>
#include <vector>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <windows.h>

using namespace std;

class Hero {
    public:
        string MCU_name, real_name, attack_method, origin;
        int age, weight, HP, damage;
        double height;

        Hero(const string&, const string&, const string&, const string&, int, double, int, int, int);
};

Hero::Hero(const string& mn, const string& rn, const string& am, const string& o, int a, double h, int w, int hp, int d) :
    MCU_name{mn},
    real_name{rn},
    attack_method{am},
    origin{o},
    age{a},
    height{h},
    weight{w},
    HP{hp},
    damage{d}
{}


class Villain {
    public:
        string villain_name, attack_method, arch_nemesis, origin;
        int age, weight, HP, damage;
        double height;

        Villain(const string&, const string&, const string&, const string&, int, double, int, int, int);
};

Villain::Villain(const string& vn, const string& am, const string& an, const string& o, int a, double h, int w, int hp, int d) :
    villain_name{vn},
    attack_method{am},
    arch_nemesis{an},
    origin{o},
    age{a},
    height{h},
    weight{w},
    HP{hp},
    damage{d}
{}

void printStatus(const string&, int, int, const string&, int, int);

main() {
    vector<Hero*> Heroes;

    //create Hero character options
    //MCU_name, real_name, attack_method, origin, age, height, weight, HP, damage 
    Heroes.push_back(new Hero("Ant-Man","Scott Lang","Growing Punch","Global", 28, .07, 3, 400, 85));
    Heroes.push_back(new Hero("Black Panther","King T'Challa","Kinetic Release","Global", 29, 5.8, 165, 485, 105));
    Heroes.push_back(new Hero("Black Widow","Natasha Romanoff","Sexy Roundhouse","Global", 25, 5.2, 138, 490, 75));
    Heroes.push_back(new Hero("Captain America","Steve Rogers","Can Do This All Day Uppercut","Global", 83, 6.1, 190, 600, 95));
    Heroes.push_back(new Hero("Captain Marvel","Carol Danvers","Kree Punch","Cosmic", 145, 5.9, 151, 625, 105));
    Heroes.push_back(new Hero("Doctor Strange","Steven Strange","Deflect Barrage","Cosmic", 41, 6.3, 196, 405, 115));
    Heroes.push_back(new Hero("Falcon","Sam Wilson","Sky Attack","Global", 29, 5.9, 184, 505,85));
    Heroes.push_back(new Hero("Hawkeye","Clint Barton","Bullseye Explosion","Global", 33, 5.8, 183, 515, 70));
    Heroes.push_back(new Hero("Hulk","Bruce Banner","Smash","Global", 36, 9, 615, 850, 110));
    Heroes.push_back(new Hero("Iron Man","Tony Stark","Beam","Global", 31, 6.2, 385, 675, 120));
    Heroes.push_back(new Hero("Scarlet Witch","Wanda Maximoff","Mystic Force","Global", 27, 5.6, 152, 435, 95));
    Heroes.push_back(new Hero("Shang-Chi","Xu 'Shawn' Shang-Chi","Kung Pow Punch","Global", 22, 5.9, 171, 455, 85));
    Heroes.push_back(new Hero("Spider-Man","Peter Parker","Web Shooter","City", 17, 5.6, 159, 525,65));
    Heroes.push_back(new Hero("Star-Lord","Peter Quill","Phaser Trick Shot","Cosmic", 32, 5.8, 210, 490, 80));
    Heroes.push_back(new Hero("Thor","Thor","Thunder Clap","Cosmic", 765, 6.9, 285, 750, 125));
    Heroes.push_back(new Hero("Valkyrie","Brunnhilde","Aerial Swing","Cosmic", 24, 5.3, 140, 505, 75));
    Heroes.push_back(new Hero("Vision","Vision","Head Laser","Cosmic", 4, 6.5, 199, 605, 85));
    
    /*for (int i = 0; i < Heroes.size(); i++) {
        cout << Heroes[i]->MCU_name << "\n";
    }*/

    vector<Villain*> Villains;

    //create Villain character options
    //Villain_name, Attack_method, Arch_nemesis, Origin, Age, height, weight, HP, damage
    Villains.push_back(new Villain("Doctor Octopus", "Octo-Strike", "Spider-Man", "City", 44, 6.3, 370, 615, 110));
    Villains.push_back(new Villain("Dormamu", "Global Destruction", "Doctor Strange", "Cosmic", 1784, 53, 2500, 750, 80));
    Villains.push_back(new Villain("Hela", "Death Wish", "Thor", "Cosmic", 815, 5.9, 180, 610, 115));
    Villains.push_back(new Villain("Killmonger", "Swift Kick", "Black Panther", "Global", 29, 6, 215, 605, 105));
    Villains.push_back(new Villain("The Mandarin", "Secret Swing", "Shang-Chi", "Global", 412, 5.6, 160, 585, 90));
    Villains.push_back(new Villain("Ronan The Accuser", "Kree Strike", "Star-Lord", "Cosmic", 38, 6.2, 220, 625, 70));
    Villains.push_back(new Villain("Taskmaster", "Precision Blow", "Black Widow", "Global", 23, 5.6, 175, 585, 90));
    Villains.push_back(new Villain("Thanos", "Reality Check", "Iron-Man", "Cosmic", 367, 7.1, 385, 645, 130));
    Villains.push_back(new Villain("Ultron", "Super Swing", "Iron-Man", "Global", 4, 6.4, 200, 635, 95));

    
    string my_char_type;
    int my_char_choice;
    bool chooseCharacter = true;

    while (chooseCharacter == true)
    {
        cout << "Would you like to be a 1. Hero or a 2. Villain?\n";
        cin >> my_char_type;

        if ((my_char_type == "1"s) || (my_char_type == "Hero") || (my_char_type == "hero"))
        {
            cout << "Now it's time to let that light inside you shine and let the hero come out!\n\n";
            my_char_choice = 1;
            chooseCharacter = false;
        }
        else if ((my_char_type == "2"s) || (my_char_type == "Villain") || (my_char_type == "villain"))
        {
            cout << "Feeling like taking a stroll on the dark side?! I like it!\n\n";
            my_char_choice = 2;
            chooseCharacter = false;
        }
        else
        {
            cout << "That is an invalid input. Try again.\n";
        }
    }

    Sleep(1000);
    int pick_me, pick_opponent;
    string my_character, opponent_character;
    int my_hp, my_og_hp, opponent_hp, opponent_og_hp;
    int my_damage, opponent_damage;
    string my_attack, opponent_attack;

    for (int i = 1; i <= 2; i++)
    {
        bool choose = true;
        while (choose)
        {
            choose = true;
            if (i==1)
            {
                cout << "Pick a character for yourself. Choose wisely!\n";
            }
            else
            {
                cout << "Pick your oppenent for this round.\n";
            }

            switch (my_char_choice)
            {
                case 1:
                    cout << "1. Ant-Man\n"
                        << "2. Black Panther\n"
                        << "3. Black Widow\n"
                        << "4. Captain America\n"
                        << "5. Captain Marvel\n"
                        << "6. Doctor Strange\n"
                        << "7. Falcon\n"
                        << "8. Hawkey\n"
                        << "9. Hulk\n"
                        << "10. Iron Man\n"
                        << "11. Scarlet Witch\n"
                        << "12. Shang-Chi\n"
                        << "13. Spider-Man\n"
                        << "14. Star-Lord\n"
                        << "15. Thor\n"
                        << "16. Valkyrie\n"
                        << "17. Vision\n";
                    break;
                case 2:
                    cout << "1. DocOc\n"
                        << "2. Dormamu\n"
                        << "3. Hela\n"
                        << "4. Killmonger\n"
                        << "5. Mandarin\n"
                        << "6. Ronan\n"
                        << "7. Taskmaster\n"
                        << "8. Thanos\n"
                        << "9. Ultron\n";
                    break;
            }

            if (i==1)
            {
                cin >> pick_me;
                if ((my_char_choice == 1) && (pick_me >= 1) && (pick_me <= 17))
                {
                    my_character = Heroes[pick_me-1]->MCU_name;
                    my_hp = Heroes[pick_me-1]->HP;
                    my_og_hp = my_hp;
                    my_damage = Heroes[pick_me-1]->damage;
                    my_attack = Heroes[pick_me-1]->attack_method;

                    cout << "You have chosen " << Heroes[pick_me-1]->real_name << " aka \"" << Heroes[pick_me-1]->MCU_name << "\".\n"
                        << my_character << " is a " << Heroes[pick_me-1]->origin << " hero and is " << Heroes[pick_me-1]->age << " years old.\n"
                        << "They are approximately " << Heroes[pick_me-1]->height << " feet tall and weighs around " << Heroes[pick_me-1]->weight << " pounds.\n"
                        << my_character << " HP: " << my_hp << ".\n"
                        << my_character << " Damage: " << my_damage << ".\n\n";
                    choose = false;
                    Sleep(4000);
                    continue;
                }
                else if ((my_char_choice == 2) && (pick_me >= 1) && (pick_me <= 9))
                {
                    my_character = Villains[pick_me-1]->villain_name;
                    my_hp = Villains[pick_me-1]->HP;
                    my_og_hp = my_hp;
                    my_damage = Villains[pick_me-1]->damage;
                    my_attack = Villains[pick_me-1]->attack_method;

                    cout << "You have chosen " << my_character << " who's arch nemesis is " << Villains[pick_me-1]->arch_nemesis << ".\n"
                        << my_character << " is a " << Villains[pick_me-1]->origin << " villain and is " << Villains[pick_me-1]->age << " years old.\n"
                        << "They are approximately " << Villains[pick_me-1]->height << " feet tall and weighs around " << Villains[pick_me-1]->weight << " pounds.\n"
                        << my_character << " HP: " << Villains[pick_me-1]->HP << ".\n"
                        << my_character << " Damage: " << Villains[pick_me-1]->damage << ".\n\n";
                    choose = false;
                    Sleep(4000);
                    continue;
                }
                else
                {
                    cout << "Invalid choice. Try again.\n";
                    choose = true;
                }
            }
            else
            {
                cin >> pick_opponent;
                if ((my_char_choice == 1) && (pick_opponent >= 1) && (pick_opponent <= 17))
                {
                    opponent_character = Heroes[pick_opponent-1]->MCU_name;
                    opponent_hp = Heroes[pick_opponent-1]->HP;
                    opponent_og_hp = opponent_hp;
                    opponent_damage = Heroes[pick_opponent-1]->damage;
                    opponent_attack = Heroes[pick_opponent-1]->attack_method;
                    
                    cout << "You have chosen " << Heroes[pick_opponent-1]->real_name << " aka \"" << Heroes[pick_opponent-1]->MCU_name << "\".\n"
                        << opponent_character << " is a " << Heroes[pick_opponent-1]->origin << " hero and is " << Heroes[pick_opponent-1]->age << " years old.\n"
                        << "They are approximately " << Heroes[pick_opponent-1]->height << " feet tall and weighs around " << Heroes[pick_opponent-1]->weight << " pounds.\n"
                        << opponent_character << " HP: " << opponent_hp << ".\n"
                        << opponent_character << " Damage: " << opponent_damage << ".\n\n";
                    choose = false;
                    Sleep(4000);
                    continue;
                }
                else if ((my_char_choice == 2) && (pick_opponent >= 1) && (pick_opponent <= 9))
                {
                    opponent_character = Villains[pick_opponent-1]->villain_name;
                    opponent_hp = Villains[pick_opponent-1]->HP;
                    opponent_og_hp = opponent_hp;
                    opponent_damage = Villains[pick_opponent-1]->damage;
                    opponent_attack = Villains[pick_opponent-1]->attack_method;
                    
                    cout << "You have chosen " << opponent_character << " who's arch nemesis is " << Villains[pick_opponent-1]->arch_nemesis << ".\n"
                        << opponent_character << " is a " << Villains[pick_opponent-1]->origin << " villain and is " << Villains[pick_opponent-1]->age << " years old.\n"
                        << "They are approximately " << Villains[pick_opponent-1]->height << " feet tall and weighs around " << Villains[pick_opponent-1]->weight << " pounds.\n"
                        << opponent_character << " HP: " << opponent_hp << ".\n"
                        << opponent_character << " Damage: " << opponent_damage << ".\n\n";
                    choose = false;
                    Sleep(4000);
                    continue;
                }
                else
                {
                    cout << "Invalid choice. Try again.\n";
                    choose = true;
                }
            }
        }

        if (my_char_choice == 1)
        {
            my_char_choice = 2;
        }
        else
        {
            my_char_choice = 1;
        }
    }

    cout << "Good choices. This should be interesting.\n";
    Sleep(500);
    cout << "...\n";
    Sleep(500);
    cout << "...\n";
    Sleep(500);
    cout << "...\n";
    Sleep(500);
    cout << "...\n";
    Sleep(2000);
    cout << "---------LET'S FIGHT!!!!----------\n\n";
    Sleep(1000);
    printStatus(my_character, my_hp, my_og_hp, opponent_character, opponent_hp, opponent_og_hp);


    //Now we begin the battle
    bool fighting = true;
    while (fighting)
    {
        opponent_hp -= my_damage;
        if (opponent_hp > 0)
        {
            cout << my_character << " attacks with " << my_attack << "!\n";
            Sleep(2000);
        }
        else
        {
            opponent_hp = 0;
            printStatus(my_character, my_hp, my_og_hp, opponent_character, opponent_hp, opponent_og_hp);
            cout << opponent_character << " lost the battle! Congratulations!\n\n";
            fighting = false;
            break;
        }

        Sleep(2000);
        printStatus(my_character, my_hp, my_og_hp, opponent_character, opponent_hp, opponent_og_hp);

        my_hp -= opponent_damage;
        if (my_hp > 0)
        {
            cout << opponent_character << " attacks with " << opponent_attack << "!\n";
        }
        else
        {
            my_hp = 0;
            printStatus(my_character, my_hp, my_og_hp, opponent_character, opponent_hp, opponent_og_hp);
            cout << my_character << " lost the battle! You suck!\n\n";
            fighting = false;
            break;
        }

        Sleep(2000);
        printStatus(my_character, my_hp, my_og_hp, opponent_character, opponent_hp, opponent_og_hp);

    }

    
}



void printStatus(const string& me, int my_hp, int my_og_hp, const string& opp, int opp_hp, int opp_og_hp) {
    int myHealthRemaining = ((my_hp * 40)/ my_og_hp);
    int myHealthLost = 40 - myHealthRemaining;
    int oppHealthRemaining = ((opp_hp * 40)/ opp_og_hp);
    int oppHealthLost = 40 - oppHealthRemaining;

    cout << "\n\n" << setfill('=') << setw(100) << " " << setfill(' ') << '\n';

    cout << me << " remaining HP: " << setw(3) << my_hp << " / " << my_og_hp
        << setw(51-me.length()-opp.length()) << setfill(' ') << " "
        << opp << " remaining HP: " << setw(3) << opp_hp << " / " << opp_og_hp << '\n';

    cout << "[" << string(myHealthRemaining, '+') << string(myHealthLost, '-') << "]"
        << setw(16) << setfill(' ')
        << "[" << string(oppHealthRemaining, '+') << string(oppHealthLost, '-') << "]\n";

    cout << setfill('=') << setw(100) << " " << setfill(' ') << "\n\n";
};
