#include <iostream>
#include <iomanip>

using namespace std;

int main()

{

    double a = 3.15, b = 3.25, c = 2.99, d = 2.85, e = 0.85, f = 0.55, g = 3.25, h = 2.22, i =2.55,  j = 2.15, k = 1.25 ;

    double totalprice=0;

    double tax = 0.13;

    char answer='y';

    char choice=' ';

    do

    {



        cout << "Hello! Welcome to restaurant BaRbOsA ARRR! I'm Barbi tell me what do you want today sailor ?" <<endl;

        cout << "Menu       Cost: " << endl;

        string nums[11];
    nums [0] = " BLACK ROM 50ml. ";
    nums [1] = " Whisky 50ml. " ;
    nums [2] = " Moussaka ";
    nums [3] = " Pork with peas ";
    nums [4] = " Meatballs, Kebabche ";
    nums [5] = " Pearl ";
    nums [6] = " Pork steak ";
    nums [7] = " Chicken soup ";
    nums [8] = " Shopska salad ";
    nums [9] = " Fried ice cream ";
    nums [10] = " Rice pudding ";
    for (int i=0; i<=10; i++){
    cout<< nums [i]<<endl;
    }

        cout<< endl;

        cout << "A: BLACK ROM 50ml. - " << a <<"lv."<< endl;

        cout << "B: Whisky 50ml. - " << b <<"lv."<< endl;

        cout << "C: Moussaka - " << c <<"lv."<< endl;

        cout << "D: Pork with peas - " << d <<"lv."<< endl;

        cout << "E: Meatballs, Kebabche - " << e <<"lv."<< endl;

        cout << "F: Pearl - " << f <<"lv."<< endl;

        cout << "G: Pork steak - " << g <<"lv."<< endl;

        cout << "H: Chicken soup - " << h <<"lv."<< endl;

        cout << "I: Shopska salad  - " << i <<"lv."<< endl;

        cout << "J: Fried ice cream - " << j <<"lv."<< endl;

        cout << "K: Rice pudding - " << k <<"lv."<< endl;

        cout << "\nWould you like something ARRR...? 'Y'or 'N'\n" << endl;

        cin >> answer;

        while (answer == 'Y' || answer == 'y')

        {

            cout << "And what do you want ARRR...?" << endl;

            cin >> choice;

            if (choice == 'A' || choice == 'a')

            {

                cout << "\nA: BLACK ROM\n "<< a << endl;

                totalprice = totalprice + a;

            }

            else if (choice == 'B' || choice == 'b')

            {

                cout << "B: Whisky " << b << endl;

                totalprice = totalprice + b;

            }

            else if (choice == 'C' || choice == 'c')

            {

                cout << "C: Moussaka" << c << endl;

                totalprice = totalprice + c;

            }

            else if (choice == 'D' || choice == 'd')

            {

                cout << "D: Pork with peas " << d << endl;

                totalprice = totalprice + d;

            }

            else if (choice == 'E' || choice == 'e')

            {

                cout << "E: Meatballs, Kebabche "<< e << endl;

                totalprice = totalprice + e;

            }

            else if (choice == 'F' || choice == 'f')

            {

                cout << "F: Pearl "<< f << endl;

                totalprice = totalprice + f;

            }

            else if (choice == 'G' || choice == 'g')

            {

                cout << "G: Pork steak "<< g << endl;

                totalprice = totalprice + g;

            }

            else if (choice == 'H' || choice == 'h')

            {

                cout << "H: Chicken soup "<< h << endl;

                totalprice = totalprice + h;

            }

            else if (choice == 'I' || choice == 'i')

            {

                cout << "I: Shopska salad "<< i << endl;

                totalprice = totalprice + i;

            }

             else if (choice == 'J' || choice == 'j')

            {

                cout << "J: Fried ice cream "<< j << endl;

                totalprice = totalprice + j;

            }

             else if (choice == 'K' || choice == 'k')

            {

                cout << "K: Rice pudding "<< k << endl;

                totalprice = totalprice + k;

            }


            cout << "\nWould you like something else ARRR...? Y or N\n" << endl;

            cin >> answer;

            if (answer == 'N' || answer == 'n')

            {

                totalprice == (totalprice * tax);

                cout << "Sailor you owe me " << totalprice << " So pay or walk on the plank!!!" << endl;

            }

        }

    }

    while (answer=='y' || answer=='Y');

    return 0;

}
