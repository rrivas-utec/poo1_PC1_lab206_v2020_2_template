//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p2.h"

TEST_CASE("Pregunta # 2") {
    redirect_io_t r;
    string result;

    r << 11;
    pregunta_2();
    string text_out;
    while (r.getline(result))
        text_out += result + "\n";
    r.reestablish();
    cout << text_out;

    r.redirect();
    r << 4;
    pregunta_2();
    r.getline(result);
    REQUIRE((result == "Ingrese n: ****" || result == "Ingrese n: * * * *" || result == "****" || result == "* * * *"));
    r.getline(result);
    REQUIRE((result == "*++*" || result == "* + + *"));
    r.getline(result);
    REQUIRE((result == "*++*" || result == "* + + *"));
    r.getline(result);
    REQUIRE((result == "****" || result == "* * * *"));
    r.reestablish();
    r.redirect();
    r << 3;
    pregunta_2();
    r.getline(result);
    REQUIRE((result == "Ingrese n: ***" || result == "Ingrese n: * * *" || result == "***" || result == "* * *"));
    r.getline(result);
    REQUIRE((result == "*+*" || result == "* + *"));
    r.getline(result);
    REQUIRE((result == "***" || result == "* * *"));
    r.reestablish();
    r.redirect();
    r << 6;
    pregunta_2();
    r.getline(result);
    REQUIRE((result == "Ingrese n: ******" || result == "Ingrese n: * * * * * *" || result == "******" || result == "* * * * * *"));
    r.getline(result);
    REQUIRE((result == "*    *" || result == "*         *"));
    r.getline(result);
    REQUIRE((result == "* ++ *" || result == "*   + +   *"));
    r.getline(result);
    REQUIRE((result == "* ++ *" || result == "*   + +   *"));
    r.getline(result);
    REQUIRE((result == "*    *" || result == "*         *"));
    r.getline(result);
    REQUIRE((result == "******" || result == "* * * * * *"));
    r.reestablish();
    r.redirect();
    r << 11;
    pregunta_2();
    r.getline(result);
    REQUIRE((result == "Ingrese n: ***********" || result == "Ingrese n: * * * * * * * * * * *" || result == "***********" || result == "* * * * * * * * * * *"));
    r.getline(result);
    REQUIRE((result == "*         *" || result == "*                   *"));
    r.getline(result);
    REQUIRE((result == "*         *" || result == "*                   *"));
    r.getline(result);
    REQUIRE((result == "*         *" || result == "*                   *"));
    r.getline(result);
    REQUIRE((result == "*         *" || result == "*                   *"));
    r.getline(result);
    REQUIRE((result == "*    +    *" || result == "*         +         *"));
    r.getline(result);
    REQUIRE((result == "*         *" || result == "*                   *"));
    r.getline(result);
    REQUIRE((result == "*         *" || result == "*                   *"));
    r.getline(result);
    REQUIRE((result == "*         *" || result == "*                   *"));
    r.getline(result);
    REQUIRE((result == "*         *" || result == "*                   *"));
    r.getline(result);
    REQUIRE((result == "***********" || result == "* * * * * * * * * * *"));
}
