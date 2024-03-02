

// Линейный поиск
int search(int arr[], int size, int x)
{
    int i;
    for (i = 0; i < size; i++)
        if (arr[i] == x)
            return i;
    return -1;
}