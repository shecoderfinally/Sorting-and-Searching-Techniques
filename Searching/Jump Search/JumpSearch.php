<?php
function jumpSearch($arr, $x, $n)
{

    $step = sqrt($n);
 

    $prev = 0;
    while ($arr[min($step, $n)-1] < $x)
    {
        $prev = $step;
        $step += sqrt($n);
        if ($prev >= $n)
            return -1;
    }
 
   
    while ($arr[$prev] < $x)
    {
        $prev++;
 
      
        if ($prev == min($step, $n))
            return -1;
    }
  
    if ($arr[$prev] == $x)
        return $prev;
 
    return -1;
}
 
?>