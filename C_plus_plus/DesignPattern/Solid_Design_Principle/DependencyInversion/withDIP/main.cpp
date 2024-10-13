//
// Created by nisha on 10/13/2024.
//
// main.cpp
#include "CreditCardPayment.h"
#include "PayPalPayment.h"
#include "PaymentProcessor.h"
#include <memory>

int main() {
    // Using CreditCardPayment
    auto creditCardPayment = std::make_unique<CreditCardPayment>();
    PaymentProcessor creditProcessor(std::move(creditCardPayment));
    creditProcessor.processPayment(100);

    // Using PayPalPayment
    auto paypalPayment = std::make_unique<PayPalPayment>();
    PaymentProcessor paypalProcessor(std::move(paypalPayment));
    paypalProcessor.processPayment(150);

    return 0;
}
