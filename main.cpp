#include <iostream>
#include <vector>
using namespace std;

class Item {
protected:
	string color;
	double length;
	string description;
public:
	void setColor(string);
	void setLength(double);
	void setDescription(string);
	string getColor();
	double getLength();
	string getDescription();
	Item(string, double, string);
	void printItem();
};

class Shell : public Item {
protected:
	double height;
public:
	vector<string> colorVector;
	vector<double> lengthVector;
	vector<string> descVector;
	vector<double> heightVector;
	void setHeight(double);
	double getHeight();
	void printShell();
	Shell(string, double, string, double);
};

int main() {
	string input;

	Shell shellObj(string, double, string, double);

	do {
		cout << "ITEM MENU:" << endl;
		cout << "(1) Shells" << endl;

		cout << "\nSelect item number, or 'N' to exit => ";
		cin >> input;

		if (input == "1") {

			/*
			white, concave, 3 inches long, .5 inches high
			circular, pink, 2 inches long, .25 inches high
			orange, .25 inches high, flat, .5 inches long
			brown, convex, 1 inches long, .25 inches high
			white, 3 inches long, concave, 1.5 inches high
			 */

			cout << shellObj.colorVector[0];
		} else if (input == "2") {

		}

	} while (input != "N" || input != "n");

	return 0;
}


// ITEM HEADER ///////////////////////////////////////////////////////////

Item::Item(string color, double length, string description) {
	this->color = color;
	this->length = length;
	this->description = description;
}
void Item::setColor(string color) {
	this->color = color;
}
void Item::setLength(double length) {
	this->length = length;
}
void Item::setDescription(string description) {
	this->description = description;
}
string Item::getColor() {
	return color;
}
double Item::getLength() {
	return length;
}
string Item::getDescription() {
	return description;
}
void Item::printItem() {
	cout << "Color: " << color;
	cout << "\nLength: " << length;
	cout << "\nDescription: " << description << endl;
}

// SHELL HEADER ///////////////////////////////////////////////////////////

Shell::Shell(string color, double length, string description, double height)
	: Item(color, length, description)
{
	colorVector = {"white","pink","orange","brown","clear","green","black","tan"};
	lengthVector = {3, 2, 0.25, 1, 6, 4.5, 2.5, 10, 12, 8.5};
	descVector = {"concave","circular","flat","convex","solid","grass-like","wiggly","light","variagated","medium"};
	heightVector = {.5, .25, 1.5};

	this->color = color;
	this->length = length;
	this->description = description;
	this->height = height;
}
void Shell::setHeight(double height) {
	this->height = height;
}
double Shell::getHeight() {
	return height;
}
void Shell::printShell() {
	cout << "Color: " << color;
	cout << "\nLength: " << length;
	cout << "\nDescription: " << description;
	cout << "\nHeight: " << height << endl;
}
