//
//  main.cpp
//  Welcomslide Offline
//
//  Created by Ty Ternus on 2/23/17.
//  Copyright © 2017 Ty Ternus. All rights reserved.
//


#include <iostream>
#include <string>

using namespace std;

string stop;
string date;
string classy;
string per;
string ppr;
string plan;
string tds;
string perd;
string prd;

int output(){                                                              //HERE
    if (per == "none"){
        per = "";
        prd = "1";
        output();
    }
    if (per == "None"){
        per = "";
        prd = "1";
        output();
    }
    else {
    if (prd == "1"){
            perd = "";
    }
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
        cout << "                                                              " << '\n';
        cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "        Welcome to " << perd <<" "<< per << "  " << classy;
    cout << "  " << date << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "          Prepare:                                            " << '\n';
    cout << "         " << ppr << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                    Plan:                                          " << '\n';
    cout << "                   " << plan << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "           ToDo:                                              " << '\n';
    cout << "        " << tds << '\n';
    cout << "                                                              " << '\n';
    getline(cin, stop, '\n');
    if (stop == "y"){
        return 0;
    }
    if (stop == "Y"){
        return 0;
    }
    else {
        return 0;
    }
    }
    
    
    
    
    return 0;
}

int ques(){                                                                //HERE
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                   Enter the date below                       " << '\n';
    cout << "               ---------------------------                    " << '\n';
    getline(cin, date, '\n');
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                Enter Your Class Subject                        " << '\n';
    cout << "              ----------------------------                    " << '\n';
    getline(cin, classy, '\n');
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "            Enter The Period Number or Type none              " << '\n';
    cout << "         ------------------------------------------           " << '\n';
    getline(cin, per, '\n');
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                   Enter The Prepare line                     " << '\n';
    cout << "                ----------------------------                  " << '\n';
    getline(cin, ppr, '\n');
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                    Enter The Plan line                       " << '\n';
    cout << "                ----------------------------                  " << '\n';
    getline(cin, plan, '\n');
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                    Enter The TODO line                       " << '\n';
    cout << "                ----------------------------                  " << '\n';
    getline(cin, tds, '\n');
    perd = "Period";
    output();
    
    
    return 0;
}

int main(){
    string yahboi;
    cout << "                                                              " << '\n';
    cout << "                                                              " << '\n';
    cout << "                       Hello, Welcome To:                     " << '\n';
    cout << "                      WelcomSlide  Offline                    " << '\n';
    cout << "              -----------------------------------             " << '\n';
    cout << "                       Type x to start:                       " << '\n';
    getline(cin, yahboi, '\n');
    if (yahboi == "x"){
        ques();
    }
    if (yahboi == "info"){                                                    //HERE
        cout << "             I am just a 6th grader                    " << '\n';
        cout << "     I have learned HTML, CSS, Python, Php, and C++    " << '\n';
        cout << "Made for my teachers, Mrs. Mielkie and Mrs. Christensen" << '\n';
    }
    
}
