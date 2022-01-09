#pragma once
#include "Includes.h"

void questions() {

	#pragma region Preparation
	vector<string> questionsRonny{};
	vector<string> questionsPernille{};

	ifstream toRonny("Pernille.txt", ios::in);
	ifstream toPernille("Ronny.txt", ios::in);

	string buff{};
	bool ronny{ true };

	//Make vector to Ronny
	questionsRonny.clear();
	while ((getline(toRonny, buff)))
		questionsRonny.push_back(buff);

	//Make vector to Pernille
	questionsPernille.clear();
	while ((getline(toPernille, buff)))
		questionsPernille.push_back(buff);

	//random shuffle the vectors
	shuffle(questionsRonny.begin(), questionsRonny.end(), random_device());
	shuffle(questionsPernille.begin(), questionsPernille.end(), random_device());
	#pragma endregion
	
	//Velkommen
	cout << "Gratullerer med 5 aar, Ronny & Pernille^^";
	system("pause > 0");
	system("cls");

	for (size_t i = 0; i < questionsRonny.size();)
	{
		cout << i + 1 << ")" << endl << endl;

		if (ronny)
		{
			cout << "Ronny, " << questionsRonny[i];

			char MenuSelect = tolower(_getch());
			switch (MenuSelect)
			{
			case 13:
				ronny = false;
				break;
			case 8:
				if (i > 0)
				{
					ronny = false;
					i--;
				}
				break;
			default:
				break;
			}
		}
		else
		{
			cout << "Pernille, " << questionsPernille[i];
			
			char MenuSelect = tolower(_getch());
			switch (MenuSelect)
			{
			case 13:
				ronny = true;
				i++;
				break;
			case 8:
				ronny = true;
				break;
			default:
				break;
			}
		}
		system("cls");
	}
}