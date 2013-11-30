
def year(n)
   if (n % 4 == 0)
      if (n % 100 == 0)
         if(n % 400 == 0)
           return true
         end
        return false
      end
      return true
   end
  return false
end
print "enter year : ";
val1 = gets;

print year(val1.to_i);