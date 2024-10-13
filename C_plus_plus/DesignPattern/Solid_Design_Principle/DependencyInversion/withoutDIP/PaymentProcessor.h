//
// Created by nisha on 10/13/2024.
//

#pragma once
#include "CreditCardPayment.h"
#include "iostream"
#include "PayPalPayment.h"

class PaymentProcessor {
public:
    void processPayment(const std::string& method, int amount);
};


