def arr(c)
s=Array.new(3)
for i in 0..2
 s[i]=Array.new(3)
  for j in 0..2
 s[i][j]=c[i][j]*3
end
 end
puts"array after operation\n"
for k in 0..2
  for l in 0..2
puts "#{s[k][l]}"
end 
 end
  end

  a=Array.new(3)
  
 
puts"enter a  array\n"
for row in 0..2
  a[row] = Array.new(3)	
  for col in 0..2
a[row][col]= gets.chomp.to_i;
end
 end
 arr(a)
