/* Creator
        BradleyHobbs
    created
        8/29/2017
    Description
        This program will create
        a Dragon using Keyboard symbols
*/

#include <iostream>
#include <string>
using namespace std;

    int main ()
    
    
    {
        string exitProgram = "No";
        
        while (exitProgram == "No" || exitProgram == "no" || exitProgram == "NO" || exitProgram == "nO")
        {
            string chooseNew = "Yes";
            while (chooseNew == "Yes" || chooseNew == "yEs" || chooseNew == "yeS" || chooseNew == "YEs" || chooseNew == "yES" || chooseNew == "yes" || chooseNew == "YES" || chooseNew == "YeS")
            {
                string keyboardSymbol;
                cout << "Type \"Rabbit\", \"Dragon\", \"House\", or \"Bradley\" for different pictures" << endl;
                cin >> keyboardSymbol;
                
                if (keyboardSymbol == "dragon" || keyboardSymbol == "Dragon")
                
                    {
                        cout << "                                       .." << endl;
                        cout << "                                    ,o\"\"\"\"o" << endl;
                        cout << "                                 ,o$\"     o" << endl;
                        cout << "                               ,o$$$                                 " << endl;
                        cout << "                            ,o$$$'" << endl;
                        cout << "                          ,o$\"o$'" << endl;
                        cout << "                        ,o$$\"$\"'   " << endl;
                        cout << "                      ,o$\"$o\"$\"'    " << endl;
                        cout << "                   ,oo$\"$\"$\"$\"$$`                      ,oooo$$$$$$$$oooooo.  " << endl;
                        cout << "                ,o$$$\"$\"$\"$\"$\"$\"o$`..             ,$o$\"$$\"$\"'            `oo.o" << endl;
                        cout << "             ,oo$$$o\"$\"$\"$\"$  $\"$$$\"$`o        ,o$$\"o$$$o$'                 `o" << endl;
                        cout << "          ,o$\"$\"$o$\"$\"$\"$  $\"$$o$$o $$o`o   ,$$$$$o$\"$$o'                    $" << endl;
                        cout << "        ,o\"$$\"'  `$\"$o$\" o$o$o\"  $$$o$o$oo\"$$$o$\"" << "\\" << "$$\"$o\"'                     $" << endl;
                        cout << "     ,o$\"'        `\"$ \"$$o$$\" $\"$o$o$$\"$o$$o$o$o\"$\"$\"`\"\"o                   ' " << endl;
                        cout << "   ,o$'          o$ `\"$\"$o \"$o$$o$$$\"$$$o\"$o$$o\"$$$    `$$  " << endl;
                        cout << "  ,o'           (     `\" o$\"$o\"$o$$$\"$o$\"$\"$o$\"$$\"$ooo|  `` " << endl;
                        cout << " $\"$             `    (   `\"o$$\"$o$o$$ \"o$o\"   $o$o\"$\"$    )" << endl;
                        cout << "(  `                   `    `o$\"$$o$\" \"o$$     \"o /|\"$o\"" << endl;
                        cout << " `                           `$o$$$$\"\" o$      \"o$" << "\\" << "|\"$o'" << endl;
                        cout << "                              `$o\"$\"$ $ \"       `\"$\"$o$" << endl;
                        cout << "                               \"$$\"$$ \"oo         ,$\"\"$ " << endl;
                        cout << "                               $\"$o$$\"\"o\"          ,o$\"$" << endl;
                        cout << "                               $$\"$$\"$ \"o           `,\"," << endl;
                        cout << "                     ,oo$oo$$$$$$\"$o$$$ \"\"o           " << endl;
                        cout << "                  ,o$$\"o\"o$o$$o$$$\"$o$$oo\"oo" <<endl;
                        cout << "                ,$\"oo\"$$$$o$$$$\"$$$o\"o$o\"o\"$o o" << endl;
                        cout << "               ,$$$\"\"$$o$,      `$$$$\"$$$o\"\"$o $o               " << endl;
                        cout << "               $o$o$\"$,          `$o$\"$o$o\"$$o$ $$o             " << endl;
                        cout << "              $$$o\"o$$           ,$$$$o$$o\"$\"$$ $o$$oo      ,   " << endl;
                        cout << "              \"$o$$$ $`.        ,\"$$o$\"o$\"\"$$$$ `\"$o$$oo    `o" << endl;
                        cout << "              `$o$o$\"$o$o`.  ,.$$\"$o$$\"$$\"o$$$$   `$o$$ooo    $$ooooooo" << endl;
                        cout << "                `$o$\"$o\"$\"$$\"$$\"$\"$$o$$o\"$$o\"        `\"$o$o            `\"o" << endl;
                        cout << "                   `$$\"$\"$o$$o$\"$$\"$ $$$  $ \"           `$\"$o            `o" << endl;
                        cout << "                      `$$\"o$o\"$o\"$o$ \"  o $$$o            `$$\"o          ,$" << endl;
                        cout << "                         (\" \"\"$\"\"\"     o\"\" \"o$o             `$$ooo     ,o$$" << endl;
                        cout << "                              $$\"\"\"o   (   \"$o$$$\"o            `$o$$$o$\"$'" << endl;
                        cout << "                                ) ) )           )  ) )            ` \"'" << endl;
                        
                        
                        cout << "If you would like to choose" << endl << "a new picture, type \"Yes\"" << endl;
                        cin >> chooseNew;
                    }
                    
                if (keyboardSymbol == "rabbit" || keyboardSymbol == "Rabbit")
                
                    {
                        cout << " (\\_/)" << endl;
                        cout << "('. ')" << endl;
                        cout <<"(\")-(\")" << endl;
                        cout << "If you would like to choose" << endl << "a new picture, type \"Yes\"" << endl;
                        cin >> chooseNew;
                    }
                    
                if (keyboardSymbol == "house" || keyboardSymbol == "House")
                    
                    {
                        cout << "                /▼▼▼▼▼▼▼▼▼▼▼▼▼▲▼▼▼▼▼▼▼▼▼▼▼▼▼\\   " << endl;
                        cout << "               /▼▼▼▼▼▼▼▼▼▼▼▼▼▲^▲▼▼▼▼▼▼▼▼▼▼▼▼▼\\   " << endl;
                        cout << "              /▼▼▼▼▼▼▼▼▼▼▼▼▼▲/ \\▲▼▼▼▼▼▼▼▼▼▼▼▼▼\\   " << endl;
                        cout << "   \\  ▲ ▲  / /▼▼▼▼▼▼▼▼▼▼▼▼▼▲/___\\▲▼▼▼▼▼▼▼▼▼▼▼▼▼\\   " << endl;
                        cout << "    \\(^.^)/  |                                 |" << endl;
                        cout << "    (_____)  |                                 |" << endl;
                        cout << "   (_______) |                                 |" << endl;
                        cout << "             |                                 |" << endl;
                        cout << "             |                                 |" << endl;
                        cout << "             |                                 |" << endl;
                        cout << "             |                                 |" << endl;
                        cout << "             |                                 |" << endl;
                        cout << "             |            _________            |" << endl;
                        cout << "             |            ▐▌  █  ▐▌            |" << endl;
                        cout << "             |            ▐▌ .█. ▐▌            |" << endl;
                        cout << "             |            ▐▌  █  ▐▌            |" << endl << endl;
                        cout << "If you would like to choose" << endl << "a new picture, type \"Yes\"" << endl;
                        cin >> chooseNew;
                    }
                    
                if (keyboardSymbol == "bradley" || keyboardSymbol == "Bradley")
                
                    {
                        cout << "BBBBBBBB        RRRRRRR                 A             DDDDDDDD          LL              EEEEEEEEEE     YY      YY     " << endl;
                        cout << "BB     BB       RR    RR               AAA            DD      DD        LL              EE              YY    YY      " << endl;
                        cout << "BB      BB      RR     RR             AA AA           DD       DD       LL              EE               YY  YY       " << endl;
                        cout << "BB     BB       RR    RR             AA   AA          DD       DDD      LL              EE                YYYY        " << endl;
                        cout << "BBBBBBBB        RRRRRRR             AAAAAAAAA         DD        DDD     LL              EEEEEEEEE          YY         " << endl;
                        cout << "BB     BB       RR    RR           AA       AA        DD       DDD      LL              EE                 YY         " << endl;
                        cout << "BB      BB      RR     RR         AA         AA       DD       DD       LL              EE                 YY         " << endl;
                        cout << "BB      BB      RR      RR       AA           AA      DD      DD        LL              EE                 YY         " << endl;
                        cout << "BBBBBBBBB       RR       RR     AA             AA     DDDDDDDD          LLLLLLLLLLL     EEEEEEEEEE         YY         " << endl << endl;
                        
                        cout << "If you would like to choose" << endl << "a new picture, type \"Yes\"" << endl << endl;
                        cin >> chooseNew;
                    }
                }
                
            if (chooseNew == "No" || chooseNew == "nO" || chooseNew == "no" || chooseNew == "NO")
            
                {
                    cout << "Type \"Yes\" to Exit Program:" << endl << endl;
                    cin >> exitProgram;
                    
                    if (exitProgram == "Yes" || exitProgram == "yes" || exitProgram == "yEs" || exitProgram == "YEs" || exitProgram == "YeS" || exitProgram == "yES" || exitProgram == "YES");
                    
                        {
                            cout << "Thanks You for Using my Program";
                            
                            return 0;
                        }
                }
                    
            }
    }