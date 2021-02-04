void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    // Inicjacja tymczasowych tablic
    int L[n1], R[n2];
 
    // Kopiowanie danych do tymczasowych tablic
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
 
    // Łączenie tymczasowych tablic z tablicą główną (arr[])
 
    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
 
    //kopiowanie pozostałości z tablicy L[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
 
    //kopiowanie pozostałości z tablicy R[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}