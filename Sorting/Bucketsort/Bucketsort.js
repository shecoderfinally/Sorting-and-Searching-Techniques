<script>
function Bucketsort(arr,n)
{
    if (n <= 0){
            return;
  
        // 1) Create n empty buckets      
        let buckets = new Array(n);
  
        for (let i = 0; i < n; i++)
        {
            buckets[i] = [];
        }
  
        // 2) Put array elements in different buckets
        for (let i = 0; i < n; i++) {
            let idx = arr[i] * n;
            buckets[Math.floor(idx)].push(arr[i]);
        }
  
        // 3) Sort individual buckets
        for (let i = 0; i < n; i++) {
            buckets[i].sort(function(a,b){return a-b;});
        }
  
        // 4) Concatenate all buckets into arr[]
        let index = 0;
        for (let i = 0; i < n; i++) {
            for (let j = 0; j < buckets[i].length; j++) {
                arr[index++] = buckets[i][j];
            }
        }
    }
}
 
// Driver code
let arr = [0.897, 0.565,
         0.656, 0.1234,
         0.665, 0.3434];
let n = arr.length;
bucketSort(arr, n);
 
document.write("Sorted array is <br>");
for (let el of arr.values()) {
    document.write(el + " ");
}

</script>