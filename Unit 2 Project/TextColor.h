#pragma once
#include <iostream>
#include <string>
#include<string.h>
#include<ctype.h>
using namespace std;]

bool questionOne(string answer)
{
    int score = 0;

    if ((answer == "OAKS") || (answer == "oaks"))
    {
        score += 0.5;
        return true;
    }
    else
    {
        return false;
    }
    return score;
}

//Question Two (multiple choice question where each wrong answer has a distinct message)
int questionTwo(int number)
{
    int score = 0;

    switch (number)
    {
    case 7:
        printf("\x1B[31mBetter Luck Next Time\033[0m\t\t");
        break;
    case 4:
        cout << "Correct Answer!";
        score += 2;
        break;
    case 3:
        printf("\x1B[31mVery Close!\033[0m\t\t");
        break;
    case 2:
        printf("\x1B[31mTry Again\033[0m\t\t");
        break;
    default:
        cout << to_string(number) + " is not an answer";
    }
    return score;
}

//Question Three (binary conversion question)
bool questionThree(string word)
{
    int score = 0;

    if (word == "10101")
    {
        score += 3;
        return true;
    }
    else
    {
        return false;
    }
    return score;
}

//Question Four (true or false question)
int questionFour(string correct)
{
    int score = 0;

    if ((correct == "True") || (correct == "true"))
    {
        cout << "Correct";
        score += 4;
    }
    else if ((correct == "False") || (correct == "false"))
    {
        printf("\x1B[31mIncorrect\033[0m\t\t");
    }
    else
    {

        cout << (correct)+" is not an answer";
    }
    return score;
}
//Question Five (multiple choice with: Char selection)
int questionFive(char select)
{
    int score = 0;

    switch (select)
    {
    case 'N':
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    case 'M':
        cout << "Correct!";
        score += 5;
        break;
    case 'I':
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    case 'K':
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    default:
        cout << char(select) + " is not an answer";
    }
    return score;
}

//Question Six (multiple choice with: Int selection)
int questionSix(int selection)
{
    int score = 0;

    switch (selection)
    {
    case 1867:
        cout << "Correct!";
        score += 6;
        break;
    case 1900:
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    case 1763:
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    case 1923:
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    default:
        cout << to_string(selection) + " is not an answer";
    }
    return score;
}

//Question Seven (own question) 
int questionSeven(int number)
{
    int score = 0;

    if ((number % 3 == 0) && (number % 5 == 0))
    {
        cout << "Correct!";
        score += 2.5;
    }
    if (number % 3 == 0)
    {
        printf("\x1B[31mVery Close!\033[0m\t\t");
        score += 1;
    }
    if (number % 5 == 0)
    {
        printf("\x1B[31mVery Close!\033[0m\t\t");
        score += 1;
    }
    else
    {
        cout << to_string(number) + "is not divisible by 3 or 5";
    }
    return score;
}

//Question Eight (own question) 
int questionEight(string word)
{
    int score = 0;

    if (isupper(word[0]))
    {
        cout << "First letter is capitalized! Great Job!";
        score += 7;
    }
    try {
        if (islower(word[0]))
        {
            throw "First letter is not capitalized";
        }
    }
    catch (...)
    {

        cout << "Word is not capitalized setting first letter word too" + char((toupper(word[0])));
        cout << (word.substr(1));

    }
    return score;
}

//Question Nine (own question) 
char questionNine(int age)
{
    int score = 0;

    if (age == 60)
    {
        cout << "Correct";
        score += 8;
    }
    else if (age >= 100)
    {
        printf("\x1B[31mWay Off!\033[0m\t\t");
    }
    else if (age >= 90)
    {
        printf("\x1B[31mVery very old\033[0m\t\t");
    }
    else if (age >= 80)
    {
        printf("\x1B[31mToo old\033[0m\t\t");
    }
    else if (age >= 70)
    {
        printf("\x1B[31mA bit too old\033[0m\t\t");
    }
    else if (age >= 61)
    {
        printf("\x1B[31Close!\033[0m\t\t");
    }
    else if (age <= 50)
    {
        printf("\x1B[31mWay too young?\033[0m\t\t");
    }
    else if (age <= 0)
    {
        printf("\x1B[31mReally?\033[0m\t\t");
    }
    else
    {
        cout << to_string(age) + " is not an answer";
    }
    return score;
}

//Question Ten (own question) 
bool questionTen(string query)
{
    int score = 0;

    if ((query == "Usain Bolt") || (query == "USAIN BOLT") || (query == "usain bolt"))
    {
        return true;
        score += 9;
    }
    else
    {
        return false;
    }
    return score;
}

//Function for challenge 1
char FinalMark(int mark)
{
    if (mark == 57)
    {
        return 'S';
    }
    else if (mark >= 50)
    {
        return 'A';
    }
    else if (mark >= 40)
    {
        return 'B';
    }
    else if (mark >= 35)
    {
        return 'C';
    }
    else if (mark >= 30)
    {
        return 'D';
    }
    else if (mark >= 0)
    {
        return 'F';
    }
}