#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "recursion.h"

TEST_CASE("printRange(left, right)") {
    CHECK(printRange(-5, 5) == "-5 -4 -3 -2 -1 0 1 2 3 4 5 ");
    CHECK(printRange(0, 2) == "0 1 2 ");
    CHECK(printRange(0, 0) == "0 ");
    CHECK(printRange(5, 4) == "");
}

TEST_CASE("sumRange(left, right") {
    CHECK(sumRange(-2, 10) == 52);
    CHECK(sumRange(-3, 3) == 0);
    CHECK(sumRange(4, 5) == 9);
    CHECK(sumRange(1, 3) == 6);
    CHECK(sumRange(-10, -8) == -27);

    CHECK(sumRange(4, 4) == 4);
    CHECK(sumRange(0, 0) == 0);

    CHECK(sumRange(5, 3) == 0); //range is empty
}

TEST_CASE("sumArray(arr, size)") {
    int arr[] = {1, 5, 9, -10, 17, 3};
    CHECK(sumArray(arr, 0) == 0);
    CHECK(sumArray(arr, -2) == 0);
    CHECK(sumArray(arr, 1) == 1);
    CHECK(sumArray(arr, 5) == 22);
    CHECK(sumArray(arr, 6) == 25);
}

TEST_CASE("isAlphanumeric(str)") {
    CHECK(isAlphanumeric("ERTSDsdfjlk") == true);
    CHECK(isAlphanumeric("48532") == true);
    CHECK(isAlphanumeric("Wow99") == true);
    CHECK(isAlphanumeric("") == true);

    CHECK(isAlphanumeric("hello world") == false);
    CHECK(isAlphanumeric("yay!") == false);
    CHECK(isAlphanumeric(".asdfgh") == false);
}

TEST_CASE("nestedParens(str)") {
    CHECK(nestedParens("") == true);
    CHECK(nestedParens("()") == true);
    CHECK(nestedParens("(((())))") == true);

    std::string s = "";
    for (int i = 0; i < 20; i++) {
        s = std::string(i, '(') + std::string(i, ')');
        CHECK(nestedParens(s) == true);
    }

    CHECK(nestedParens(" ") == false);
    CHECK(nestedParens("abc123") == false);
    CHECK(nestedParens("( )") == false);
    CHECK(nestedParens("(a)") == false);
    CHECK(nestedParens("(()") == false);
    CHECK(nestedParens("())") == false);
    CHECK(nestedParens(")(") == false);
}