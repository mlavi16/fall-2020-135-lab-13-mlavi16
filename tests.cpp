#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"

TEST_CASE("printRange(left, right)") {
    CHECK(printRange(-5, 5) == "-5 -4 -3 -2 -1 0 1 2 3 4 5 ");
    CHECK(printRange(0, 2) == "0 1 2");
    CHECK(printRange(0, 0) == "0 ");
    CHECK(printRange(5, 4) == "");
}