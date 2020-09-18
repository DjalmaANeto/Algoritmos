#include <stdio.h>
#include <stdbool.h>
bool q8(bool a, bool b, bool c);
void main()
{
    bool a = false,
    b = true,
    c = false,
    d = q8(a, b, c);
    if (d = true)
    {
        printf("true");
    }else if (d = false)
    {
        printf("false");
    }
    
}

bool q8(bool a, bool b, bool c)
{
    return (a && b)&&((c||a||b)||(!a&&c));
}