#include <iostream>
#include <time.h>
#include <string>
#include<string.h>
#include<ctype.h>
#include <windows.h>
#include <MMSystem.h>
using namespace std;

//Question One (one word response that will accept all upper case or all lowercase of answer)
bool questionOne (string answer)
{
    int score = 0;

    if ((answer == "OAKS") || (answer == "oaks"))
    {
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC); //Challenge 6 including all others
        score += 1;
        return true;
    }
    else
    {
        Beep(700, 500); //Challenge 6 including all others
        cin.get();
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
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mBetter Luck Next Time\033[0m\t\t");   //Challenge Three including all others
        break;
    case 4:
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        cout << "Correct Answer!";
        score += 2;
        break;
    case 3:
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mVery Close!\033[0m\t\t");
        break;
    case 2:
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mTry Again\033[0m\t\t");
        break;
    default:
        cout << to_string(number) + " is not an answer";
    }
    return score;
}

//Question Three (binary conversion question)
bool questionThree (int b)
{
    int score = 0;

    if (b == 10101) 
    {
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        score +=3;
        return true;
    }
    else
    {
        Beep(700, 500);
        cin.get();
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
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        cout << "Correct";
        score += 4;
    }
    else if ((correct == "False") || (correct == "false"))
        {
            Beep(700, 500);
            cin.get();
            printf("\x1B[31mIncorrect\033[0m\t\t");
        }
    else
    {

        cout << (correct) + " is not an answer";
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
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    case 'M':
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        cout << "Correct!";
        score += 5;
        break;
    case 'I':
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    case 'K':
        Beep(700, 500);
        cin.get();
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
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        cout << "Correct!";
        score += 6;
        break;
    case 1900:
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    case 1763:
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mIncorrect\033[0m\t\t");
        break;
    case 1923:
        Beep(700, 500);
        cin.get();
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
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        cout << "Correct!";
        score += 3;
    }
    else if (number % 3 == 0)
    {
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mVery Close!\033[0m\t\t");
        score += 1;
    }
    else if (number % 5 == 0)
    {
        Beep(700, 500);
        cin.get();
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
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        cout << "First letter is capitalized! Great Job!";
        score += 7;
    }
    try {
        if (islower(word[0]))
        {
            Beep(700, 500);
            cin.get();
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
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        cout << "Correct";
        score += 8;
    }
    else if (age >= 100) 
    {
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mWay Off!\033[0m\t\t");
    }
    else if (age >= 90)
    {
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mVery very old\033[0m\t\t");
    }
    else if (age >= 80)  
    {
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mToo old\033[0m\t\t");
    }
    else if (age >= 70)
    {
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mA bit too old\033[0m\t\t");
    }
    else if (age >= 61)
    {
        Beep(700, 500);
        cin.get();
        printf("\x1B[31Close!\033[0m\t\t");
    }
    else if (age <= 50)
    {
        Beep(700, 500);
        cin.get();
        printf("\x1B[31mWay too young?\033[0m\t\t");
    }
    else if (age <= 0)
    {
        Beep(700, 500);
        cin.get();
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
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        score += 9;
        return true;
    }
    else
    {
        Beep(700, 500);
        cin.get();
        return false;
    }
    return score;
}

//Function for challenge 1
char FinalMark(int mark)
{
    if (mark == 58) 
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

//Function for challenge 5
int decToBinary(int n)
{
    // array to store binary number 
    int binaryNum[32];

    // counter for binary array 
    int i = 0;
    while (n > 0)
    {

        // storing remainder in binary array 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    // printing binary array in reverse order 
    for (int j = i - 1; j >= 0; j--)
        return binaryNum[j];
}


int main(void) 
{
    
    //variables
    string word;
    int answer, binary;
    string right;
    char reply;
    int respond;
    string test;
    bool valid = false;
    string quiz;
    int value, score = 0;
    string letter;
    int age;
    string inquiry;
    srand(time(0));
    int m = rand() % 100, truth;
    char again = 'Y';
    

    //Challenge 2
    while ((again == 'y') || (again == 'Y'))
    {
        //Challenge 4
        clock_t tStart = clock();

    //Main function for Question One
    cout << "What is the word\n";

    getline(cin, word);
    cout << questionOne(word) << endl;
    
    //Main function for Question Two
    cout << "What is 2 + 2? \n";
    cout << " A) 7" << "\n B) 4" << "\n C) 3" << "\n D) 2 \n";
    cout << "Choose your answer: \n";
    cin >> answer;
    score += questionTwo(answer);
    cout << "\n";

    //Main function for Question Three
    cout << "What is 21 in binary\n";
    cin >> binary;
    cout << questionThree(binary) << endl;

    //Main function for Question Four
    cout << "Can you turn energy into matter?\n";
    cout << "True or False\n";
    cout << "Choose your answer: \n";
    cin >> right;
    score += questionFour(right);
    cout << "\n";

    //Main function for Question Five
    cout << "What is the middle letter of the alphabet\n";
    cout << " A) N" << "\n B) M" << "\n C) I" << "\n D) K \n";
    cout << "Choose your answer: \n";
    cin >> reply;
    score += questionFive(reply);
    cout << "\n";

    //Main function for Question Six function
    cout << "When was Canada Founded?\n";
    cout << " A) 1867" << "\n B) 1900" << "\n C) 1763" << "\n D) 1923 \n";
    cout << "Choose your answer: \n";
    cin >> respond;
    score += questionSix(respond);
    cout << "\n";

    //Question Six (force the user to enter the right type of data)
    do
    {
        cout << "Who is the prime minister of Canada" << endl;
        cin.clear();
        cin.ignore(256, '\n');
        score += 10;
        getline(cin, quiz);
       
        if (quiz == "Justin Trudeau")
            valid = true;

        else
            cerr << "That is the wrong answer. Try again." << endl;
    } while (!valid);
    cout << "\n";

    //Main function for Question Seven
    cout << "Please enter a number that is both divisble by 3 and 5" << endl;
    cin >> value;
    score += questionSeven(value);
    cout << "\n";

    //Main function for Question Eight
    cout << "Please enter a word with an uppercase letter" << endl;
    cin >> letter;
    score += questionEight(letter);
    cout << "\n";

    //Main function for Question Nine
    cout << "How old is Barack Obama" << endl;
    cout << "Please enter age" << endl;
    cin >> age;
    score += questionNine(age);
    cout << "\n";

    //Main function for Question Ten
    cout << "Who is the fastest man on planet earth" << endl;
    cin >> inquiry;
    cout << questionTen(inquiry) << endl;

    //Main function for challenge 5: Does not count for score
    cout << "Convert the number: " << m << " to binary" << endl;
    cout << "Please enter answer" << endl;
    cin.clear();
    cin.ignore(256, '\n');
    cin >> truth;
    int correct = decToBinary(m);
    if (truth == correct)
    {
        Beep(700, 500);
        cout << "correct";
    }
    else
    {
        PlaySound(TEXT("correctAnswer.wav"), NULL, SND_SYNC);
        cout << "incorrect";
    }
    cout << "\n";

    //To calculate final total score
    cout << "Your final score is " << score << " out of 58" << endl;

    //To calculate final letter grade
    cout << "Your final letter grade is " << FinalMark(score) << endl;
    
    //Part of challenge 4
    printf("Time taken: %.2fs\n", (double)(clock() - tStart) / CLOCKS_PER_SEC);

    //Part of challenge 2
    cout << "Go again/ (y/n)";
    cin.clear();
    cin.ignore(256, '\n');
    cin >> again;
    }

    cout << "The end" << endl;
}


