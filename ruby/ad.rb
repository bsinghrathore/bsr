def mul(c,d)
sum=[3],[3]
for i in 0..3
  for j in 0..3
sum[i][j]=c[i][j]+d[i][j]
end
 end
puts"array after addition"
for k in 0..3
  for l in 0..3
puts "#{sum[k][l]}"
end 
 end
  end

  a=[3],[3]
   b=[3],[3]
 
puts"enter a  array\n"
for row in 0..3
  for col in 0..3
a[row][col]= gets;
end
 end

puts"enter a  array\n"
for row in 0..3
  for col in 0..3
b[row][col] = gets;
end
 end
 s(a,b)
