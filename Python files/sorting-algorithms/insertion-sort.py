def insertionSort(arr): 
  
    # starts at second position of array
    for i in range(1, len(arr)): 
  
        key = arr[i] 

        j = i-1
        # Compare the key of the current position with the previous position
        # while the key is smaller than the previous one, the values ​​are exchanged and we move on to the next key
        # Until we reach the end of the array
        while j >=0 and key < arr[j] : 
                arr[j+1] = arr[j] 
                j -= 1
        arr[j+1] = key 
  


arr = [12, 11, 13, 15, 6, 2, 3 ,4 ,1] 

print ("BEFORE INSERTION SORT:\n", arr) 
insertionSort(arr) 
print ("AFTER INSERTION SORT:\n", arr) 
  
