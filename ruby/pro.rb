def mul(c,d)
m=[3],[3]
for i in 0..3
  for j in 0..3
   sum=0
   for k in 0..3
sum=sum+c[i][k]+d[k][j]
end
m[i][j]=sum
 end
  end
puts"array after multiplication"
for k in 0..3
  for l in 0..3
puts "#{m[k][l]}"
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
 mul(a,b)
