//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p1.h"

TEST_CASE("Pregunta # 1") {
    redirect_io_t r;
    string result;

    r << 1500;
    pregunta_1();
    string text_out;
    while (r.getline(result)) {
        text_out += result + "\n";
    }
    r.reestablish();
    cout << text_out;

    // Test #1
    r.redirect();
    r << 1500;
    pregunta_1();
    r.getline(result);
    REQUIRE((result == "7 billete(s) de 200 soles" || result == "Ingrese el retiro: 7 billete(s) de 200 soles"));
    r.getline(result);
    REQUIRE(result == "1 billete(s) de 100 soles");
    // Test #2
    r.reestablish();
    r.redirect();
    r << 388;
    pregunta_1();
    r.getline(result);
    REQUIRE((result == "1 billete(s) de 200 soles" || result == "Ingrese el retiro: 1 billete(s) de 200 soles"));
    r.getline(result);
    REQUIRE(result == "1 billete(s) de 100 soles");
    r.getline(result);
    REQUIRE(result == "1 billete(s) de 50 soles");
    r.getline(result);
    REQUIRE(result == "1 billete(s) de 20 soles");
    r.getline(result);
    REQUIRE(result == "1 billete(s) de 10 soles");
    r.getline(result);
    REQUIRE(result == "1 moneda(s) de 5 soles");
    r.getline(result);
    REQUIRE(result == "1 moneda(s) de 2 soles");
    r.getline(result);
    REQUIRE(result == "1 moneda(s) de 1 soles");
}
