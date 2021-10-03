<?php
    $listofnumber = array(4,5,2,100,-2,5,8);
    echo "Original list of number :\n";
    echo implode(', ',$listofnumber );
    echo "\nSorted list of number :\n";
    echo implode(', ',bubble_sort($listofnumber));

    function bubble_sort($numlist )
    {
        do
        {
            $swap = false;
            for( $i = 0, $c = count($numlist) - 1; $i < $c; $i++ )
            {
                if( $numlist[$i] > $numlist[$i + 1] )
                {
                    list( $numlist[$i + 1], $numlist[$i] ) =
                            array( $numlist[$i], $numlist[$i + 1] );
                    $swap = true;
                }
            }
        }
        while( $swap );

        return $numlist;

    }
?>
