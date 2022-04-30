#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Functions.cpp"
#include "Functions.hpp"

TEST_CASE( "Arguments initialized") {
    int c1 = -3;
    int c2 = 0;
    int c3 = 99;
    REQUIRE( SqrtCheck(c1) == false);
    REQUIRE( SqrtCheck(c2) == true);
    REQUIRE( SqrtCheck(c3) == true);
}
