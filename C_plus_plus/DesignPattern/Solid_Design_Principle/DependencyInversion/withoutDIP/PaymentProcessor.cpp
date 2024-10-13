//
// Created by nisha on 10/13/2024.
//

#include "PaymentProcessor.h"

static void processPayment(const std::string& method, int amount) {
    if (method == "CreditCard") {
        CreditCardPayment creditCard;
        creditCard.pay(amount);
    } else if (method == "PayPal") {
        PayPalPayment paypal;
        paypal.pay(amount);
    } else {
        std::cout << "Unknown payment method.\n";
    }
}