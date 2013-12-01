 <?php
function s($c, $d)
{
$sum=array();
  for ($i = 0; $i <3; $i++)
{
for ($j = 0; $j <3; $j++)
{
$sum[$i][$j]=$c[$i][$j]+$d[$i][$j];
}
}
echo"array after addition";
for ($k = 0; $k <3; $k++)
{
for ($l = 0; $l <3; $l++)
{
echo "{$sum[$k][$l]}";
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
