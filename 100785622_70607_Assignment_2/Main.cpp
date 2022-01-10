#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	//declare variables
	string criteria[5] = { "Idea", "Novelty", "Contribution", "Organization", "Performance" };
	double reviewer[4][5];
	double avg1 = 0, avg2 = 0, avg3 = 0, avg4 = 0, avgTotal = 0;

	//for loop runs to get user input for 2-D array
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			//asks user for input
			cout << "Reviewer #" << i + 1 << " Please enter a grade for " << criteria[j] << ": " << endl;
			cin >> reviewer[i][j];

			//checks for numbers that are not between 0-10
			while (reviewer[i][j] < 0 || reviewer[i][j] > 10)
			{
				//asks for number between 0-10
				cout << "Please enter a number between 0-10: " << endl;
				cin >> reviewer[i][j];
			}
		}

		cout << endl;
	}

	//for loop runs to get the average for each reviewer
	for (int i = 0; i <= 4; i++)
	{
		//gets each reviewers average
		avg1 += reviewer[0][i];
		avg2 += reviewer[1][i];
		avg3 += reviewer[2][i];
		avg4 += reviewer[3][i];
	}

	//finishes the average calculation
	avg1 = avg1 / 5;
	avg2 = avg2 / 5;
	avg3 = avg3 / 5;
	avg4 = avg4 / 5;

	//gets total average
	avgTotal = (avg1 + avg2 + avg3 + avg4) / 4;

	//displays each reviewers average
	cout << "\nAverage for Reviewer 1 is: " << avg1 << endl;
	cout << "Average for Reviewer 2 is: " << avg2 << endl;
	cout << "Average for Reviewer 2 is: " << avg3 << endl;
	cout << "Average for Reviewer 2 is: " << avg4 << endl;

	//displays total average
	cout << "\nTotal Average was: " << avgTotal << endl;

	//checks to see if its rejected, accepted or if its borderline
	if (avg1 < 5 || avg2 < 5 || avg3 < 5 || avg4 < 5 || avgTotal < 6)
	{
		cout << "Rejected!" << endl;
	}
	else if (avgTotal >= 6 && avgTotal < 7)
	{
		cout << "Borderline!" << endl;
	}
	else
	{
		cout << "Accepted!" << endl;
	}

	//stops showing the files
	system("pause");
}