<?php //fizzbuzz.php

foreach (range(1,100) as $i) {
  if( $i % 3 == 0 ){
    echo "Fizz";
    echo "\n";
  }
  elseif( $i % 5 == 0 ){
    echo "Buzz";
    echo "\n";
  }
  else{
    echo $i;
    echo "\n";
  }
}
