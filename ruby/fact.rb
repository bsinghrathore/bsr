
def fact(n)
  if n == 0
    1
  else
    n * fact(n-1)
  end
end
print "Please enter number 1 : ";
val1 = gets;

print fact(val1.to_i);