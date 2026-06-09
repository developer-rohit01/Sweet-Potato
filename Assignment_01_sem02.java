//Demonstrate one-dimensional and multi-dimensional arrays using enhanced for-loop.


public class Assignment_01_sem02 {
public static void main(String[] args) {
int arr[] = {10,20,30,40};
System.out.println("1D Array:");
for(int x : arr)
System.out.print(x + " ");
int matrix[][] = {
{1,2,3},
{4,5,6}
};
System.out.println("\n2D Array:");
for(int row[] : matrix){
for(int value : row){
System.out.print(value + " ");
}
System.out.println();
}
}
}