#include <iostream>

#include "include/model/Person.h"
#include "include/view/ConsoleView.h"
#include "include/viewmodel/PersonViewModel.h"

int main() {
    Person person("Alice", 30);
    PersonViewModel viewModel(person);
    ConsoleView view;

    view.display(viewModel);

    return 0;
}