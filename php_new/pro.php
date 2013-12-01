 <?php
function s($c, $d)
{
$e=array();
  for ($i = 0; $i <3; $i++)
{
for ($j = 0; $j <3; $j++)
    $sum = 0;
{            
for($k=0;$k<3;$k++)
{
$sum=$sum+$c[$i][$k]+$d[$k][$j];
}
$e[$i][$j]=$sum;
}
}
echo"array after multiplication";
for ($m = 0; $m <3; $m++)
{
for ($n = 0; $n <3; $n++)
{
echo "{$e[$m][$n]}";
}
}

}
  $a=array();
   $b=array();
 
echo"enter a 6*6 array\n";
for ($row = 0; $row <3; $row++)
{
for ($col = 0; $col < 3; $col++)
{
fscanf(STDIN, "%d\n", $a[$row][$col]);
}
}
echo"enter a 6*6 array\n";
for ($row = 0; $row <3; $row++)
{
for ($col = 0; $col < 3; $col++)
{
fscanf(STDIN, "%d\n", $b[$row][$col]);
}
}
echo s($a,$b);
?>
