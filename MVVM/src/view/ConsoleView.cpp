//
// Created by nisha on 10/10/2024.
//

#include "../../include/view/ConsoleView.h"

void ConsoleView::display(const PersonViewModel& viewModel) {
    std::cout << viewModel.getDisplayName() << std::endl;
}