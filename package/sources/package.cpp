#include <iostream>
using namespace std;



/* Commify
  - Add commas between big numbers
  - SOURCES
	* https://stackoverflow.com/questions/15513725/comma-formatting-for-numbers-in-c
*/

string commify(unsigned long long int number, char sep=','){
	string text;
	int cnt = 0;
	do{
		text.insert(0, 1, char('0' + number % 10));
		number /= 10;
		if (++cnt == 3 && number){
			text.insert(0, 1, sep);
			cnt = 0;
		}
	} while (number);
	return text;
}

