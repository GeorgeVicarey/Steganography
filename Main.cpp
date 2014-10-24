/*
 * Main.cpp
 *
 *  Created on: 13 Oct 2014
 *      Author: George Vicarey
 */

#include <iostream>
#include <fstream>
#include <string>
#include <bitset>


int main(){
	// Set string to be encoded
	std::string toEncode = "Stately, plump Buck Mulligan came from the	stairhead, bearing a bowl of lather on which a mirror and a razor lay crossed";

	// Open input stream
	std::ifstream in;
	in.open("Tux.ppm");

	// Open output stream
	std::ofstream out;
	out.open("EncryptedTux.ppm");

	// Declare some image specific variables
	std::string type;
	int width, height, range;

	// Read in image information
	in >> type >> width >> height >> range;

	// initialise Arrays
	// image array height * width
	std::bitset<8> image_array[height*width];

	// char array string length * 8 bits
	std::bitset<8> char_array[toEncode.length()];

	// Read out image information
	out << type << std::endl << width << " " << height << std::endl << range << std::endl;

	// Loop through and read in then out pixel values
	for (int i = 0; i < (height*width); i+=8) {
		int pixelValue;
		in >> pixelValue;

		std::bitset<8> tempBitset(pixelValue);
//		image_array[i] = tempBitset;
		std::cout << tempBitset << std::endl;

	}

	// Loop through string and print out in binary
	for (int i = 0; i < toEncode.length(); i++) {
		char_array[i] = std::bitset<8>(toEncode.c_str()[i]);
	}

	//merge arrays

	//char_array[1].1 = image_array[1].7
	//char_array[1].2 = image_array[1].8
	//char_array[1].3 = image_array[2].7
	//char_array[1].4 = image_array[2].8
	//char_array[1].5 = image_array[3].7
	//char_array[1].6 = image_array[3].8
	//char_array[1].7 = image_array[4].7
	//char_array[1].8 = image_array[4].8

//	for (int i = 0; i < sizeof(char_array); i++) {
//		int x;
//		int y;
//
//		for (int j = 0; j < 8; j++) {
//			if (j%2 == 0)
//				x = 8;
//			else
//				x = 7;
//
//			if (j == 1 || j ==2)
//				y = 1;
//			else if (j == 3 || j == 4)
//				y = 2;
//			else if (j == 5 || j == 6)
//				y = 3;
//			else if (j == 7 || j == 8)
//				y = 4;
//
//
//			if (char_array[i].test(j) == true)
//				image_array[y].set(x,true);
//			else if (char_array[i].test(j) == false)
//				image_array[y].set(x,false);
//		}
//	}

	// write new array to file
	for(int i = 0; i < sizeof(image_array); i++) {
//		int x = static_cast<int>(image_array[i].to_ulong());
		//std::cout << image_array[i] << std::endl;
	}

	return 0;
}
