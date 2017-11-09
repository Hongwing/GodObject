#include <iostream>
#include <godobject.h>

using namespace std;

class Person: public GodObject<Person> {};


int main(void) {

	Person::Description();
	GodObject<Person>::Description();

	return 0;
}