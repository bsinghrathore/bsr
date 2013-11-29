 <?php
function le($a)
{
if($a%4 == 0) 
  {
            
  if($a%100 == 0)
  { 
  if ($a%400 == 0)
  echo"it is a leap year.\n";
  else 
  echo"it is not a leap year";
  }
  else
 echo"it is a leap year";
  }
  else
  {
  echo"it is not a leap year";
}
}
echo "enter the year\n";
fscanf(STDIN, "%d\n", $y);

echo le($y);
?>