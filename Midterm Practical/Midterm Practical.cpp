
#include <iostream>
#include<string>
#include <random>

const char* winMsg = "\nCorrect!\n";
const char* loseMsg = "\nIncorrect, the answer was ";
const char* promptAnswer = "What is your answer? ";

class Question {
private:
    std::string Question_text;
    std::string answer1;
    std::string answer2;
    std::string answer3;
    std::string answer4;
    int correct_answer = 0;
public:
     void Ask();
     void SetQuestion(std::string q, std::string a1, std::string a2, std::string a3,
         std::string a4, int ca);
};

int main()
{
    srand(time(0));
    int rng = (rand() % 4) + 1;

    Question q1, q2, q3, q4;

    switch (rng) {
    case 1:
        q1.SetQuestion("What is the capital of Norway?\n", "Bergen\n", "Oslo\n",
            "Stavanger\n", "Tornsberg\n", 2);
        q1.Ask();
        break;
    case 2:
        q2.SetQuestion("What is the Continent with most population?\n", "North America\n",
            "South America\n", "Europe\n", "Asia\n", 4);
        q2.Ask();
        break;
    case 3:
        q3.SetQuestion("In what year was the term Manga first coined?\n", "1950\n",
            "1798\n", "1814\n", "1996\n", 2);
        q3.Ask();
        break;
    case 4:
        q4.SetQuestion("First Video Game?\n", "Pong\n", "Space Invaders\n",
            "Bertie the Brain\n", "Pac-Man\n", 3);
        q4.Ask();
        break;
    }
}

void Question::Ask() {

    std::cout << Question_text;
    std::cout << "1) " << answer1;
    std::cout << "2) " << answer2;
    std::cout << "3) " << answer3;
    std::cout << "4) " << answer4;
    std::cout << std::endl;

    int guess;
    std::cout << promptAnswer;
    std::cin >> guess;
    if (guess == correct_answer) {
        std::cout << winMsg;
    }
    else {
        std::cout << loseMsg << correct_answer << ".\n";
    }
 }

void Question::SetQuestion(std::string q, std::string a1, std::string a2, std::string a3,
    std::string a4, int ca) {
    Question_text = q;
    answer1 = a1;
    answer2 = a2;
    answer3 = a3;
    answer4 = a4;
    correct_answer = ca;
}