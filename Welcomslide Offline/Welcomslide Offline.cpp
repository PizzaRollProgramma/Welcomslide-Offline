//
//  main.cpp
//  Welcomslide Offline
//
//  Created by Ty Ternus on 2/23/17.
//  Copyright © 2017 Ty Ternus. All rights reserved.
//


#include <iostream>
#include <string>
#include <fstream>


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

int output(){                                                                                                                   //HERE
    if (per == "1"){
        per = "First Period";
        prd = "1";
        output();
    }
    if (per == "2"){
        per = "Second Period";
        prd = "1";
        output();
    }
    if (per == "3"){
        per = "Third Period";
        prd = "1";
        output();
    }
    if (per == "4"){
        per = "Fourth Period";
        prd = "1";
        output();
    }
    if (per == "5"){
        per = "Fifth Period";
        prd = "1";
        output();
    }
    if (per == "6"){
        per = "Sixth Period";
        prd = "1";
        output();
    }
    if (per == "7"){
        per = "Seventh Period";
        prd = "1";
        output();
    }
    if (per == "8"){
        per = "Eighth Period";
        prd = "1";
        output();
    }
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
    ofstream outputFile;
    outputFile.open("Slide.html");
    outputFile <<" <!DOCTYPE HTML> "<< endl;
    outputFile <<"<html lang=\"en\">"<< endl;
    outputFile <<"<head>"<< endl;
    outputFile <<"<meta charset=\"utf-8\">"<< endl;
    outputFile <<"<title>Welcome!</title>"<< endl;
    outputFile <<"<style type=\"text/css\">"<< endl;
    outputFile <<"#titl3r {"<< endl;
    outputFile <<"width: 100%;"<< endl;
    outputFile <<"    text-align: center;"<< endl;
    outputFile <<"color: white;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"button {"<< endl;
    outputFile <<"    -webkit-appearance: none;"<< endl;
    outputFile <<"    background-image: none;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#coul {"<< endl;
    outputFile <<"background-size: 100%;"<< endl;
    outputFile <<"background-attachment: fixed;"<< endl;
    outputFile <<"background-image: url(/pics/bg/main.png);"<< endl;
    outputFile <<"font-family: robo;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"body {background-color: lightblue}"<< endl;
    outputFile <<"#smul {"<< endl;
    outputFile <<"position: relative;"<< endl;
    outputFile <<"top: 50%;"<< endl;
    outputFile <<"left: 33%;"<< endl;
    outputFile <<"text-align: center;"<< endl;
    outputFile <<"width: 600px;"<< endl;
    outputFile <<"color: white;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#maintitle {"<< endl;
    outputFile <<"font-size: 70px;"<< endl;
    outputFile <<"color: white;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#undertitle {"<< endl;
    outputFile <<"font-size: 40px;"<< endl;
    outputFile <<"color: white;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#midy1 {"<< endl;
    outputFile <<" margin: 6%;"<< endl;
    outputFile <<"position: relative;"<< endl;
    outputFile <<"left: 43%;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#midy {"<< endl;
    outputFile <<"margin: 6%;"<< endl;
    outputFile <<"position: relative;"<< endl;
    outputFile <<"left: 42%;"<< endl;
    outputFile <<"width: 200px;"<< endl;
    outputFile <<"text-align: center;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#tp1 {"<< endl;
    outputFile <<"background-color: lightgreen;"<< endl;
    outputFile <<"font-family: robo;"<< endl;
    outputFile <<"font-size: 37px;"<< endl;
    outputFile <<"color: black;"<< endl;
    outputFile <<"padding-left: 3px;"<< endl;
    outputFile <<"width: 900px;"<< endl;
    outputFile <<"border-radius: 4px;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#tpDayte{"<< endl;
    outputFile <<"position: absolute;"<< endl;
    outputFile <<"top: 2%;"<< endl;
    outputFile <<"left: 78%;"<< endl;
    outputFile <<"border-radius: 7px;"<< endl;
    outputFile <<"width: 200px;"<< endl;
    outputFile <<"color: white;"<< endl;
    outputFile <<"font-family: robothin;"<< endl;
    outputFile <<"background-color: darkgrey;"<< endl;
    outputFile <<"height: 180px;"<< endl;
    outputFile <<"font-size: 25px;"<< endl;
    outputFile <<"padding-left: 3px;"<< endl;
    outputFile <<"text-align: center;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#tdddt {"<< endl;
    outputFile <<" width: 350px;"<< endl;
    outputFile <<"position: relative;"<< endl;
    outputFile <<"left: 20%;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#prpr {"<< endl;
    outputFile <<"width: 350px;"<< endl;
    outputFile <<"position: relative;"<< endl;
    outputFile <<"left: 4%;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#gtgtrd {"<< endl;
    outputFile <<"color: black;"<< endl;
    outputFile <<"font-family: bold;"<< endl;
    outputFile <<"font-size: 24px;"<< endl;
    outputFile <<"background-color: orange;"<< endl;
    outputFile <<"border-radius: 7px;"<< endl;
    outputFile <<"padding: 4px;"<< endl;
    outputFile <<"box-shadow: 0 9px 10px rgba(0,0,0,0.3);"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#tdos {"<< endl;
    outputFile <<"width: 350px;"<< endl;
    outputFile <<"position: relative;"<< endl;
    outputFile <<"left: 4%;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#prepra {"<< endl;
    outputFile <<"font-family: bold;"<< endl;
    outputFile <<"font-size: 40px;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#gtgtrdmid {"<< endl;
    outputFile <<"color: black;"<< endl;
    outputFile <<"font-family: bold;"<< endl;
    outputFile <<"font-size: 24px;"<< endl;
    outputFile <<"background-color: yellow;"<< endl;
    outputFile <<"border-radius: 7px;"<< endl;
    outputFile <<"padding: 4px;"<< endl;
    outputFile <<" box-shadow: 0 9px 10px rgba(0,0,0,0.3);"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#PictuWC {"<< endl;
    outputFile <<"position: absolute;"<< endl;
    outputFile <<"top: 45%;"<< endl;
    outputFile <<"left: 68%;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"#bactoo {"<< endl;
    outputFile <<"background-size: 100%;"<< endl;
    outputFile <<"}"<< endl;
    outputFile <<"</style>"<< endl;
    outputFile <<"</head>"<< endl;
    outputFile <<"<body>"<< endl;
    outputFile <<"<div id=\"tp\">"<< endl;
    outputFile <<"<div id=\"tp1\">"<< endl;
    outputFile <<"<h1>Welcome To " << per << " "<< classy << "</h1>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"<div id=\"tpDayte\">"<< endl;
    outputFile <<"<h2 id=\"datnt\">" << date << endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"<div id=\"prpr\">"<< endl;
    outputFile <<"<div id=\"titler\">"<< endl;
    outputFile <<"<h2 id=\"prepra\">Prepare</h2>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"<div id=\"gtgtrd\">"<< endl;
    outputFile <<"<p>" << ppr << "</p>" << endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"<div id=\"tdddt\">"<< endl;
    outputFile <<"<div id=\"titler\">"<< endl;
    outputFile <<"<h2 id=\"prepra\">Today We Will</h2>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"<div id=\"gtgtrdmid\">"<< endl;
    outputFile <<"<p>"<< plan <<"</p>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"<div id=\"tdos\">"<< endl;
    outputFile <<"<div id=\"titler\">"<< endl;
    outputFile <<"<h2 id=\"prepra\">Homework</h2>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"<div id=\"gtgtrd\">"<< endl;
    outputFile <<"<p>"<< tds <<"</p>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"</div>"<< endl;
    outputFile <<"</body>"<< endl;
    outputFile.close();

    cout << "The slide is under Slide.html where this program is located." << '\n';
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
    cout << "                Enter The TODO/homework line                   " << '\n';
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
        cout << "                            I am a 7th grader                             " << '\n';
        cout << "     I have learned HTML, CSS, Python, Php, and C++, Javascript and swift " << '\n';
        cout << "                      I Made this for my teachers                         " << '\n';
    }

}
