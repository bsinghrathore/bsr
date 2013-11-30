
def fact(n)
$sum=0
  while ($n!=0) do
      $dig=$a%10;
      $sum=$sum+$dig;
      $n=$n/10;

end
print "sum of digit : " $sum;
end
print "Please enter number  : ";
val1 = gets;
fact(val1.to_i);