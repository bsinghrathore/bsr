puts "Enter N between 1-10"
n = gets.chomp
case n
when 0 
  puts "You typed zero"
when 1, 9 
  puts "n is a perfect square"
when 2 
  puts "n is a prime number"
  puts "n is an even number"
when 3, 5, 7 
  puts "n is a prime number"
when 4, 6, 8 
  puts "n is an even number"
else              
  puts "Only single-digit numbers are allowed"
end