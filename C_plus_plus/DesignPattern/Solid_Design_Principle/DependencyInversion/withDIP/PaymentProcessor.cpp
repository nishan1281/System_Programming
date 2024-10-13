//
// Created by nisha on 10/13/2024.
//

// PaymentProcessor.cpp
#include "PaymentProcessor.h"

PaymentProcessor::PaymentProcessor(std::unique_ptr<IPaymentMethod> method)
    : paymentMethod(std::move(method)) {}

void PaymentProcessor::processPayment(int amount) {
    paymentMethod->pay(amount);
}
