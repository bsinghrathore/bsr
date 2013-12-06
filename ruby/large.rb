def l(c)
large=c[0][0]
for i in 0..2
  for j in 0..2
   if(c[i][j]>large)
     large=c[i][j]
    end
     end
      end
puts"largest element\n #{large}"
end

  a=Array.new(3)
  
 
puts"enter a  array\n"
for row in 0..2
a[row] = Array.new(3)
  for col in 0..2
a[row][col]= gets.chomp.to_i;
end
 end
 l(a)
