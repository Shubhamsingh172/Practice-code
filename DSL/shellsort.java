import java.util.*;

class Shellsort
{
    void shellSort(int []arr)
    {
        int n = arr.length;
        for(int gap = n / 2; gap > 0; gap /= 2)
        {
            for(int i = gap; i < n; i++)
            {
                int temp = arr[i];
                int j;
                for(j = i; j >= gap && arr[j - gap] > temp; j -= gap)
                {
                    arr[j] = arr[j - gap];
                }
                arr[j] = temp;
            }
        }
    }
    
    static void display(int []arr)
    {
        for(int val : arr)
            System.out.print(val + " ");
        System.out.println();
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter how many elements : ");
        int n = sc.nextInt();
        int []arr = new int[n];
        for(int i = 0; i < n; i++)
            arr[i] = sc.nextInt();
        
        System.out.println("Array Before Sorting");
        display(arr);
        
        Shellsort shell = new Shellsort();
        shell.shellSort(arr);
        
        System.out.println("Array After Sorting");
        display(arr);
        sc.close();
    }
}