 <?php
function fibonacci($a)
{
  
		$prev=1;
                   $next=1;
		for($n=1;$n<=$a;$n++)
		{
			echo"$prev\n";
			$sum=$prev+$next;
			$prev=$next;
			$next=$sum;
		}
}
echo"0\n";
echo fibonacci(23);
?>