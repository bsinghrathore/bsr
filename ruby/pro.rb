def mul(c,d)
m= Array.new(3)
for i in 0..2
m[i] = Array.new(3)
  for j in 0..2
   sum=0
   for k in 0..2
   sum=sum+c[i][k]+d[k][j]
   end
m[i][j]=sum
    end
     end

puts"array after multiplication"
for k in 0..2
  for l in 0..2
puts "#{m[k][l]}"
end 
 end
  end

  a=Array.new(3)
  b=Array.new(3)
 
puts"enter a  array\n"
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
 
 mul(a,b)
