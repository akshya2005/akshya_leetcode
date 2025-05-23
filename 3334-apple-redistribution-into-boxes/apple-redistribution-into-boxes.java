class Solution {
    public int minimumBoxes(int[] apple, int[] capacity) {
    int totalApples = 0;
        for (int a : apple) {
            totalApples += a;
        }
Arrays.sort(capacity);
int m = capacity.length;
int totalCapacity = 0;
 int boxCount = 0;
for (int i = m - 1; i >= 0; i--) {
 totalCapacity += capacity[i];
 boxCount++;
  if (totalCapacity >= totalApples) {
return boxCount;
            }
        }
return boxCount;
    }
}
  
    