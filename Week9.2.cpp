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
    int score=0;
    int checkanswer[10]= {3,2,2,2,3,3,1,3,1,3};
    Quiz q[] = {
			{"What is the smallest country?","USA","India","Vatican City"},
				{"What is the largest country?","USA","Russia","India"},
					{"What is the biggest animal in the world?","Elephant","Blue whale","Great white shark"},
						{"What is the lightest element?","Helieum","Hydrogen","Oxygen"},
							{ "What has Micheal Faraday discoverd?","Love","Myself","Dynamo"},
								{"What is the capital of Australia?","Vienna","Kabul","Canberra"},
									{"What is the capital of Chile?","Santiago","Bogota","Havana"},
										{"What is the fastest animal of the world?","Cheetah","Brown Hare","Peregrine Falcon"},
											{ "Who was build a Iphone?","Steve Jobs","Mark Zuckerberg","John Lennon"},
												{"What is the inequalation?","1 = 0.99999..","0! = 1","22/7 = 3.14"},
	};
    int i=0;
    do {
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
    cout << endl << endl;
    i++;
    } while(i<10);
	cout << "Total score : " << score << "/10" << endl;
}
