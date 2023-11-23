// EcuacionExprtk.hpp
#pragma once

#include <exprtk.hpp>

class EcuacionExprtk {
public:
    EcuacionExprtk(const std::string& expression_str) : expression_(expression_str) {}

    double CalcularValor(double valor) const {
        symbol_table.add_variable("x", valor);
        expression_.register_symbol_table(symbol_table);

        return expression_.value();
    }

private:
    exprtk::symbol_table<double> symbol_table;
    exprtk::expression<double> expression_;
};
