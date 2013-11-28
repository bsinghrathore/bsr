 <?php
function power($num1,$num2)
{
    $p=1;
for( $i=1;$i<=$num2;$i++)
    {
     $p=$p*$num1;
    }
echo "power number 1 raised to number 2 is : $p";
}
echo "enter the number 1\n";
fscanf(STDIN, "%d\n", $nu);
echo "enter the number 2\n";
fscanf(STDIN, "%d\n", $num);
echo power($nu,$num);
?>