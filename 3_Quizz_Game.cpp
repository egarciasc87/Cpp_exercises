#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main()
{
    string questions[] = {"What year was C++ created?",
                            "Who invented C++?",
                            "What is the predecessor off C++?",
                            "Is the Earth flat?",
                            "Which is a high level programming language?"};
    string options[5][4] = {{"A. 1969", "B. 1975", "C. 1985", "D. 1989"},
                            {"A. G. van Rossum", "B. B. Stroustrup", "C. J. Carmack", "D. M. Sukerberg"},
                            {"A. C", "B. C+", "C. C--", "D. B++"},
                            {"A. Yes", "B. No", "C. Sometimes", "D. What's Earth?"},
                            {"A. C++", "B. Assembler", "C. C", "D. Java"}};
    char answers[] = {'C', 'B', 'A', 'B', 'D'};

    int numberQuestions = sizeof(questions)/sizeof(string);
    int size = sizeof(questions)/sizeof(string);
    char guess;
    int score;

    for (int i=0; i<numberQuestions; i++)
    {
        cout<<"Question #"<<i+1<<"\n";
        cout<<questions[i]<<"\n";

        for (int j=0; j<sizeof(options[i])/sizeof(string); j++)
        {
            cout<<options[i][j]<<"\n";
        }

        cout<<"Enter answer: ";
        cin>>guess;

        if (toupper(guess) == answers[i])
        {
            score++;
            cout<<"CORRECT...!!!\n\n";
        }
        else
        {
            cout<<"Incorrect...!!!\n\n";
        }
    }

    cout<<"Final score: "<<score<<" out of "<<numberQuestions<<std::endl;
    cout<<"Final score: "<<((double)score/numberQuestions)*100<<"%";
}