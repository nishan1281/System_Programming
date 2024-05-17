//
// Created by nisha on 5/4/2024.
//

#include "iostream"

class view{
public:
    view(char *start, std::size_t size): m_start(start), m_end{start+size} {}

    //incorrect
//    view(char *start, std::size_t size): m_start(start), m_end{m_start+size} {}

private:
    char *m_end;
    char *m_start;

};