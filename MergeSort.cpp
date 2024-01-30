void mergeArray(vector<int>& array, const int first, const int mid, const int last){

    const int sizeA = mid - first + 1;
    const int sizeB = last - mid;
    int indexC = first;

    // create two temp arrays
    int* arrA = new int[sizeA];
    int* arrB = new int[sizeB]; 

    for(int i = 0 ; i < sizeA ; i++)
        arrA[i] = array[first + i];
    for(int i = 0 ; i < sizeB ; i++)
        arrB[i] = array[mid + 1 + i];

    int indexA, indexB;
    indexA = indexB = 0;   
    //Merge array[arrA .. arrB]
    while(indexA < sizeA && indexB < sizeB){
        if(arrA[indexA] <= arrB[indexB] || indexB == sizeB)
            array[indexC++] = arrA[indexA++];
        else  
            array[indexC++] = arrB[indexB++];
    }
    //add the remaining elements of arrA and arrB
    while(indexA < sizeA)
        array[indexC++] = arrA[indexA++];
    while(indexB < sizeB)
        array[indexC++] = arrB[indexB++];

    delete[] arrA;
    delete[] arrB;
}

//Divides array into 2 {Recursive}
void mergeSortX(vector<int>& array, const int first, const int last){

    if(first >= last)
        return;

    int mid = first + (last - first)/2;

    mergeSortX(array, first, mid);
    mergeSortX(array, mid + 1, last);
    mergeArray(array, first, mid, last);
}

void mergeSort(vector < int > & arr, int n) {
    if(n == 0 || n == 1) return;
    mergeSortX(arr, 0, n-1);
}