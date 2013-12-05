def trans(c)
s=[3],[3]
for i in 0..3
  for j in 0..3
s[j][i]=c[i][j]
end
 end
puts"array after transpose"
for k in 0..3
  for l in 0..3
puts "#{s[k][l]}"
end 
 end
  end

  a=[3],[3]
  
 
puts"enter a  array\n"
for row in 0..3
  for col in 0..3
a[row][col]= gets;
end
 end
 trans(a)
