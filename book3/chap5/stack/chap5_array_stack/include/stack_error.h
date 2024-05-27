#ifndef STACK_ERROR_H
#define STACK_ERROR_H
#include <iostream>
#include <string>
#include "runtime_exception.h"

class StackEmpty: public RuntimeException
{
    public:
        StackEmpty(const string& err):RuntimeException(err){};
};

class StackFull: public RuntimeException
{
    public:
        StackFull(const string& err):RuntimeException(err){};
};



#endif