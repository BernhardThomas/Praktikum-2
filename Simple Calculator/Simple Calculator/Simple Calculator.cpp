#include <iostream>
using std::cout;
using std::cin;

#include <stdexcept>
using std::cerr;
using std::runtime_error;

void prompt()
{
    cout << "Bitte geben sie eine Operator (+, -, * oder /), gefolgt von zwei Operanden ein. \n";
}

double calculation(const double& a, const double& b, const char& op)
{
    double result{};

    switch (op)
    {
    case '+':
        result = a + b;
        break;
    case '-':
        result = a - b;
        break;
    case '*':
        result = a * b;
        break;
    case '/':
        result = a / b;
        break;
    default:
        throw runtime_error("Illegal Operator");
    }

    return result;
}



int main()
{

    double val1{};
    double val2{};
    double result{};
    char op{};

    try {
        prompt();
        
        cin >> op >> val1 >> val2;

        result = calculation(val1, val2, op);
       
        cout << '\n' << val1 << op << val2 << '=' << result;
    }

    catch (runtime_error& re)
    {
        cerr << re.what();
    }

    catch(...)
    {
        cerr << "unknown error";
    }
}
