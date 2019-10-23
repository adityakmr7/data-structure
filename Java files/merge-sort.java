import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.Arrays;
 
public class MergeSort {
    static void merge(int[] array,int low,int mid,int high){
        int i,j,k;
        int[] c= new int[high-low+1];
        k = 0;
        i=low;
        j=mid+1;
        while(i<=mid && j<=high){
            if(array[i]<=array[j]){
                c[k++] = array[i++];
            }
            else{
                c[k++] = array[j++];
            }
        }
        while(i<=mid){
            c[k++] = array[i++];
        }
        while(j<=high){
            c[k++] = array[j++];
        }
        k=0;
        for(i = low; i<=high; i++){
            array[i] = c[k++];
        }
    }
    static void mergeSort(int[] array,int low, int high){
        if(high-low+1>1){
            int mid = (low+high)/2;
            mergeSort(array,low,mid);
            mergeSort(array,mid+1,high);
            merge(array,low,mid,high);
        }
    }
    public static void main(String[] args) {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int size;
        System.out.println("Enter the size of the array");
        try {
            size = Integer.parseInt(br.readLine());
        } catch (Exception e) {
            System.out.println("Invalid Input");
            return;
        }
        int[] array = new int[size];
        System.out.println("Enter array elements");
        int i;
        for (i = 0; i < array.length; i++) {
            try {
                array[i] = Integer.parseInt(br.readLine());
            } catch (Exception e) {
                System.out.println("An error Occurred");
            }
        }
        System.out.println("The initial array is");
        System.out.println(Arrays.toString(array));
        mergeSort(array,0,array.length-1);
        System.out.println("The sorted array is");
        System.out.println(Arrays.toString(array));
    }
}