#include "gtest/gtest.h"
#include "mockbar.h"

// The fixture for testing class Foo.
class IntervalsTest : public ::testing::Test {

protected:

    // You can do set-up work for each test here.
    IntervalsTest();

    // You can do cHeapTestlean-up work that doesn't throw exceptions here.
    virtual ~IntervalsTest();

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    // Code here will be called immediately after the constructor (right
    // before each test).
    virtual void SetUp();

    // Code here will be called immediately after each test (right
    // before the destructor).
  
};
