 <?php
function s($c)
{
$b=$c[0][0];

  for ($i = 0; $i <3; $i++)
{
for ($j = 0; $j <3; $j++)
{
if($c[$i][$j]>$b)
     {
      $b=$c[$i][$j];
     }
}
}
echo "largest element $b";
}
  $a=array();
   
 
echo"enter a 3*3 array\n";
for ($row = 0; $row <3; $row++)
{
for ($col = 0; $col < 3; $col++)
{
fscanf(STDIN, "%d\n", $a[$row][$col]);
}
}
echo s($a);
?>
