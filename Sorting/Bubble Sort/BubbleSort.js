const bubble_Sort = (nums) => {
  if(!Array.isArray(nums)) return -1; // --->if passed argument is not array
  if(nums.length<2) return nums; // --->if array length is one or less

    let swapped=false
     temp=0,
     count=-1,
     arrLength=0;


    do{
      count ++;
      swapped=false;
      arrLength = (nums.length-1) - count; //---> not loop through sorted items
      for(let i=0; i<=arrLength; i++){
          if(nums[i]>nums[i+1]){
            temp=nums[i+1];
            nums[i+1]=nums[i];
            nums[i]=temp;
            swapped=true;
          }
      }
    }

    while(swapped)
    return nums;
  }
  console.log(bubble_Sort([3, 0, 2, 5, -1, 4, 1]));
