#ifndef STATS_TEST_H
#define STATS_TEST_H

#include <iostream>
#include <cxxtest/TestSuite.h>

#include "array-stats.cpp"

using namespace std;

// This requires CxxTest to be installed!
// For this CPPVideos example, navigate your terminal to CPPVideos and type:
// git submodule add https://github.com/CxxTest/cxxtest.git
// This will add the public CxxTest repository INSIDE the current repo.
// The current Makefile in this directory assumes cxxtest is a folder one
// level down.


class MyArraySum : public CxxTest::TestSuite {
public:
  void testSum1() {
    int a[] = {1,2,3};
    TS_ASSERT_EQUALS(arraySum(a, 3), 6);
  }
  
  void testSum2() {
    int a[] = {};
    TS_ASSERT_EQUALS(arraySum(a, 0), 0);
  }
  
};

class MyArrayMean : public CxxTest::TestSuite {
public:
  void testMean1() {
    int a[] = {1,2,3};
    TS_ASSERT_DELTA(arrayMean(a, 3), 2, 0.0001);
  }
  
  void testMean2() {
    int a[] = {};
    TS_ASSERT_DELTA(arrayMean(a, 0), 0, 0.0001);
  }
  
};

class MyArrayMin : public CxxTest::TestSuite {
public:
  void testMean1() {
    int a[] = {1};
    TS_ASSERT_DELTA(arrayMean(a, 1), 1, 0.0001);
  }
  
  void testMean2() {
    int a[] = {5,5};
    TS_ASSERT_DELTA(arrayMean(a, 2), 5, 0.0001);
  }
};

class MyArrayMax : public CxxTest::TestSuite {
public:
  void testMean1() {
    int a[] = {3};
    TS_ASSERT_DELTA(arrayMean(a, 1), 3, 0.0001);
  }
  
  void testMean2() {
    int a[] = {10,10};
    TS_ASSERT_DELTA(arrayMean(a, 2), 10, 0.0001);
  }
};

class MyArrayStDev : public CxxTest::TestSuite {
public:
  void testMean1() {
    int a[] = {1,2};
    TS_ASSERT_DELTA(arrayMean(a, 2), 2.5, 0.0001);
  }
  
  void testMean2() {
    int a[] = {2,2};
    TS_ASSERT_DELTA(arrayMean(a, 2), 2, 0.0001);
  }
};

class MyArrayCount : public CxxTest::TestSuite {
public:
  void testMean1() {
    int a[] = {5,5,5};
    TS_ASSERT_DELTA(arrayMean(a, 3), 5, 0.0001);
  }
  
  void testMean2() {
    int a[] = {2,2,2,2};
    TS_ASSERT_DELTA(arrayMean(a, 4), 2, 0.0001);
  }
};


#endif