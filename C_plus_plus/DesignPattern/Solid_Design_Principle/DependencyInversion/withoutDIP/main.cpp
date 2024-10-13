//
// Created by nisha on 10/13/2024.
//

#include "PaymentProcessor.h"

int main() {
    PaymentProcessor processor;

    processor.processPayment("CreditCard", 100);
    processor.processPayment("PayPal", 150);

    return 0;
}

// In this code:
//
// The PaymentProcessor class depends directly on the CreditCardPayment and PayPalPayment classes.
// If a new payment method is introduced (e.g., ApplePayPayment), we would need to modify PaymentProcessor,
// violating the Open-Closed Principle as well.
// This approach is rigid and inflexible due to the direct dependency on concrete payment classes, which is where
// Dependency Inversion can help by introducing abstractions for better extensibility.






