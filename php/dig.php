 <?php
function digit($a)
{
  
    $sum=0;
    while($a!=0)
    {
      $dig=$a%10;
      $sum=$sum+$dig;
      $a=$a/10;
    }
    echo"sum of digits= $sum";
}
echo"enter a five digit number\n";
fscanf(STDIN, "%d\n", $num);
echo digit($num);
?>