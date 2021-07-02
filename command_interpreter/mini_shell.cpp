#include <iostream> // header in standard library
#include <unistd.h>
#include <stdio.h>


using namespace std;

int main()
{
    int characters;
    char *buffer;
    size_t size = 0;

    while (1)
    {
        printf("Prompt$ ");
        characters = getline(&buffer, &size, stdin);
        printf("You just said %s", buffer);
        sleep(5);
    }

    return 0;
}