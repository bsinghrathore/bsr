def s(c,d)
sum=Array.new(3)
for i in 0..2
 sum[i]=Array.new(3)	
  for j in 0..2
sum[i][j]=c[i][j]+d[i][j]
end
 end
puts"array after addition"
for k in 0..2
  for l in 0..2
puts "#{sum[k][l]}"
end 
 end
  end
 a=Array.new(3)
b=Array.new(3)
 for i in 0..2
  a[i] = Array.new(3)
  for j in 0..2
   a[i][j] = gets.chomp.to_i;
       end 
         end
puts"enter a  array\n"
for i in 0..2
b[i] = Array.new(3)
 for j in 0..2
 b[i][j] = gets.chomp.to_i;
  end
    end
 s(a,b)

