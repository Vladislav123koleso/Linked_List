//Делим массив пополам и относительно середины смотрим в какой половине находится искомое число

int BinarySearch(int arr[], int l, int r, int x)
{
    // x - искомое значение
    // l и r - левая и правая границы интервала (индексы)
    if(r >= l)
    {
        int mid = l + (r - l) / 2; // середина интервала

        if(arr[mid] == x)
        {
            return mid;
        }
        // если значение меньше середины интервала, повторить операцию с левым полуинтервалом
        if(arr[mid] > x)
        {
            return BinarySearch(arr, l, mid - 1, x);
        }

        return BinarySearch(arr, mid +1, r, x);
    }
    return -1;
}