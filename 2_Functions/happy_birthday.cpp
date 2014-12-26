#include <iostream>

using namespace std;

void print_start()
{
	cout << "Happy birthday,";
}

void print_to_you()
{
	cout << " to you." << endl;
}

void print_dear()
{
	cout << " dear Sam." << endl;
}

void print_part_1()
{
	print_start();
	print_to_you();
}

void print_part_2()
{
	print_start();
	print_dear();
}

int main()
{
	print_part_1();
	print_part_1();
	print_part_2();
	print_part_1();

	return 0;
}
