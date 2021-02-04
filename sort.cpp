void mergeSort(int arr[], int l ,int r){
    if(r > l){
        int m = l + ( r - l ) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1 ,r);
        merge(arr, l, m, r); // funckja merge() znajduje się w pliku merge.cpp 
    }
}