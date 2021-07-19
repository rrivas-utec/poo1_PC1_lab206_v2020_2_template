//
// Created by rudri on 9/12/2020.
//
#include "catch.hpp"
#include "redirect_io.h"
#include "p3.h"

TEST_CASE("Pregunta # 3") {

    int repeticiones = 0;
    contar_repeticiones_collatz(100, &repeticiones);
    REQUIRE(repeticiones == 25);

    redirect_io_t r;
    string result;

    r << 21;
    pregunta_3();
    string text_out;
    while (r.getline(result))
        text_out += result + "\n";
    r.reestablish();
    cout << text_out;

    r.redirect();
    r << 21;
    pregunta_3();
    r.getline(result);
    REQUIRE((result == "Ingrese un numero: # de Operaciones: 7" || result == "# de Operaciones: 7"));
    r.reestablish();
    r.redirect();
    r << 12;
    pregunta_3();
    r.getline(result);
    REQUIRE((result == "Ingrese un numero: # de Operaciones: 9" || result == "# de Operaciones: 9"));
    r.reestablish();
    r.redirect();
    r << 100;
    pregunta_3();
    r.getline(result);
    REQUIRE((result == "Ingrese un numero: # de Operaciones: 25" || result == "# de Operaciones: 25"));
}
