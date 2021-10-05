#include<iostream>
#include<windows.h>
using namespace std;

void setcolor(int fg,int bg){
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hConsole, bg*16+fg);
}

struct Quiz{
    string question;
    string choices1;
    string choices2;
    string choices3;
};

void askQuestion(Quiz q)
{
    cout << q.question << endl;
    cout << "1. "<< q.choices1 << endl;
    cout << "2. "<< q.choices2 << endl;
    cout << "3. "<< q.choices3 << endl;
    
}

int main()
{
    int number[10];
    int score = 0;
    int checkanswer[10]= {3,2,2,2,3,3,1,3,1,3};
    Quiz q[10];
    q[0].question="What is the smallest country?";
    q[0].choices1="USA";
    q[0].choices2="India";
    q[0].choices3="Vatican City";

    q[1].question="What is the largest country?";
    q[1].choices1="USA";
    q[1].choices2="Russia";
    q[1].choices3="India";

    q[2].question="What is the biggest animal in the world?";
    q[2].choices1="Elephant";
    q[2].choices2="Blue whale";
    q[2].choices3="Great white shark";

    q[3].question="What is the lightest element?";
    q[3].choices1="Helieum";
    q[3].choices2="Hydrogen";
    q[3].choices3="Oxygen";

    q[4].question="What has Micheal Faraday discoverd?";
    q[4].choices1="Love";
    q[4].choices2="Myself";
    q[4].choices3="Dynamo";

    q[5].question="What is the capital of Australia?";
    q[5].choices1="Vienna";
    q[5].choices2="Kabul";
    q[5].choices3="Canberra";

    q[6].question="What is the capital of Chile?";
    q[6].choices1="Santiago";
    q[6].choices2="Bogota";
    q[6].choices3="Havana";

    q[7].question="What is the fastest animal of the world?";
    q[7].choices1="Cheetah";
    q[7].choices2="Brown Hare";
    q[7].choices3="Peregrine Falcon";

    q[8].question="Who is the most handsome in this room?";
    q[8].choices1="Mod-x";
    q[8].choices2="MOD-X";
    q[8].choices3="mod-x";

    q[9].question="What is the inequalation?";
    q[9].choices1="1 = 0.99999..";
    q[9].choices2="0! = 1";
    q[9].choices3="22/7 = 3.14";
    int i=0;
    do {
    q[i].question;
    q[i].choices1;
    q[i].choices2;
    q[i].choices3;
    askQuestion(q[i]);
    cout << "Choose 1-3 :";
    cin >> number[i];
    if (number[i] == checkanswer[i])
    {
    	setcolor(2,0);
        cout << "Correct! (-:";
        setcolor(7,0);
        score++;
    }
    else {
    	setcolor(4,0);
        cout << "Incorrect! )-:"; 
        setcolor(7,0);
    }
    cout << endl;
    cout << endl;
    i++;
    } while(i<10);
	cout << "Total score : " << score << "/10" << endl;
}
