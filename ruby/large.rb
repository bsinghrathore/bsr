def l(c)
large=c[0][0]
for i in 0..3
  for j in 0..3
   if(c[i][j]>large)
     large=c[i][j]
    end
     end
      end
puts"largest element\n #{large}"
end

  a=[3],[3]
  
 
puts"enter a  array\n"
for row in 0..3
  for col in 0..3
a[row][col]= gets;
end
 end
 l(a)
