#include <stdio.h>
#include <string.h>

int main(void)
{
    char path[512];

    printf("Podaj nazwę pliku: ");
    if (!fgets(path, sizeof(path), stdin))
    {
        printf("Błąd: nie udało się wczytać nazwy pliku.\n");
        return 1;
    }

    size_t len = strlen(path);
    if (len && path[len - 1] == '\n')
        path[len - 1] = '\0';

    FILE *f = fopen(path, "r");
    if (!f)
    {
        printf("Błąd: nie można otworzyć pliku \"%s\".\n", path);
        return 1;
    }

    long lines = 0;
    char buf[4096];
    while (fgets(buf, sizeof(buf), f))
    {
        lines++;
    }

    fclose(f);
    printf("Liczba linii w pliku \"%s\": %ld\n", path, lines);
    return 0;
}