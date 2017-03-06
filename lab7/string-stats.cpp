// Author: <fill in your name>
// Source File: string-stats.cpp
// Description: Various string statistics

#include <cmath>
#include <cctype>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

// Count the upper case characters in string st
unsigned upperCaseChars(const string& st){
	char c;
	int i = 0;
	for(unsigned n = 0; n < st.size(); n++){
		c = st[n];
		if(isupper(c)){
			i++;
		}
	}
	return i;
}

// Count the lower case characters in string st
unsigned lowerCaseChars(const string& st){
	char c;
	int i = 0;
	for(unsigned n = 0; n < st.size(); n++){
		c = st[n];
		if(islower(c)){
			i++;
		}
	}
	return i;
}

// Count the punction characters in string st
// use ispunct to determine if the character is a
// punction
unsigned numPunct(const string& st){
	char c;
	int i = 0;
	for(unsigned n = 0; n < st.size(); n++){
		c = st[n];
		if(ispunct(c)){
			i++;
		}
	}
	return i;
}

// Convert string st to uppercase returning a new 
// string
string convertToUpper(const string& st){
	string out = st;
	for(unsigned n = 0; n < st.size(); n++){
		out[n] = toupper(st[n]);
	}
	return out;
}

// Remove all the spaces (use isspace) from string st and
// return a new string
string removeSpaces(const string& st){
	int i = 0;
	string out = st;
	char c;
	for(unsigned n = 0; n < st.size(); n++){
		c = st[n];
		if(isspace(c) == false){
			out[i] = c; // Set out[i] to temp char if it isn't a space
			i++; // increase i
		}
	}
	out.resize(i);
	return out;
}

// Count the number of words in a string st
unsigned numWords(const string& st){
	if(st.size() > 0){ // If size is 0 then return 0
		int i = 0;
		for(unsigned n = 0; n < st.size(); n++){
			if(isalpha(st[n])){
				if(!isalpha(st[n+1])){
					i++;
				}
			}
		}
		return i;
	}
	return 0;
}


// Count the individual alphabetic characters
// Treat lowercase and uppercase the same
vector<int> characterCounts(const string& st){
  vector<int> ret(26);
  char c;
  int a;
  for(unsigned n = 0; n<st.size();n++){
  	c = st[n];
  	if(isalpha(c)){
  		if(isupper(c)) c = tolower(st[n]);
  		a = (int)c - 97;
  		ret[a] = ret[a] + 1;
  	}
  }
  return ret;
}















































































































































































































































































































































































































































