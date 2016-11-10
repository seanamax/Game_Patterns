
//
// Created by Chris on 16/10/18.
//

#include "gtest/gtest.h"
#include "Command_Pattern.h"
#include <assert.h>

using namespace std;

TEST(DEBUG_TEST, ASSERT_TEST)
{
    assert(0 && "TEST(DEBUG_TEST, ASSERT_TEST)");
}