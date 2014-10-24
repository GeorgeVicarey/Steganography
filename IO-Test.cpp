///*
// * Main.cpp
// *
// *  Created on: 13 Oct 2014
// *      Author: George Vicarey
// */
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <bitset>
//
//
//int main(){
//	std::string toEncrypt = "Stately, plump Buck Mulligan came from the	stairhead, bearing a bowl of lather on which a mirror and a razor lay crossed";
//
//	std::ifstream in;
//	in.open("Tux.ppm");
//
//	std::ofstream out;
//	out.open("EncryptedTux.ppm");
//
//	std::string type;
//	int width, height, range;
//
//	in >> type >> width >> height >> range;
//
//	out << type << std::endl << width << " " << height << std::endl << range << std::endl;
//
//	for (int i = 0; i < (height*width); i++) {
//		int r, g, b;
//
//		in >> r >> g >> b;
//
//		out << r << std::endl << g << std::endl << b << std::endl;
//	}
//
//	return 0;
//}
