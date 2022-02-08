#include<bits/stdc++.h>
using namespace std;

int EvaluatePostfix(string expression);

int preformOperation(char operation, int operand1, int operand2);

bool IsOperator(char C);

bool IsNumericDigit(char C);

int main()
{
    string expression;
    cout<<"Enter the postfix Expresson \n";
    getline(cin, expression);
    int result = EvaluatePostfix(expression);
    cout<<"Output = "<<result<<"\n";
}

int EvaluatePostfix(string expression)
{
    stack<int>S;
    for(int i = 0;i<expression.length();i++)
    {
        if(expression[i] == ' ' || expression[i] == ',')
            continue;

        else if (IsOperator(expression[i]))
        {
            int operand2 = S.top();
            S.pop();
            
            int operand1 = S.top();
            S.pop();
            int result = preformOperation(expression[i], operand1,operand2);
            S.push(result);
        }

        else if (IsNumericDigit(expression[i]))
        {
            int operand = 0;
            while(i<expression.length() && IsNumericDigit(expression[i]))
            {
                operand = (operand*10)+(expression[i] - '0');
                i++;
            }
            i--;
            S.push(operand);
        }
    }
    return S.top();
}

bool IsNumericDigit(char C)
{
    if(C>='0' && C<='9')
        return true;
    return false;
}

bool IsOperator(char C)
{
    if(C == '+' || C == '-' || C == '*' || C == '/')
        return true;
    return false;
}

int preformOperation(char operation, int operand1, int operand2)
{
    if(operation == '+')
        return operand1 + operand2;
    else if(operation == '-')
        return operand1-operand2;
    else if(operation = '*')
        return operand1 * operand2;
    else if(operation == '/')
        return operand1 / operand2;

    else 
        cout<<"Unexpected Error \n";
    return -1;
}