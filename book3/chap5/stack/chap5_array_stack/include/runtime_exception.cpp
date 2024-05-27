#include "runtime_exception.h"

RuntimeException::RuntimeException(const string& err)
{
    errorMsg = err;
}

string RuntimeException::getMessage() const
{
    return errorMsg; 
}