#ifndef STRING_STATS_TEST_H
#define STRING_STATS_TEST_H

#include <iostream>
#include <vector>
#include <cxxtest/TestSuite.h>

#include "string-stats.cpp"

using namespace std;

// This requires CxxTest to be installed!
// For this CPPVideos example, navigate your terminal to CPPVideos and type:
// git submodule add https://github.com/CxxTest/cxxtest.git
// This will add the public CxxTest repository INSIDE the current repo.
// The current Makefile in this directory assumes cxxtest is a folder one
// level down.


class NumLower : public CxxTest::TestSuite {
public:
  void testLower1() {
    TS_ASSERT_EQUALS(lowerCaseChars(""), 0);
  }
  
  void testLower2() {
    TS_ASSERT_EQUALS(lowerCaseChars("This is some text."), 13);
  }
  
  void testLower3() {
    TS_ASSERT_EQUALS(lowerCaseChars("Line1\nLine2"), 6);
  }
  
  void testLower4() {
    TS_ASSERT_EQUALS(lowerCaseChars("Line1\nLine2\n"), 6);
  }
  
  void testLower5() {
    TS_ASSERT_EQUALS(lowerCaseChars("Line1\nLine2\nLine3\nLine4"), 12);
  }
};

class NumUpper : public CxxTest::TestSuite {
public:
  void testUpper1() {
    TS_ASSERT_EQUALS(upperCaseChars(""), 0);
  }
  
};

class NumWords : public CxxTest::TestSuite {
public:
  void testWords1() {
    TS_ASSERT_EQUALS(numWords(""), 0);
  }
  
  void testWords2() {
    TS_ASSERT_EQUALS(numWords("Line1\nLine2\n"), 2);
  }
  
};

class NumPunct : public CxxTest::TestSuite {
public:
  void testNumPunct1() {
    TS_ASSERT_EQUALS(numPunct(""), 0);
  }
  
};

class CharCounts : public CxxTest::TestSuite {
public:
  void testCharCounts1() {
    vector<int> counts = characterCounts("");
    TS_ASSERT_EQUALS(counts.size(), 26);
    for(int i = 0; i < 26; i++){
      TS_ASSERT_EQUALS(counts[i], 0);
    }
  }
  
  void testCharCounts2() {
    vector<int> counts = characterCounts("abcdabcaba");
    TS_ASSERT_EQUALS(counts.size(), 26);
    TS_ASSERT_EQUALS(counts['a' - 'a'], 4);
    TS_ASSERT_EQUALS(counts['b' - 'a'], 3);
    TS_ASSERT_EQUALS(counts['c' - 'a'], 2);
    TS_ASSERT_EQUALS(counts['d' - 'a'], 1);
    TS_ASSERT_EQUALS(counts['e' - 'a'], 0);
  }
  
};


#endif