#include <iostream>
#include <string>

using namespace std;

int main()
{
	//String that stores that user input phrase.
	string phrase;
	//Print obligatory first line.
	cout << "Hey Morty, we gotta greet the wo-*burp*-world Morty!" << endl << "\"He-Hello Wo-World!\"" << endl;
	//Print bonus second line.
	cout << "What do you want to tell the wo-world Mo-*burp*-Morty?" << endl;
	//Get line and store it as phrase. Was using 'cin' but it only got the first string, so after googling it I found 'getline'.
	getline (cin,phrase);
	//Print user's phrase and some added insightful commentary.
	cout << "Well that's under-*burp*-whelming, Morty." << endl; 
	cout << "Anyway, hey world what Mo-Morty said was: " << endl << "\"" + phrase + "\"" << endl;
	cout << "Ain't that a hoot and a ha-*burp*-half? Wubalubadubdub!" << endl;
	//Pause so user can admire your amazing program.
	system("pause");

	return 0;
}